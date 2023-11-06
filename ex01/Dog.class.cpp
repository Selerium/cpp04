/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.class.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadithya <jadithya@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 16:02:30 by jadithya          #+#    #+#             */
/*   Updated: 2023/11/06 18:53:02 by jadithya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.class.hpp"

Dog::Dog() : Animal() {
	std::cout << "Dog constructor called." << std::endl;
	this->type = "Dog";
	this->brain = new Brain();
}

Dog::Dog(Dog &d) : Animal(d) {
	std::cout << "Dog copy constructor called." << std::endl;
	this->type = d.type;
	this->brain = new Brain(*d.brain);
}

Dog &Dog::operator = (const Dog &d) {
	if (this != &d)
		this->type = d.type;
	return (*this);
}

Dog::~Dog() {
	if (this->brain)
		delete (this->brain);
	std::cout << "Dog destructor called." << std::endl;
}

void Dog::makeSound() const {
	std::cout << "Woof!" << std::endl;
}