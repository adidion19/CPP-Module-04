/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adidion <adidion@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 11:58:00 by adidion           #+#    #+#             */
/*   Updated: 2022/01/28 12:07:39 by adidion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	this->setType("WrongCat");
	std::cout << "WrongCat default constructor with type: " << _type << std::endl;
}

WrongCat::WrongCat( WrongCat &obj )
{
	std::cout << "WrongCat copy constructor with type: " << _type << std::endl;
	_type = obj.getType();
}

WrongCat	&WrongCat::operator=( WrongCat &obj )
{
	std::cout << "WrongCat Assignation operator" << std::endl;
	_type = obj.getType();
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "Cat default destructor" << std::endl;
}

void	WrongCat::makeSound() const
{
	std::cout << "Miaouuu" << std::endl;
}