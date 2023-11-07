/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.class.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadithya <jadithya@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:43:55 by jadithya          #+#    #+#             */
/*   Updated: 2023/11/07 12:03:03 by jadithya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_CLASS_HPP
# define DOG_CLASS_HPP

#include "Animal.class.hpp"
#include "Brain.class.hpp"
# include <iostream>

class Dog : public A_Animal {
	Brain *brain;

	public:
		Dog();
		Dog(Dog &d);
		Dog &operator = (const Dog &d);
		virtual ~Dog();

		void makeSound(void) const;
};

#endif