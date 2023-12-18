/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdouzi < mdouzi@student.1337.ma>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 05:02:59 by mdouzi            #+#    #+#             */
/*   Updated: 2023/11/22 15:34:57 by mdouzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal
{
	private:
		std::string	type;
		Brain *brain;

	public:
		Cat();
		virtual ~Cat();
		Cat(Cat &other);
		Cat & operator=(Cat const & other);
		void makeSound() const;
		std::string getType( void ) const;
		Brain *getBrain( void ) const;
};

#endif