/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdouzi < mdouzi@student.1337.ma>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 05:35:10 by mdouzi            #+#    #+#             */
/*   Updated: 2023/11/08 22:25:01 by mdouzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WrongCat_HPP
# define WrongCat_HPP

#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
	private:
		std::string	type;

	public:
		WrongCat();
		~WrongCat();
		WrongCat(const WrongCat & other);
		WrongCat & operator=(WrongCat const & other);
		void makeSound() const;
		std::string getType( void ) const;
};

#endif