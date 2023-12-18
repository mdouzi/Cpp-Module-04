/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdouzi < mdouzi@student.1337.ma>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 21:18:06 by mdouzi            #+#    #+#             */
/*   Updated: 2023/11/30 02:14:36 by mdouzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
    std::cout << "AMateria constructor been called" << std::endl;
}

AMateria::AMateria(std::string const &type) : _type(type)
{
    std::cout << "AMateria param constructor been called" << std::endl;
}

AMateria::AMateria(const AMateria &other)
{
    this->_type = other._type;
    std::cout << "AMateria copy constructor been called" << std::endl;
}

AMateria::~AMateria()
{
    std::cout << "AMateria Destructor been called" << std::endl;
}

std::string const &AMateria::getType() const
{
    return (this->_type);
}

void AMateria::use(ICharacter &target)
{
    std::cout << "AMateria abstractly used on " << target.getName() << std::endl;
}
