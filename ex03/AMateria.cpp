/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adidion <adidion@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 10:35:16 by adidion           #+#    #+#             */
/*   Updated: 2022/02/02 13:46:42 by adidion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const & type)
{
	_type = type;
}

AMateria::AMateria( const AMateria &obj )
{
	_type = obj.getType();
}

AMateria& AMateria::operator=( const AMateria &obj )
{
	this->_type = obj.getType();
	return (*this);
}

AMateria::~AMateria()
{
	return ;
}

std::string const & AMateria::getType() const
{
	return (_type);
}

void AMateria::use(ICharacter& target)
{
	target.getName();
	return ;
}