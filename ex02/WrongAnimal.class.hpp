/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.class.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadithya <jadithya@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 17:07:12 by jadithya          #+#    #+#             */
/*   Updated: 2023/11/06 17:08:52 by jadithya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef WRONGANIMAL_CLASS_HPP
# define WRONGANIMAL_CLASS_HPP

# include <iostream>

class WrongAnimal {
	protected:
		std::string type;
	
	public:
		WrongAnimal();
		WrongAnimal(WrongAnimal &a);
		WrongAnimal &operator = (const WrongAnimal &a);
		virtual ~WrongAnimal();

		void makeSound(void) const;
		std::string getType() const;
};

#endif