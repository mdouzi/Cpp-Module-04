/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdouzi < mdouzi@student.1337.ma>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 05:35:07 by mdouzi            #+#    #+#             */
/*   Updated: 2023/11/20 11:36:21 by mdouzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(): type("WrongCat")
{
	std::cout << "WrongCat constructor called " << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called " << std::endl;
}

WrongCat::WrongCat(const WrongCat &other) :WrongAnimal(other)
{
	this->type = other.getType();
	std::cout << "WrongCat Copy assingement Constructor called" << std::endl;
}

WrongCat & WrongCat::operator=(WrongCat const &other)
{
	this->type = other.type;
    std::cout << "WrongCat '=' operator called" << std::endl;
	return (*this);
}

void WrongCat::makeSound() const
{
	std::cout << "WrongCat Meow meow" << std::endl;
}

std::string WrongCat::getType( void ) const
{
	return (this->type);
}