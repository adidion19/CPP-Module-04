/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adidion <adidion@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 10:28:37 by adidion           #+#    #+#             */
/*   Updated: 2022/01/31 16:58:51 by adidion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	this->setType("Cat");
	brain = new Brain();
	std::cout << "Cat default constructor with type: " << _type << std::endl;
	for (int i = 0; i < 100 ; ++i)
	{
		brain->setIdeas("Cat idea " + std::to_string(i + 1), i);
		//std::cout << brain->getIdeas(i) << std::endl;
	}
}

Cat::Cat( Cat &obj )
{
	_type = obj.getType();
	std::cout << "Cat copy constructor with type: " << _type << std::endl;
	brain = new Brain();
	for (int i = 0; i < 100 ; ++i)
	{
		brain->setIdeas(obj.brain->getIdeas(i), i);
		//std::cout << brain->getIdeas(i) << std::endl;
	}
}

Cat	&Cat::operator=( Cat &obj )
{
	std::cout << "Cat Assignation operator" << std::endl;
	setType(obj.getType());
	for (int i = 0; i < 100 ; ++i)
	{
		brain->setIdeas(obj.brain->getIdeas(i), i);
		//std::cout << brain->getIdeas(i) << std::endl;
	}
	return (*this);
}

Cat::~Cat()
{
	delete brain;
	std::cout << "Cat default destructor" << std::endl;
}

void	Cat::makeSound() const
{
	std::cout << "Miaouuu" << std::endl;
}
