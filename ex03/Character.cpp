/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adidion <adidion@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 15:28:38 by adidion           #+#    #+#             */
/*   Updated: 2022/02/03 14:09:51 by adidion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string name)
{
	_name = name;
	for (int i = 0; i < 4; i++)
	{
		_slots[i] = 0;
	}
	int i = -1;
	while (++i < 1000)
		save[i] = 0;
}

Character::Character( const Character &obj )
{
	_name = obj.getName();
	for (int i = 0; i < 4; i++)
	{
		if (obj._slots[i])
			_slots[i] = obj._slots[i]->clone();
	}
	int i = -1;
	while (++i < 1000)
		save[i] = 0;
}

Character &Character::operator=( const Character &obj )
{
	for(int i = 0; i < 4; i++)
	{
		if (_slots[i])
			delete _slots[i];
		if (obj._slots[i])
			_slots[i] = (obj._slots[i])->clone();
	}
	return (*this);
}

Character::~Character()
{
	int i = -1;
	while (save[++i] && i < 1000)
	{
		delete save[i];
	}
	for(int i = 0; i < 4; i++)
	{
		if (_slots[i])
			delete _slots[i];
	}
}

std::string const & Character::getName() const
{
	return (_name);
}

void Character::equip(AMateria* m)
{
	int i = -1;

	if (!m)
	{
		std::cout << "This materia doesn't exist yet" << std::endl;
		return ;
	}
	while (i < 3 && _slots[++i]){}
	if (!_slots[i])
	{
		_slots[i] = m;
		std::cout << "Materia " << m->getType() << " equiped on the sort number " << i << std::endl;
	}
	else
	{
		std::cout << "You can't equip more than 4 Materias: it's too heavy!" << std::endl;
		delete m;
	}
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx > 3 || !_slots[idx])
	{
		std::cout << "You don't play touched flowed: Select a slot that exists" << std::endl;
		return ;
	}
	int i = -1;
	while (save[++i] && i < 1000){}
		save[i] = _slots[idx];
	if (i >= 1000)
	{
		std::cout << "Stop trying to blow up this code !" << std::endl;
		return ;
	}
	std::cout << "You unequiped the slot number " << idx << " with the materia type " << save[i]->getType() << std::endl;
	_slots[idx] = 0;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx > 3 || !_slots[idx])
	{
		std::cout << "You don't play touched flowed: Select a slot that exists" << std::endl;
		return ;
	}
	_slots[idx]->use(target);
}
