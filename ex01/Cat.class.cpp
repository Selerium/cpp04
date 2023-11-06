/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.class.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadithya <jadithya@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 16:06:44 by jadithya          #+#    #+#             */
/*   Updated: 2023/11/06 18:23:12 by jadithya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.class.hpp"

Cat::Cat() : Animal() {
	std::cout << "Cat constructor called." << std::endl;
	this->type = "Cat";
	this->brain = new Brain();
}

Cat::Cat(Cat &d) : Animal(d) {
	this->type = d.getType();
	this->brain = new Brain();
	for (int i = 0; i < 100; i++)
		this->brain->setIdea(i, d.brain->getIdea(i));
	std::cout << "Cat copy constructor called." << std::endl;
}

Cat &Cat::operator = (const Cat &d) {
	if (this != &d)
		this->type = d.type;
	return (*this);
}

Cat::~Cat() {
	if (this->brain)
		delete (this->brain);
	std::cout << "Cat destructor called." << std::endl;
}

void Cat::makeSound() const {
	std::cout << "Meow!" << std::endl;
}