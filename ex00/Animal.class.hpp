/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadithya <jadithya@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:39:30 by jadithya          #+#    #+#             */
/*   Updated: 2023/11/06 17:04:28 by jadithya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_CLASS_HPP
# define ANIMAL_CLASS_HPP

# include <iostream>

class Animal {
	protected:
		std::string type;
	
	public:
		Animal();
		Animal(Animal &a);
		Animal &operator = (const Animal &a);
		virtual ~Animal();

		virtual void makeSound(void) const;
		std::string getType() const;
};

#endif