/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadithya <jadithya@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 16:10:24 by jadithya          #+#    #+#             */
/*   Updated: 2023/11/07 12:06:05 by jadithya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.class.hpp"
#include "Dog.class.hpp"
#include "Cat.class.hpp"
#include "WrongAnimal.class.hpp"
#include "WrongCat.class.hpp"

int main () {
	Dog *dogs = new Dog[10];
	for (int i = 0; i < 10; i++)
		dogs[i].makeSound();
	delete[] dogs;

	// A_Animal test;
	// A_Animal *test2;
	// test2 = new A_Animal();
	// A_Animal *test3 = new A_Animal();
}