/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adidion <adidion@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 11:58:03 by adidion           #+#    #+#             */
/*   Updated: 2022/01/28 13:32:46 by adidion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGDOG_H
#define WRONGDOG_H

#include "WrongAnimal.hpp"

class	WrongDog: public WrongAnimal
{
	public:
		WrongDog();
		WrongDog( WrongDog &obj );
		WrongDog &operator=( WrongDog &obj );
		~WrongDog();
		void	makeSound() const;
};

#endif