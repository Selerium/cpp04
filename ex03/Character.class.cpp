/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadithya <jadithya@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 16:04:02 by jadithya          #+#    #+#             */
/*   Updated: 2023/11/08 16:42:37 by jadithya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.class.hpp"
#include "AMateria.class.hpp"

Character::Character() {
	std::cout << "Character created!" << std::endl;
	numMaterias = 0;
	this->name = "The Unnamed Traveller";
}

Character::Character(std::string name) {
	std::cout << "Character created!" << std::endl;
	this->name = name;
	this->numMaterias = 0;
}

Character::Character(Character &c) {
	for (int i = 0; i < this->numMaterias; i++)
		if (this->m[i])
			delete (this->m[i]);

	this->numMaterias = c.numMaterias;
	for (int i = 0; i < this->numMaterias; i++)
		this->equip(c.m[i]->clone());
	std::cout << "Character copy created!" << std::endl;
}

Character &Character::operator = (const Character &c) {
	for (int i = 0; i < this->numMaterias; i++)
		if (this->m[i])
			delete (this->m[i]);

	this->numMaterias = c.numMaterias;
	for (int i = 0; i < this->numMaterias; i++)
		this->equip(c.m[i]->clone());
	std::cout << "Character copy assignment-ed!" << std::endl;
	return (*this);
}

Character::~Character() {
	for (int i = 0; i < this->numMaterias; i++)
		if (this->m[i])
			delete (this->m[i]);
	std::cout << "Character destroyed!" << std::endl;
}

std::string const &Character::getName() const {
	return (this->name);
}

void Character::equip(AMateria* m) {
	if (this->numMaterias == 4)
		return ;
	this->m[this->numMaterias++] = m;
}

void Character::unequip(int idx) {
	if (idx < 0 || idx >= this->numMaterias)
		return ;
	this->m[idx] = NULL;
	for (int i = idx; i < this->numMaterias - 1; i++)
		this->m[i] = this->m[i + 1];
}

void Character::use(int idx, ICharacter& target) {
	this->m[idx]->use(target);
}