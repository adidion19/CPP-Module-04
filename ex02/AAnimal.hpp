/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adidion <adidion@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 16:07:35 by adidion           #+#    #+#             */
/*   Updated: 2022/01/31 17:40:56 by adidion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_H
#define AANIMAL_H

#include <iostream>

class	AAnimal
{
	protected:
		std::string	_type;
	public:
		AAnimal();
		AAnimal( AAnimal &obj );
		AAnimal &operator=(  AAnimal &obj );
		virtual ~AAnimal();
		std::string	getType() const;
		void	setType(std::string str);
		virtual void makeSound() const = 0;
};

#endif