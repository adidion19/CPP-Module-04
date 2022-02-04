/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adidion <adidion@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 10:48:16 by adidion           #+#    #+#             */
/*   Updated: 2022/01/31 16:39:21 by adidion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
#define DOG_H

#include "Animal.hpp"
#include "Brain.hpp"

class	Dog: public Animal
{
	private:
		Brain *brain;
	public:
		Dog();
		Dog( Dog &obj );
		Dog &operator=( Dog &obj );
		virtual ~Dog();
		virtual void	makeSound() const;
};

#endif