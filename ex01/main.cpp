/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afournie <afournie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/05 16:54:25 by afournie          #+#    #+#             */
/*   Updated: 2026/06/05 17:20:41 by afournie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    std::cout << "=== BASIC ANIMALS ===" << std::endl;

    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << "\n=== TYPES ===" << std::endl;
    std::cout << "j type: " << j->getType() << std::endl;
    std::cout << "i type: " << i->getType() << std::endl;
    std::cout << "meta type: " << meta->getType() << std::endl;

    std::cout << "\n=== SOUNDS (POLYMORPHISM TEST) ===" << std::endl;
    i->makeSound();   // Cat sound
    j->makeSound();   // Dog sound
    meta->makeSound();// Animal sound

    std::cout << "\n=== MEMORY CLEANUP ===" << std::endl;
    delete meta;
    delete j;
    delete i;

    std::cout << "\n=== ARRAY POLYMORPHISM TEST ===" << std::endl;

    const Animal* zoo[4];
    zoo[0] = new Dog();
    zoo[1] = new Cat();
    zoo[2] = new Dog();
    zoo[3] = new Cat();

    for (int k = 0; k < 4; k++)
    {
        std::cout << zoo[k]->getType() << " says: ";
        zoo[k]->makeSound();
    }

    for (int k = 0; k < 4; k++)
        delete zoo[k];

    std::cout << "\n=== WRONG ANIMALS TEST ===" << std::endl;

    const WrongAnimal* wa = new WrongAnimal();
    const WrongAnimal* wc = new WrongCat();

    std::cout << wa->getType() << std::endl;
    std::cout << wc->getType() << std::endl;

    wa->makeSound();
    wc->makeSound(); // ❌ will NOT call WrongCat version if no virtual

    delete wa;
    delete wc;

    std::cout << "\n=== END OF TESTS ===" << std::endl;

    return 0;
}
