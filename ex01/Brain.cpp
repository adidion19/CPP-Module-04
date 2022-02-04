/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adidion <adidion@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 14:56:26 by adidion           #+#    #+#             */
/*   Updated: 2022/01/31 16:38:58 by adidion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	ideas = new std::string[100];
	std::cout << "Brain default constructor" << std::endl;
}

Brain::Brain( const Brain &obj )
{
	std::cout << "Brain copy constructor" << std::endl;
	ideas = new std::string[100];
	for (int i = -1; i < 100; ++i)
	{
		this->ideas[i] = obj.ideas[i];
	}
}

Brain	&Brain::operator=( const Brain &obj )
{
	std::cout << "Brain assignation operator" << std::endl;
	for (int i = -1; i < 100; ++i)
	{
		this->ideas[i] = obj.ideas[i];
	}
	return (*this);
}

Brain::~Brain()
{
	delete [] ideas;
	std::cout << "Brain default destructor" << std::endl;
}

std::string Brain::getIdeas(int i)
{
	return (ideas[i]);
}

void	Brain::setIdeas(std::string str, int i)
{
	ideas[i] = str;
}
