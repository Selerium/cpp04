/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.class.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadithya <jadithya@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 14:48:37 by jadithya          #+#    #+#             */
/*   Updated: 2023/11/09 11:10:14 by jadithya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.class.hpp"
#include "AMateria.class.hpp"
#include "ICharacter.hpp"

Cure::Cure() : AMateria() {
	this->type = "cure";
	std::cout << "Cure constructed" << std::endl;
}

Cure::Cure(Cure &i) : AMateria(i) {
	std::cout << "Cure copy constructed" << std::endl;
}

Cure &Cure::operator = (Cure const &i) {
	std::cout << "Cure copy assignment-ed" << std::endl;
	if (this != &i)
		this->type = i.type;
	return (*this);
}

Cure::~Cure() {
	std::cout << "Cure destructed" << std::endl;
}

void Cure::use(ICharacter &target) {
	(void) target;
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

AMateria *Cure::clone() const {
	AMateria *re = new Cure();
	re->setType(this->getType());
	return (re);
}