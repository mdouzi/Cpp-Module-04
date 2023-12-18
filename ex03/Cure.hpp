/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdouzi < mdouzi@student.1337.ma>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 21:19:05 by mdouzi            #+#    #+#             */
/*   Updated: 2023/11/30 02:18:59 by mdouzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"
#include <iostream>

class Cure : public AMateria
{
public:
    Cure();
    ~Cure();
    Cure(Cure const &other);
    Cure &operator=(Cure const &other);
    Cure *clone() const;
    void use(ICharacter &target);
};

#endif // CURE_HPP
