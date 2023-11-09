/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.class.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadithya <jadithya@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 16:56:33 by jadithya          #+#    #+#             */
/*   Updated: 2023/11/08 17:21:22 by jadithya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.class.hpp"
#include "AMateria.class.hpp"

MateriaSource::MateriaSource() {
	std::cout << "MateriaSource created!" << std::endl;
}

MateriaSource::MateriaSource(MateriaSource &m) {
	std::cout << "MateriaSource copy created!" << std::endl;
	this->numMaterias = m.numMaterias;
	for (int i = 0; i < this->numMaterias; i++)
		this->m[i] = m.m[i]->clone();
}

MateriaSource &MateriaSource::operator = (const MateriaSource &m) {
	std::cout << "MateriaSource copy assignment-ed" << std::endl;
	if (this != &m) {
		this->numMaterias = m.numMaterias;
		for (int i = 0; i < this->numMaterias; i++)
			this->m[i] = m.m[i]->clone();
	}
	return (*this);
}

MateriaSource::~MateriaSource() {
	for (int i = 0; i < this->numMaterias; i++)
		if (this->m[i])
			delete (this->m[i]);
	std::cout << "MateriaSource destroyed!" << std::endl;
}

void MateriaSource::learnMateria(AMateria *m) {
	if (this->numMaterias >= 4)
		return ;
	this->m[this->numMaterias++] = m;
}

AMateria *MateriaSource::createMateria(std::string const & type) {
	for (int i = 0; i < this->numMaterias; i++)
		if (this->m[i]->getType() == type)
			return (this->m[i]->clone());
	return (0);
}