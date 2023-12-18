/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdouzi < mdouzi@student.1337.ma>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 05:16:56 by mdouzi            #+#    #+#             */
/*   Updated: 2023/11/22 15:23:42 by mdouzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): type("Cat")
{
	std::cout << "cat constructor called " << std::endl;
}

Cat::~Cat()
{
	std::cout << "cat destructor called " << std::endl;
}

Cat::Cat(Cat &other)
{
	this->type = other.getType();
	std::cout << "cat Copy assingement Constructor called" << std::endl;
}

Cat & Cat::operator=(Cat const &other)
{
	this->type = other.type;
    std::cout << "Cat '=' operator called" << std::endl;
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << "Meow meow" << std::endl;
}

std::string Cat::getType( void ) const
{
	return (this->type);
}