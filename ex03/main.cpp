/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdouzi < mdouzi@student.1337.ma>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 05:02:58 by mdouzi            #+#    #+#             */
/*   Updated: 2023/11/30 05:07:51 by mdouzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"

int main()
{
    // Create a character
    Character me("Alice");

    // Create some materia
    AMateria *ice = new Ice();
    AMateria *cure = new Cure();

    // Create a MateriaSource
    MateriaSource source;
    source.learnMateria(ice);
    source.learnMateria(cure);



    // Equip materia from the MateriaSource
    for (int i = 0; i < 4; ++i)
    {
        AMateria *m = source.createMateria("ice");
        if (m)
            me.equip(m);
        delete m;
    }
    std::cout << "Using materia:\n";
    me.use(0, me); // Using the first materia on itself
    me.use(1, me); // Using the second materia on itself

	std::cout << "" << std::endl;
    // Unequip materia
    me.unequip(0);

    // Use again after unequipping
    std::cout << "\nUsing materia after unequipping:\n";
    me.use(0, me); // Using the first materia on itself after unequipping

    // Deep copy of Character
    Character charles("Charles");
    charles.equip(cure);
    charles.equip(ice);

    Character charles_copy = charles; // Deep copy constructor

    // Use materia for both characters
    std::cout << "\nUsing materia for both characters:\n";
    charles.use(0, me);
    charles_copy.use(1, charles);

    // Unequip and use for deep copy
    std::cout << "\nUnequipping and using for deep copy:\n";
    charles.unequip(0);
    charles_copy.use(0, me); // Try using unequipped materia from the original character

    // Clean up
    delete ice;
    delete cure;
    return 0;
}
