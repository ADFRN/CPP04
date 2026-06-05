/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afournie <afournie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/05 16:54:23 by afournie          #+#    #+#             */
/*   Updated: 2026/06/05 17:35:29 by afournie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal()
{
	this->type = "Dog";
	return ;
}

Dog::~Dog()
{
	return ;
}

void Dog::makeSound() const
{
	std::cout << "Wouaf Wouaf" << std::endl;
	return ;
}
