/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadithya <jadithya@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 17:13:13 by jadithya          #+#    #+#             */
/*   Updated: 2023/11/06 17:13:46 by jadithya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.class.hpp"

WrongCat::WrongCat() : WrongAnimal() {
	this->type = "WrongCat";
	std::cout << "WrongCat constructor called." << std::endl;
}

WrongCat::WrongCat(WrongCat &d) : WrongAnimal(d) {
	this->type = d.type;
	std::cout << "WrongCat copy constructor called." << std::endl;
}

WrongCat &WrongCat::operator = (const WrongCat &d) {
	if (this != &d)
		this->type = d.type;
	return (*this);
}

WrongCat::~WrongCat() {
	std::cout << "WrongCat destructor called." << std::endl;
}

void WrongCat::makeSound() const {
	std::cout << "Meow!" << std::endl;
}