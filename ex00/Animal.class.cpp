/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadithya <jadithya@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:46:22 by jadithya          #+#    #+#             */
/*   Updated: 2023/11/06 16:51:38 by jadithya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.class.hpp"

Animal::Animal() : type("Animal") {
	std::cout << "Animal constructor called." << std::endl;
}

Animal::Animal(Animal &a) : type(a.type) {
	std::cout << "Animal copy constructor called." << std::endl;
}

Animal &Animal::operator = (const Animal &a) {
	if (this != &a)
		this->type = a.type;
	return (*this);
}

Animal::~Animal() {
	std::cout << "Animal destructor called." << std::endl;
}

void Animal::makeSound() const {
	std::cout << "Generic animal noise." << std::endl;
}

std::string Animal::getType() const {
	return (this->type);
}