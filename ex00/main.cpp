/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adidion <adidion@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 10:49:14 by adidion           #+#    #+#             */
/*   Updated: 2022/01/28 13:33:20 by adidion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "WrongDog.hpp"

int main()
{
const Animal* meta = new Animal();
const Animal* j = new Dog();
const Animal* i = new Cat();
std::cout << j->getType() << " " << std::endl;
std::cout << i->getType() << " " << std::endl;
i->makeSound(); //will output the cat sound!
j->makeSound();
meta->makeSound();
delete meta;
delete j;
delete i;
std::cout << "-----------------Wrong-------------------" << std::endl;
const WrongAnimal* meta_2 = new WrongAnimal();
const WrongAnimal* j_2 = new WrongDog();
const WrongAnimal* i_2 = new WrongCat();
std::cout << j_2->getType() << " " << std::endl;
std::cout << i_2->getType() << " " << std::endl;
i_2->makeSound(); //will output the cat sound!
j_2->makeSound();
meta_2->makeSound();
delete meta_2;
delete j_2;
delete i_2;
return 0;
}