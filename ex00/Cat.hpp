/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adidion <adidion@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 10:32:12 by adidion           #+#    #+#             */
/*   Updated: 2022/01/28 11:25:51 by adidion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
#define CAT_H

#include "Animal.hpp"

class	Cat: public Animal
{
	public:
		Cat();
		Cat( Cat &obj );
		Cat &operator=( Cat &obj );
		~Cat();
		virtual void	makeSound() const;
};

#endif