/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adidion <adidion@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 14:56:59 by adidion           #+#    #+#             */
/*   Updated: 2022/02/02 13:44:59 by adidion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(): AMateria("ice")
{
	this->_type = "ice";
}

Ice::Ice( const Ice &obj ): AMateria("ice")
{
	this->_type = obj.getType();
}

Ice	&Ice::operator=( const Ice &obj )
{
	this->_type = obj.getType();
	return (*this);
}

AMateria *Ice::clone() const
{
	AMateria *a = new Ice;
	return (a);
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

Ice::~Ice()
{
	return ;
}
