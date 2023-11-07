/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadithya <jadithya@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:46:22 by jadithya          #+#    #+#             */
/*   Updated: 2023/11/07 12:01:23 by jadithya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.class.hpp"

A_Animal::A_Animal() : type("A_Animal") {
	std::cout << "A_Animal constructor called." << std::endl;
}

A_Animal::A_Animal(A_Animal &a) : type(a.getType()) {
	std::cout << "A_Animal copy constructor called." << std::endl;
}

A_Animal &A_Animal::operator = (const A_Animal &a) {
	if (this != &a)
		this->type = a.type;
	return (*this);
}

A_Animal::~A_Animal() {
	std::cout << "A_Animal destructor called." << std::endl;
}

void A_Animal::makeSound() const {
	std::cout << "Generic A_Animal noise." << std::endl;
}

std::string A_Animal::getType() const {
	return (this->type);
}