/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdouzi < mdouzi@student.1337.ma>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 21:19:05 by mdouzi            #+#    #+#             */
/*   Updated: 2023/11/30 05:20:37 by mdouzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
    std::cout << "Cure Constructor been called" << std::endl;
}

Cure::~Cure()
{
    std::cout << "Cure destroyed" << std::endl;
}

Cure::Cure(Cure const &other)
{
	if(this != &other)
		this->_type = other._type;
    std::cout << "Cure copy constructor been called" << std::endl;
}

Cure &Cure::operator=(Cure const &other)
{
    (void) other;
    std::cout << "Cure operator ' = ' been called " << std::endl;
    return (*this);
}

Cure *Cure::clone() const
{
    Cure *cl = new Cure;
    return (cl);
}

void Cure::use(ICharacter &target)
{
    std::string target_name = target.getName();
    std::cout << " heals " << target_name << "'s wounds" << std::endl;
}
