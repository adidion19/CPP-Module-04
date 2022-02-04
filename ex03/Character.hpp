/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adidion <adidion@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 15:29:00 by adidion           #+#    #+#             */
/*   Updated: 2022/02/03 13:34:56 by adidion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_H
#define CHARACTER_H

#include "ICharacter.hpp"

class	Character: public ICharacter
{
	private:
		AMateria *(save[1000]);
	protected:
		std::string	_name;
		AMateria *(_slots[4]);
	public:
		Character(std::string);
		Character( const Character &obj );
		Character &operator=( const Character &obj );
		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
		~Character();
};

#endif