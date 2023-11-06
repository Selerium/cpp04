/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadithya <jadithya@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 16:10:24 by jadithya          #+#    #+#             */
/*   Updated: 2023/11/06 18:50:25 by jadithya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.class.hpp"
#include "Dog.class.hpp"
#include "Cat.class.hpp"
#include "WrongAnimal.class.hpp"
#include "WrongCat.class.hpp"

int main () {
	Animal *objects[10];
	for (int d = 0; d < 5; d++)
		objects[d] = new Dog();
	
	std::cout << std::endl;
	for (int d = 5; d < 10; d++)
		objects[d] = new Cat();

	std::cout << std::endl;
	for (int d = 0; d < 10; d++)
		delete (objects[d]);

	std::cout << std::endl;
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;
	delete i;

	std::cout << std::endl;
	Dog* test = new Dog();
	Dog* deep = new Dog(*test);
	delete (test);
	delete (deep);
}