/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadithya <jadithya@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 16:00:57 by jadithya          #+#    #+#             */
/*   Updated: 2023/11/08 16:46:15 by jadithya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_CLASS_HPP
# define CHARACTER_CLASS_HPP
# include "AMateria.class.hpp"
# include "ICharacter.hpp"

class Character : public ICharacter {
	AMateria *m[4];
	int numMaterias;
	std::string name;

	public:
		Character();
		Character(std::string name);
		Character(Character &c);
		Character &operator = (const Character &c);
		~Character();

		std::string const &getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use (int idx, ICharacter& target);
};

#endif