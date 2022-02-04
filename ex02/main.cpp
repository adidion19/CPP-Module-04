/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adidion <adidion@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 10:49:14 by adidion           #+#    #+#             */
/*   Updated: 2022/01/31 17:41:44 by adidion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	std::cout << "---------EX01----------------" << std::endl;
	{
		const AAnimal* j = new Dog();
		const AAnimal* i = new Cat();
		delete j;//should not create a leak
		delete i;
	}
	std::cout << "---------EX00----------------" << std::endl;
	{
		//const AAnimal* meta = new AAAAnimallll();
		const AAnimal* j = new Dog();
		const AAnimal* i = new Cat();
		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		i->makeSound(); //will output the cat sound!
		j->makeSound();
		//meta->makeSound();
		//delete meta;
		delete j;
		delete i;
	}

	std::cout << "---------CORRECTION TEST----------------" << std::endl;

	Cat basic;
	{
	Cat tmp = basic;
	}
}