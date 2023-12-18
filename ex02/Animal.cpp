/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdouzi < mdouzi@student.1337.ma>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 04:24:39 by mdouzi            #+#    #+#             */
/*   Updated: 2023/11/21 13:21:37 by mdouzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(): type("Animal")
{
    std::cout << "Animal constructor called " << std::endl;
}

Animal::~Animal()
{
    std::cout << "Animal destructor called " << std::endl;
}

Animal::Animal(const Animal &other)
{
    *this = other;
    std::cout << "Animal Copy assingement Constructor called" << std::endl;
}


Animal &Animal::operator=(Animal const &other)
{
    this->type = other.type;
    std::cout << "Animal '=' operator called" << std::endl;
    return(*this);
}

void Animal::makeSound() const
{
    std::cout << "-----Animal Soun------" << std::endl;
}

std::string Animal::getType(void) const
{
    return(this->type);
}


