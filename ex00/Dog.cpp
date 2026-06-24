/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afournie <afournie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/05 16:54:23 by afournie          #+#    #+#             */
/*   Updated: 2026/06/24 12:10:20 by afournie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal()
{
	this->_type = "Dog";
	std::cout << "Dog created" << std::endl;
	return ;
}

Dog::Dog(const Dog& other): Animal(other)
{
	*this = other;
}

Dog& Dog::operator=(const Dog& other)
{
	if (this != &other)
		_type = other._type;
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog destroyed" << std::endl;
	return ;
}

void Dog::makeSound() const
{
	std::cout << "Wouaf Wouaf" << std::endl;
	return ;
}
