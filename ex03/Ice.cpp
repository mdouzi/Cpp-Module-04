/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdouzi < mdouzi@student.1337.ma>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 22:11:41 by mdouzi            #+#    #+#             */
/*   Updated: 2023/11/30 05:21:30 by mdouzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
    std::cout << "Ice default constructor been called" << std::endl;
}

Ice::~Ice()
{
    std::cout << "Ice Destructor been called" << std::endl;
}

Ice::Ice(Ice const &other)
{
    this->_type = other._type;
    std::cout << "Ice copy constructor been called" << std::endl;
}

Ice &Ice::operator=(Ice const &other)
{
    this->_type = other._type;
    std::cout << "Ice operator '=' been called" << std::endl;
    return (*this);
}

Ice *Ice::clone() const
{
    Ice *cl = new Ice;
    return (cl);
}

void Ice::use(ICharacter &target)
{
    std::string target_name = target.getName();
    std::cout << " shoots an ice bolt at " << target_name << std::endl;
}
