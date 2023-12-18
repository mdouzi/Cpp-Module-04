/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdouzi < mdouzi@student.1337.ma>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 05:22:07 by mdouzi            #+#    #+#             */
/*   Updated: 2023/11/22 15:23:57 by mdouzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"


Dog::Dog(): type("Dog")
{
	std::cout << "Dog constructor called " << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called " << std::endl;
}

Dog::Dog(Dog &other)
{
	this->type = other.getType();
	std::cout << "Dog Copy assingement Constructor called" << std::endl;
}

Dog& Dog::operator=(Dog const &other)
{
	this->type = other.type;
    std::cout << "Dog '=' operator called" << std::endl;
	return(*this);
}

void Dog::makeSound() const
{
	std::cout << "Woof Woof" << std::endl;
}

std::string Dog::getType( void ) const
{
	return (this->type);
}