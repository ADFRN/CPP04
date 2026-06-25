/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afournie <afournie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/05 16:54:23 by afournie          #+#    #+#             */
/*   Updated: 2026/06/24 13:03:37 by afournie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : AAnimal()
{
	this->_type = "Dog";
	this->_cerveau = new Brain();
	std::cout << "Dog created" << std::endl;
	return ;
}

Dog::Dog(const Dog& other): AAnimal(other)
{
	this->_cerveau = new Brain(*other._cerveau);
}

Dog& Dog::operator=(const Dog& other)
{
	if (this != &other)
	{
		AAnimal::operator=(other);
		delete _cerveau;
		_cerveau = new Brain(*other._cerveau);
	}
	return (*this);
}

Dog::~Dog()
{
	delete this->_cerveau;
	std::cout << "Dog destroyed" << std::endl;
	return ;
}

void Dog::makeSound() const
{
	std::cout << "Wouaf Wouaf" << std::endl;
	return ;
}

void Dog::setIdea(int i, const std::string& idea)
{
	_cerveau->setIdea(i, idea);
}

std::string Dog::getIdea(int i) const
{
	return _cerveau->getIdea(i);
}
