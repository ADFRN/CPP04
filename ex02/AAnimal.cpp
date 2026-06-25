/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afournie <afournie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/05 16:54:12 by afournie          #+#    #+#             */
/*   Updated: 2026/06/24 11:31:24 by afournie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal()
{
	std::cout << "AAnimal created" << std::endl;
	return ;
}

AAnimal::AAnimal(const AAnimal& other)
{
	*this = other;
}

AAnimal& AAnimal::operator=(const AAnimal& other)
{
	if (this != &other)
	{
		_type = other._type;
	}
	return (*this);
}

AAnimal::~AAnimal()
{
	std::cout << "AAnimal destroyed" << std::endl;
	return ;
}

std::string AAnimal::getType() const
{
	return (this->_type);
}
