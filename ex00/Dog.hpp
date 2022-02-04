/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adidion <adidion@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 10:48:16 by adidion           #+#    #+#             */
/*   Updated: 2022/01/28 11:22:13 by adidion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
#define DOG_H

#include "Animal.hpp"

class	Dog: public Animal
{
	public:
		Dog();
		Dog( Dog &obj );
		Dog &operator=( Dog &obj );
		~Dog();
		virtual void	makeSound() const;
};

#endif