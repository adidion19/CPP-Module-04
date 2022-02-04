/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adidion <adidion@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 10:46:51 by adidion           #+#    #+#             */
/*   Updated: 2022/01/31 16:58:46 by adidion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	this->setType("Dog");
	brain = new Brain();
	std::cout << "Dog default constructor with type: " << _type << std::endl;
	for (int i = 0; i < 100 ; ++i)
	{
		brain->setIdeas("Dog idea " + std::to_string(i + 1), i);
		//std::cout << brain->getIdeas(i) << std::endl;
	}
}

Dog::Dog( Dog &obj )
{
	_type = obj.getType();
	std::cout << "Dog copy constructor with type: " << _type << std::endl;
	brain = new Brain();
	for (int i = 0; i < 100 ; ++i)
	{
		brain->setIdeas(obj.brain->getIdeas(i), i);
		//std::cout << brain->getIdeas(i) << std::endl;
	}
}

Dog	&Dog::operator=( Dog &obj )
{
	std::cout << "Dog Assignation operator" << std::endl;
	_type = obj.getType();
	for (int i = 0; i < 100 ; ++i)
	{
		brain->setIdeas(obj.brain->getIdeas(i), i);
		//std::cout << brain->getIdeas(i) << std::endl;
	}
	return (*this);
}

Dog::~Dog()
{
	delete brain;
	std::cout << "Dog default destructor" << std::endl;
}

void	Dog::makeSound() const
{
	std::cout << "Wouf" << std::endl;
}
