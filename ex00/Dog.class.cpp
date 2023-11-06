/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.class.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadithya <jadithya@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 16:02:30 by jadithya          #+#    #+#             */
/*   Updated: 2023/11/06 16:45:08 by jadithya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.class.hpp"

Dog::Dog() : Animal() {
	this->type = "Dog";
	std::cout << "Dog constructor called." << std::endl;
}

Dog::Dog(Dog &d) : Animal(d) {
	this->type = d.type;
	std::cout << "Dog copy constructor called." << std::endl;
}

Dog &Dog::operator = (const Dog &d) {
	if (this != &d)
		this->type = d.type;
	return (*this);
}

Dog::~Dog() {
	std::cout << "Dog destructor called." << std::endl;
}

void Dog::makeSound() const {
	std::cout << "Woof!" << std::endl;
}