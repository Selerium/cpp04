/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.class.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadithya <jadithya@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 16:52:05 by jadithya          #+#    #+#             */
/*   Updated: 2023/11/08 17:11:23 by jadithya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_CLASS_HPP
# define MATERIASOURCE_CLASS_HPP

# include <iostream>
# include "AMateria.class.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {
	AMateria *m[4];
	int numMaterias;

	public:
		MateriaSource();
		MateriaSource(MateriaSource &m);
		MateriaSource &operator = (const MateriaSource &m);
		~MateriaSource();

		void learnMateria(AMateria *m);
		AMateria* createMateria(std::string const & type);
};

#endif