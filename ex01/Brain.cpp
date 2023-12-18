/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdouzi <  mdouzi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 01:49:14 by mdouzi            #+#    #+#             */
/*   Updated: 2023/11/27 00:05:58 by mdouzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    this->ideas = new std::string[100];
    for(int i = 0; i < 100 ; i++) {
        this->ideas[i] = "Brain Brains";
    }
    std::cout << "Brain constructor called" << std::endl;   
}

Brain::~Brain()
{
    delete [] this->ideas;
    std::cout << "Brain distructors called" << std::endl;
}

Brain::Brain(Brain const &other)
{
    this->ideas = new std::string[100];
    for(int i = 0; i < 100; i++) {
        this->ideas[i] = other.ideas[i] + "copied" ;
    }
    std::cout << "Brain  copy constructor called" << std::endl;
}

Brain & Brain::operator=(Brain const & other)
{
    for (int i = 0 ; i < 100; i++) {
        this->ideas[i] = other.ideas[i];
    }
    return (*this);
}

std::string *Brain::getIdeas(void) const
{
    return(this->ideas);
}