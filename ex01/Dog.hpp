/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdouzi < mdouzi@student.1337.ma>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 05:21:03 by mdouzi            #+#    #+#             */
/*   Updated: 2023/11/22 15:35:05 by mdouzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal
{
	private:
		std::string	type;
		Brain *brain;

	public:
		Dog();
		virtual ~Dog();
		Dog(const Dog & other);
		Dog & operator=(Dog const & other);
		void makeSound() const;
		std::string getType( void ) const;
		Brain * getBrain(void) const;
};

#endif