/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.class.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadithya <jadithya@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 14:45:06 by jadithya          #+#    #+#             */
/*   Updated: 2023/11/08 15:11:33 by jadithya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_CLASS_HPP
# define ICE_CLASS_HPP

#include "AMateria.class.hpp"
#include "ICharacter.hpp"
# include <iostream>

class Ice : public AMateria {
	public:
		Ice();
		Ice(Ice &i);
		Ice &operator = (const Ice &i);
		~Ice();
		
		void use(ICharacter &target);
		AMateria *clone() const;
};

#endif