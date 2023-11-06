/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadithya <jadithya@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 17:33:03 by jadithya          #+#    #+#             */
/*   Updated: 2023/11/06 18:01:43 by jadithya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_CLASS_HPP
# define BRAIN_CLASS_HPP

# include <iostream>

class Brain {
	std::string *ideas;

	public:
		Brain();
		Brain(Brain &b);
		Brain &operator = (const Brain &b);
		~Brain();

		void setIdea(int index, std::string idea);
		std::string getIdea(int index) const;
		std::string *getIdeas() const;
};

#endif