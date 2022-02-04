/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adidion <adidion@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 13:30:39 by adidion           #+#    #+#             */
/*   Updated: 2022/01/28 13:33:31 by adidion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_H
#define WRONGANIMAL_H

#include <iostream>

class	WrongAnimal
{
	protected:
		std::string	_type;
	public:
		WrongAnimal();
		WrongAnimal( WrongAnimal &obj );
		WrongAnimal &operator=(  WrongAnimal &obj );
		virtual ~WrongAnimal();
		std::string	getType() const;
		void	setType(std::string str);
		void makeSound() const;
};

#endif