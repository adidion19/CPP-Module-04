/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adidion <adidion@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 10:28:37 by adidion           #+#    #+#             */
/*   Updated: 2022/01/31 16:58:59 by adidion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	this->setType("Cat");
	std::cout << "Cat default constructor with type: " << _type << std::endl;
}

Cat::Cat( Cat &obj )
{
	_type = obj.getType();
	std::cout << "Cat copy constructor with type: " << _type << std::endl;
}

Cat	&Cat::operator=( Cat &obj )
{
	std::cout << "Cat Assignation operator" << std::endl;
	_type = obj.getType();
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Cat default destructor" << std::endl;
}

void	Cat::makeSound() const
{
	std::cout << "Miaouuu" << std::endl;
}
