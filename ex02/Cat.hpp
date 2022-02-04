/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adidion <adidion@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 10:32:12 by adidion           #+#    #+#             */
/*   Updated: 2022/01/31 17:41:11 by adidion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
#define CAT_H

#include "AAnimal.hpp"
#include "Brain.hpp"

class	Cat: public AAnimal
{
	private:
		Brain *brain;
	public:
		Cat();
		Cat( Cat &obj );
		Cat &operator=( Cat &obj );
		~Cat();
		virtual void	makeSound() const;
};

#endif