/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adidion <adidion@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 14:57:08 by adidion           #+#    #+#             */
/*   Updated: 2022/01/31 17:06:46 by adidion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
#define BRAIN_H

#include <iostream>

class	Brain
{
	protected:
		std::string *ideas;
	public:
		Brain();
		Brain( const Brain &obj );
		Brain &operator=( const Brain &obj );
		virtual ~Brain();
		std::string getIdeas( int i);
		void	setIdeas(std::string str, int i);
};

#endif