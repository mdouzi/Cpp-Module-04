/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdouzi < mdouzi@student.1337.ma>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 05:16:56 by mdouzi            #+#    #+#             */
/*   Updated: 2023/11/20 11:36:55 by mdouzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): type("Cat")
{
	this->brain = new Brain;
	std::cout << "cat constructor called :: with Brain" << std::endl;
}

Cat::~Cat()
{
	delete this->brain;
	std::cout << "cat destructor called :: with Brain " << std::endl;
}

Cat::Cat(Cat const &other) :Animal(other)
{
	this->type = other.getType();
	if(this->brain)
		delete this->brain;
	this->brain = new Brain(*(other.getBrain()));
	std::cout << "cat Copy assingement Constructor called :: With Brain" << std::endl;
}

Cat & Cat::operator=(Cat const &other)
{
	this->type = other.type;
	if(this->brain)
		delete this->brain;
	this->brain = new Brain(*(other.getBrain()));
    std::cout << "Cat '=' operator called :: With Brain" << std::endl;
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << "Meow meow :: With Brain" << std::endl;
}

std::string Cat::getType( void ) const
{
	return (this->type);
}

Brain *Cat::getBrain( void ) const
{
	return (this->brain);
}
