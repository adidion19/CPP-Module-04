/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adidion <adidion@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 15:44:07 by adidion           #+#    #+#             */
/*   Updated: 2022/02/01 10:19:29 by adidion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal()
{
	std::cout << "AAnimal's default constructor..." << std::endl;
}

AAnimal::AAnimal( AAnimal &obj )
{
	std::cout << "AAnimal's copy constructor..." << std::endl;
	_type = obj.getType();
}

AAnimal	&AAnimal::operator=(  AAnimal &obj )
{
	_type = obj.getType();
	return (*this);
}

AAnimal::~AAnimal()
{
	std::cout << "AAnimal's default destruction !" << std::endl;
}

std::string	AAnimal::getType() const
{
	return (_type);
}

void	AAnimal::setType(std::string str)
{
	_type = str;
}

void AAnimal::makeSound() const
{
	std::cout << "AAnimal noise" << std::endl;
}

