/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afournie <afournie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/05 16:54:25 by afournie          #+#    #+#             */
/*   Updated: 2026/06/24 17:09:25 by afournie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>

int main()
{
	// Ne peut pas complier si on decommente cela -> classe abstraite
	// AAnimal a;
	// a.makeSound();

	std::cout << "=== Test polymorphisme ===" << std::endl;
	const AAnimal* animals[4] = { new Dog(), new Dog(), new Cat(), new Cat() };

	for (int i = 0; i < 4; i++)
		animals[i]->makeSound();

	std::cout << "\n=== Test deep copy Dog ===" << std::endl;
	Dog dog1;
	dog1.setIdea(0, "Je veux un os");
	dog1.setIdea(1, "J'aime courir");

	Dog dog2(dog1);
	std::cout << "dog1 idea 0: " << dog1.getIdea(0) << std::endl;
	std::cout << "dog2 idea 0: " << dog2.getIdea(0) << std::endl;

	dog2.setIdea(0, "Je suis une copie");
	std::cout << "Apres modification dog2:" << std::endl;
	std::cout << "dog1 idea 0: " << dog1.getIdea(0) << " (ne doit pas changer)" << std::endl;
	std::cout << "dog2 idea 0: " << dog2.getIdea(0) << std::endl;

	std::cout << "\n=== Test deep copy Cat ===" << std::endl;
	Cat cat1;
	cat1.setIdea(0, "Je veux du poisson");

	Cat cat2 = cat1;
	cat2.setIdea(0, "Je suis une copie");
	std::cout << "cat1 idea 0: " << cat1.getIdea(0) << " (ne doit pas changer)" << std::endl;
	std::cout << "cat2 idea 0: " << cat2.getIdea(0) << std::endl;

	std::cout << "\n=== Test destructeurs ===" << std::endl;
	for (int i = 0; i < 4; i++)
		delete animals[i];

	return 0;
}
