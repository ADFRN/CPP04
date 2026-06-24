/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afournie <afournie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/05 16:54:17 by afournie          #+#    #+#             */
/*   Updated: 2026/06/24 13:03:42 by afournie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal()
{
	this->_type = "Cat";
	this->_cerveau = new Brain();
	std::cout << "Cat created" << std::endl;
	return ;
}

Cat::Cat(const Cat& other) : Animal(other)
{
	_cerveau = new Brain(*other._cerveau);
}

Cat& Cat::operator=(const Cat& other)
{
	if (this != &other)
	{
		Animal::operator=(other);
		delete _cerveau;
		_cerveau = new Brain(*other._cerveau);
	}
	return (*this);
}

Cat::~Cat()
{
	delete this->_cerveau;
	std::cout << "Cat destroyed" << std::endl;
	return ;
}

void Cat::makeSound( void ) const
{
	std::cout << "miaou" << std::endl;
	return ;
}

void Cat::setIdea(int i, const std::string& idea)
{
	_cerveau->setIdea(i, idea);
}

std::string Cat::getIdea(int i) const
{
	return _cerveau->getIdea(i);
}
