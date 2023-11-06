/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.class.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadithya <jadithya@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 16:06:44 by jadithya          #+#    #+#             */
/*   Updated: 2023/11/06 18:54:30 by jadithya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.class.hpp"

Cat::Cat() : Animal() {
	this->type = "Cat";
	std::cout << "Cat constructor called." << std::endl;
}

Cat::Cat(Cat &d) : Animal(d) {
	this->type = d.type;
	std::cout << "Cat copy constructor called." << std::endl;
}

Cat &Cat::operator = (const Cat &d) {
	if (this != &d)
		this->type = d.type;
	return (*this);
}

Cat::~Cat() {
	std::cout << "Cat destructor called." << std::endl;
}

void Cat::makeSound() const {
	std::cout << "Meow!" << std::endl;
}