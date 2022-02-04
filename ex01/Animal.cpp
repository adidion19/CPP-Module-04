/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adidion <adidion@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 15:44:07 by adidion           #+#    #+#             */
/*   Updated: 2022/01/31 16:54:26 by adidion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal's default constructor..." << std::endl;
}

Animal::Animal( Animal &obj )
{
	std::cout << "Animal's copy constructor..." << std::endl;
	_type = obj.getType();
}

Animal	&Animal::operator=(  Animal &obj )
{
	_type = obj.getType();
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Animal's default destruction !" << std::endl;
}

std::string	Animal::getType() const
{
	return (_type);
}

void	Animal::setType(std::string str)
{
	_type = str;
}

void Animal::makeSound() const
{
	std::cout << "Animal noise" << std::endl;
}
