/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afournie <afournie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/05 16:54:35 by afournie          #+#    #+#             */
/*   Updated: 2026/06/24 11:31:07 by afournie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
	this->_type = "le tres vilain chat";
	std::cout << "WrongCat created" << std::endl;
	return ;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destroyed" << std::endl;
	return ;
}

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal()
{
	*this = other;
}

WrongCat& WrongCat::operator=(const WrongCat& other)
{
	if (this != &other)
		_type = other._type;
	return (*this);
}

void WrongCat::makeSound( void ) const
{
	std::cout << "miiiiiaoooooou je suis le tres vilain chat" << std::endl;
	return ;
}
