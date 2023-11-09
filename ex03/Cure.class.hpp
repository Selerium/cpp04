/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.class.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadithya <jadithya@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 14:45:06 by jadithya          #+#    #+#             */
/*   Updated: 2023/11/08 15:39:02 by jadithya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_CLASS_HPP
# define CURE_CLASS_HPP

#include "AMateria.class.hpp"
#include "ICharacter.hpp"
# include <iostream>

class Cure : public AMateria {
	public:
		Cure();
		Cure(Cure &i);
		Cure &operator = (const Cure &i);
		~Cure();
		
		void use(ICharacter &target);
		AMateria *clone() const;
};

#endif