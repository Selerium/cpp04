/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadithya <jadithya@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 16:10:24 by jadithya          #+#    #+#             */
/*   Updated: 2023/11/11 20:47:20 by jadithya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.class.hpp"
#include "Dog.class.hpp"
#include "Cat.class.hpp"
#include "WrongAnimal.class.hpp"
#include "WrongCat.class.hpp"

int main () {
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	delete(i);
	delete(j);
	delete(meta);

	const Dog *dog = new Dog();
	const Cat *cat = new Cat();
	std::cout << dog->getType() << " " << std::endl;
	std::cout << cat->getType() << " " << std::endl;
	dog->makeSound(); //will output the cat sound!
	cat->makeSound();
	delete(dog);
	delete(cat);

	const WrongAnimal *a = new WrongAnimal();
	const WrongAnimal *b = new WrongCat();
	const WrongCat *c = new WrongCat();

	std::cout << a->getType() << ": ";
	a->makeSound();
	std::cout << b->getType() << ": ";
	b->makeSound();
	std::cout << c->getType() << ": ";
	c->makeSound();

	delete(a);
	delete(b);
	delete(c);
}