/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adidion <adidion@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 10:32:12 by adidion           #+#    #+#             */
/*   Updated: 2022/01/31 16:39:14 by adidion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
#define CAT_H

#include "Animal.hpp"
#include "Brain.hpp"

class	Cat: public Animal
{
	private:
		Brain *brain;
	public:
		Cat();
		Cat( Cat &obj );
		Cat &operator=( Cat &obj );
		virtual ~Cat();
		virtual void	makeSound() const;
};

#endif