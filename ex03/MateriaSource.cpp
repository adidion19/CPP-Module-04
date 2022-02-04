/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adidion <adidion@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 14:18:26 by adidion           #+#    #+#             */
/*   Updated: 2022/02/03 14:28:51 by adidion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		_slots[i] = 0;
	}
}

MateriaSource::MateriaSource(MateriaSource const &obj)
{
	for (int i = 0; i < 4; i++)
	{
		if (obj._slots[i])
			_slots[i] = obj._slots[i]->clone();
	}
}

MateriaSource &MateriaSource::operator=(MateriaSource const &obj)
{
	for (int i = 0; i < 4; i++)
	{
		if (_slots[i])
			delete _slots[i];
		if (obj._slots[i])
			_slots[i] = obj._slots[i]->clone();
	}
	return (*this);
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		if (_slots[i])
			delete _slots[i];
	}
}

void MateriaSource::learnMateria(AMateria *m)
{
	int j = -1;
	while (_slots[++j] && j < 4)
	{
	}
	if (j > 3)
	{
		std::cout << "You already learned more than 4 materias !" << std::endl;
		return ;
	}
	_slots[j] = m;
}

AMateria *MateriaSource::createMateria(std::string const & type)
{
	int j = 0;
	while (_slots[j] != 0 && _slots[j]->getType() != type && j < 4)
	{
		j++;
	}
	if (j > 3 || !_slots[j])
	{
		std::cout << "The materia " << type << " can't be create" << std::endl;
		return (NULL);
	}
	return (_slots[j]->clone());
}