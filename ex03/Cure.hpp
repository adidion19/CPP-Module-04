/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adidion <adidion@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 10:44:16 by adidion           #+#    #+#             */
/*   Updated: 2022/02/01 14:31:34 by adidion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_H
#define CURE_H

#include "AMateria.hpp"

class	Cure: public AMateria
{
	private:
		/* data */
	protected:
		/* data */
	public:
		Cure();
		AMateria* clone() const;
		Cure( const Cure &obj );
		Cure &operator=( const Cure &obj );
		void use(ICharacter& target);
		~Cure();
};

#endif