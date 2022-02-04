/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adidion <adidion@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 13:31:15 by adidion           #+#    #+#             */
/*   Updated: 2022/01/28 13:33:53 by adidion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal's default constructor..." << std::endl;
}

WrongAnimal::WrongAnimal( WrongAnimal &obj )
{
	std::cout << "WrongAnimal's copy constructor..." << std::endl;
	_type = obj.getType();
}

WrongAnimal	&WrongAnimal::operator=( WrongAnimal &obj )
{
	_type = obj.getType();
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal's default destruction !" << std::endl;
}

std::string	WrongAnimal::getType() const
{
	return (this->_type);
}

void	WrongAnimal::setType(std::string str)
{
	_type = str;
}

void WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal noise" << std::endl;
}