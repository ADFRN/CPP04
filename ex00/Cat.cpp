/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afournie <afournie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/05 16:54:17 by afournie          #+#    #+#             */
/*   Updated: 2026/06/05 17:33:53 by afournie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal()
{
	this->type = "Cat";
	return ;
}

Cat::~Cat()
{
	return ;
}

void Cat::makeSound( void ) const
{
	std::cout << "miaou" << std::endl;
	return ;
}
