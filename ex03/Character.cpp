/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdouzi < mdouzi@student.1337.ma>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 05:15:32 by mdouzi            #+#    #+#             */
/*   Updated: 2023/11/30 05:56:10 by mdouzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string name) : _name(name)
{
    for (int i = 0; i < 4; ++i)
    {
        inventory[i] = nullptr;
    }
}

Character::Character(Character const &other) : _name(other._name)
{
    for (int i = 0; i < 4; ++i)
    {
        if (other.inventory[i] != nullptr)
        {
            inventory[i] = other.inventory[i]->clone();
        }
        else
        {
            inventory[i] = nullptr;
        }
    }
}

Character::~Character()
{
    for (int i = 0; i < 4; ++i)
    {
        delete inventory[i];
    }
}

Character &Character::operator=(Character const &other)
{
    if (this != &other)
    {
        for (int i = 0; i < 4; ++i)
        {
            delete inventory[i];
            if (other.inventory[i] != nullptr)
                inventory[i] = other.inventory[i]->clone();
            else
                inventory[i] = nullptr;
        }

       this->_name = other._name;
    }
    return *this;
}


int Character::getNumMatria(void)
{
    int i = 0;
    while (this->inventory[i] != nullptr && i < 4)
        i++;
    return i;
}

void Character::equip(AMateria *ev)
{
    if (!ev)
    {
        std::cout << "Empty AMateria, so nothing changes" << std::endl;
        return;
    }
    if (this->getNumMatria() < 4)
    {
        int i = this->getNumMatria();
        this->inventory[i] = ev->clone();
    }
    else
        std::cout << "Cannot equip more than 4 Materia" << std::endl;
}

void Character::unequip(int index)
{
    if (index < 0 || index >= 4)
        std::cout << _name << " tried to unequip nothing at slot " << index << " and it did nothing" << std::endl;
    else if (!inventory[index])
        std::cout << _name << " has nothing equipped at slot " << index << ", so he can't unequip it" << std::endl;
    else
    {
        std::string m = this->inventory[index]->getType();
        delete this->inventory[index];
        std::cout << _name << " unequipped " << m << " at slot " << index << "" << std::endl;
        inventory[index] = nullptr;
    }
}

void Character::use(int index, ICharacter &target)
{
    std::string name = getName();

    if (index < 0 || index >= 4 || !inventory[index])
    {
        std::cout << "Nothing found to use at index " << index << std::endl;
        return;
    }

    std::cout << name;
    inventory[index]->use(target);
}

AMateria *Character::getMateriaFromInventory(int idx)
{
    return inventory[idx];
}

std::string const &Character::getName() const
{
    return _name;
}
