/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adidion <adidion@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 10:48:16 by adidion           #+#    #+#             */
/*   Updated: 2022/01/31 17:41:26 by adidion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
#define DOG_H

#include "AAnimal.hpp"
#include "Brain.hpp"

class	Dog: public AAnimal
{
	private:
		Brain *brain;
	public:
		Dog();
		Dog( Dog &obj );
		Dog &operator=( Dog &obj );
		~Dog();
		virtual void	makeSound() const;
};

#endif