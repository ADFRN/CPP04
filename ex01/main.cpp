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

#include "Brain.hpp"
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	std::cout << "\n========== ANIMAL ARRAY TEST ==========\n" << std::endl;

	const int size = 10;
	Animal* animals[size];

	for (int i = 0; i < size / 2; i++)
		animals[i] = new Dog();

	for (int i = size / 2; i < size; i++)
		animals[i] = new Cat();

	std::cout << "\n========== DELETE ANIMALS ==========\n" << std::endl;

	for (int i = 0; i < size; i++)
		delete animals[i];

	std::cout << "\n========== DEEP COPY TEST (DOG) ==========\n" << std::endl;

	Dog originalDog;
	originalDog.setIdea(0, "I want a bone");
	originalDog.setIdea(1, "I want to play");

	Dog copiedDog(originalDog);

	std::cout << "\nBefore modification :" << std::endl;
	std::cout << "Original: " << originalDog.getIdea(0) << std::endl;
	std::cout << "Copy    : " << copiedDog.getIdea(0) << std::endl;

	copiedDog.setIdea(0, "I want a steak");

	std::cout << "\nAfter modifying copy :" << std::endl;
	std::cout << "Original: " << originalDog.getIdea(0) << std::endl;
	std::cout << "Copy    : " << copiedDog.getIdea(0) << std::endl;

	std::cout << "\n========== DEEP COPY TEST (CAT) ==========\n" << std::endl;

	Cat originalCat;
	originalCat.setIdea(0, "Sleep all day");

	Cat copiedCat;
	copiedCat = originalCat;

	std::cout << "\nBefore modification :" << std::endl;
	std::cout << "Original: " << originalCat.getIdea(0) << std::endl;
	std::cout << "Copy    : " << copiedCat.getIdea(0) << std::endl;

	copiedCat.setIdea(0, "Destroy the sofa");

	std::cout << "\nAfter modifying copy :" << std::endl;
	std::cout << "Original: " << originalCat.getIdea(0) << std::endl;
	std::cout << "Copy    : " << copiedCat.getIdea(0) << std::endl;

	std::cout << "\n========== END OF PROGRAM ==========\n" << std::endl;

	return 0;
}
