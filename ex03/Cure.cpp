/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adidion <adidion@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 13:07:19 by adidion           #+#    #+#             */
/*   Updated: 2022/02/02 13:44:35 by adidion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(): AMateria("cure")
{
	this->_type = "cure";
}

Cure::Cure( const Cure &obj ): AMateria("cure")
{
	this->_type = obj.getType();
}

Cure	&Cure::operator=( const Cure &obj )
{
	this->_type = obj.getType();
	return (*this);
}

AMateria *Cure::clone() const
{
	AMateria *a = new Cure;
	return (a);
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}


Cure::~Cure()
{
	return ;
}
