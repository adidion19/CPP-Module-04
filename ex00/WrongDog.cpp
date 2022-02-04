/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adidion <adidion@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 11:58:05 by adidion           #+#    #+#             */
/*   Updated: 2022/01/28 12:11:08 by adidion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongDog.hpp"

WrongDog::WrongDog()
{
	this->setType("WrongDog");
	std::cout << "WrongDog default constructor with type: " << _type << std::endl;
}

WrongDog::WrongDog( WrongDog &obj )
{
	std::cout << "WrongDog copy constructor with type: " << _type << std::endl;
	_type = obj.getType();
}

WrongDog	&WrongDog::operator=( WrongDog &obj )
{
	std::cout << "WrongDog Assignation operator" << std::endl;
	_type = obj.getType();
	return (*this);
}

WrongDog::~WrongDog()
{
	std::cout << "WrongDog default destructor" << std::endl;
}

void	WrongDog::makeSound() const
{
	std::cout << "Waaaaf" << std::endl;
}