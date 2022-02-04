/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adidion <adidion@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 16:07:35 by adidion           #+#    #+#             */
/*   Updated: 2022/01/31 17:08:09 by adidion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>

class	Animal
{
	protected:
		std::string	_type;
	public:
		Animal();
		Animal( Animal &obj );
		Animal &operator=(  Animal &obj );
		virtual ~Animal();
		std::string	getType() const;
		void	setType(std::string str);
		virtual void makeSound() const;
};

#endif