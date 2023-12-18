/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdouzi < mdouzi@student.1337.ma>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 02:16:35 by mdouzi            #+#    #+#             */
/*   Updated: 2023/11/30 02:49:43 by mdouzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"
#include <iostream>

class Character : public ICharacter
{
public:
    Character(std::string name);
    Character(Character const &other);
    ~Character();
    Character &operator=(Character const &other);
    std::string const &getName() const;
    void equip(AMateria *ev);
    int getNumMatria(void);
    void unequip(int idx);
    void use(int idx, ICharacter &target);
    AMateria *getMateriaFromInventory(int idx);

private:
    AMateria *inventory[4];
    std::string  _name;
};

#endif // CHARACTER_HPP
