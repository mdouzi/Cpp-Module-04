/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdouzi < mdouzi@student.1337.ma>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 05:22:07 by mdouzi            #+#    #+#             */
/*   Updated: 2023/11/20 11:42:41 by mdouzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"


Dog::Dog(): type("Dog")
{
	this->brain = new Brain;
	std::cout << "Dog constructor called :: with Brain" << std::endl;
}

Dog::~Dog()
{
	delete this->brain;
	std::cout << "Dog destructor called :: with Brain " << std::endl;
}

Dog::Dog(const Dog &other)
{
	this->type = other.getType();
	this->brain = new Brain(*(other.getBrain()));
	std::cout << "Dog Copy assingement Constructor called :: with Brain" << std::endl;
}

Dog & Dog::operator=(Dog const &other)
{
	this->type = other.type;
	if(this->brain)
		delete this->brain;
	this->brain = new Brain(*(other.getBrain()));
    std::cout << "Dog '=' operator called :: with Brain" << std::endl;
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << "Woof Woof :: With Brain" << std::endl;
}

std::string Dog::getType( void ) const
{
	return (this->type);
}

Brain *Dog::getBrain( void ) const
{
	return (this->brain);
}
