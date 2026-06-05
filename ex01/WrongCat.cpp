/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afournie <afournie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/05 16:54:35 by afournie          #+#    #+#             */
/*   Updated: 2026/06/05 17:30:53 by afournie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
	this->type = "le tres vilain chat";
	return ;
}

WrongCat::~WrongCat()
{
	return ;
}

void WrongCat::makeSound( void ) const
{
	std::cout << "miiiiiaoooooou je suis le tres vilain chat" << std::endl;
	return ;
}
