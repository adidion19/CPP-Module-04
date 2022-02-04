/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adidion <adidion@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 10:46:51 by adidion           #+#    #+#             */
/*   Updated: 2022/01/31 16:59:06 by adidion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	this->setType("Dog");
	std::cout << "Dog default constructor with type: " << _type << std::endl;
}

Dog::Dog( Dog &obj )
{
	_type = obj.getType();
	std::cout << "Dog copy constructor with type: " << _type << std::endl;
}

Dog	&Dog::operator=( Dog &obj )
{
	std::cout << "Dog Assignation operator" << std::endl;
	_type = obj.getType();
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog default destructor" << std::endl;
}

void	Dog::makeSound() const
{
	std::cout << "Waaaaf" << std::endl;
}
