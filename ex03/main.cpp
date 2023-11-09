/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadithya <jadithya@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 15:05:27 by jadithya          #+#    #+#             */
/*   Updated: 2023/11/09 11:10:57 by jadithya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.class.hpp"
#include "Character.class.hpp"
#include "Cure.class.hpp"
#include "ICharacter.hpp"
#include "Ice.class.hpp"
#include "MateriaSource.class.hpp"

int main() {
	// Ice *bot = new Ice();
	// Cure *heal = new Cure();
	// AMateria *bot2 = bot->clone();
	// AMateria *heal2 = new Cure();
	// Character *c1 = new Character("Jason");
	// Character *c2 = new Character("Percy");
	// MateriaSource *m1 = new MateriaSource();
	// MateriaSource *m2 = new MateriaSource();

	// std::cout << std::endl << "AHHHHHHHHHHHHHHHHH" << std::endl;
	// {
	// 	Ice bot3;
	// 	Ice bot4;
	// 	Cure heal3;
	// 	Cure heal4;
	// 	Character c3;
	// 	Character c4;
	// 	MateriaSource m3;
	// 	MateriaSource m4;
	// 	c3.getName();
	// 	c3.equip(heal2);
	// 	c3.use(0, c4);
	// 	c3.unequip(0);
	// }
	// std::cout << std::endl << "AHHHHHHHHHHHHHHHHH" << std::endl;
	// c1->equip(bot);
	// c1->use(0, *c2);
	// c2->equip(bot2);
	// c2->equip(heal);
	// c2->unequip(1);
	// std::cout << c2->getName() << std::endl;
	// std::cout << c1->getName() << std::endl;
	// m1->learnMateria(bot);
	// m2->learnMateria(bot);
	// m2->learnMateria(heal);
	// AMateria *test = m2->createMateria("heal");


	// // bot and bot2 not deleted here, deleted when c1 and c2 are deleted
	// delete heal;
	// delete heal2;
	// delete c1;
	// delete c2;
	// delete test;

	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	delete bob;
	delete me;
	delete src;
}