/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afournie <afournie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/05 16:54:12 by afournie          #+#    #+#             */
/*   Updated: 2026/06/24 11:29:25 by afournie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal created" << std::endl;
	return ;
}

Animal::Animal(const Animal& other)
{
	*this = other;
}

Animal& Animal::operator=(const Animal& other)
{
	if (this != &other)
	{
		_type = other._type;
	}
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Animal destroyed" << std::endl;
	return ;
}

std::string Animal::getType() const
{
	return (this->_type);
}

void Animal::makeSound() const
{
	std::cout << "Je suis un animal" << std::endl;
	return ;
}
