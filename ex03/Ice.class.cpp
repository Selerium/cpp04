/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.class.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadithya <jadithya@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 14:48:37 by jadithya          #+#    #+#             */
/*   Updated: 2023/11/09 11:09:59 by jadithya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.class.hpp"
#include "AMateria.class.hpp"
#include "ICharacter.hpp"

Ice::Ice() : AMateria() {
	this->type = "ice";
	std::cout << "Ice constructed" << std::endl;
}

Ice::Ice(Ice &i) : AMateria(i) {
	std::cout << "Ice copy constructed" << std::endl;
}

Ice &Ice::operator = (Ice const &i) {
	std::cout << "Ice copy assignment-ed" << std::endl;
	if (this != &i)
		this->type = i.type;
	return (*this);
}

Ice::~Ice() {
	std::cout << "Ice destructed" << std::endl;
}

void Ice::use(ICharacter &target) {
	(void) target;
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

AMateria *Ice::clone() const {
	AMateria *re = new Ice();
	re->setType(this->getType());
	return (re);
}