/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadithya <jadithya@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 18:09:03 by jadithya          #+#    #+#             */
/*   Updated: 2023/11/08 15:19:22 by jadithya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.class.hpp"
#include "ICharacter.hpp"

AMateria::AMateria(std::string const &type) {
	this->type = type;
}

std::string const &AMateria::getType() const {
	return (this->type);
}

AMateria::AMateria() {
	std::cout << "AMateria created" << std::endl;
}

AMateria::AMateria(AMateria &a) {
	this->type = a.type;
}

AMateria &AMateria::operator = (AMateria const &a) {
	if (this != &a)
		this->type = a.type;
	return (*this);
}

AMateria::~AMateria() {
	std::cout << "AMateria destructor called" << std::endl;
}

void AMateria::use(ICharacter &target) {
	(void) target;
	std::cout << "* AMateria generic action done at " << this->getType() << " *" << std::endl;
}

void AMateria::setType(std::string type) {
	this->type = type;
}
