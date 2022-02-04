/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adidion <adidion@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 15:00:43 by adidion           #+#    #+#             */
/*   Updated: 2022/02/01 15:02:02 by adidion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_H
#define ICE_H

#include "AMateria.hpp"

class	Ice: public AMateria
{
	private:
		/* data */
	protected:
		/* data */
	public:
		Ice();
		AMateria* clone() const;
		Ice( const Ice &obj );
		Ice &operator=( const Ice &obj );
		void use(ICharacter& target);
		~Ice();
};

#endif