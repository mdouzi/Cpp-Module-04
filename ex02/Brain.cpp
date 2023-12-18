/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdouzi < mdouzi@student.1337.ma>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 01:49:14 by mdouzi            #+#    #+#             */
/*   Updated: 2023/11/21 12:26:07 by mdouzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    for(int i = 0; i < 100 ; i++) {
        this->ideas[i] = "Brain Brains";
    }
    std::cout << "Brain constructor called" << std::endl;   
}

Brain::~Brain()
{
    std::cout << "Brain distructors called" << std::endl;
}

Brain::Brain(Brain const &other)
{
    for(int i = 0; i < 100; i++) {
        this->ideas[i] = other.ideas[i] + "copied" ;
    }
    std::cout << "Brain  copy constructor called" << std::endl;
}

Brain & Brain::operator=(Brain const & other)
{
	for (int i = 0; i < 100; i++)
		this->ideas[i] = other.ideas[i];
	return (*this);
}

std::string *Brain::getIdeas(void)
{
    return(this->ideas);
}