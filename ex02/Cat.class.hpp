/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.class.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadithya <jadithya@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:45:41 by jadithya          #+#    #+#             */
/*   Updated: 2023/11/07 12:02:47 by jadithya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_CLASS_HPP
# define CAT_CLASS_HPP

#include "Animal.class.hpp"
#include "Brain.class.hpp"
# include <iostream>

class Cat : public A_Animal {
	Brain *brain;

	public:
		Cat();
		Cat(Cat &d);
		Cat &operator = (const Cat &d);
		virtual ~Cat();

		void makeSound(void) const;
};

#endif