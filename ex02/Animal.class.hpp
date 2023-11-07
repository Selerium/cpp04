/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadithya <jadithya@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:39:30 by jadithya          #+#    #+#             */
/*   Updated: 2023/11/07 12:01:29 by jadithya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef A_Animal_CLASS_HPP
# define A_Animal_CLASS_HPP

# include <iostream>

class A_Animal {
	protected:
		std::string type;
	
	public:
		A_Animal();
		A_Animal(A_Animal &a);
		A_Animal &operator = (const A_Animal &a);
		virtual ~A_Animal();

		virtual void makeSound(void) const = 0;
		std::string getType() const;
};

#endif