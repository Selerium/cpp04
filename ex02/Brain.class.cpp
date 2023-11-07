/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadithya <jadithya@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 17:34:43 by jadithya          #+#    #+#             */
/*   Updated: 2023/11/06 18:50:00 by jadithya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.class.hpp"
#include <cstring>

Brain::Brain() {
	this->ideas = new std::string[100];
	std::cout << "Constructed a brain!" << std::endl;
}

Brain::Brain(Brain &b) {
	this->ideas = new std::string[100];
	for (int i = 0; i < 100; i++) {
		if (b.getIdea(i).length())
			this->setIdea(i, b.getIdea(i));
	}
	std::cout << "Copy constructed a brain!" << std::endl;
}

Brain &Brain::operator = (const Brain &b) {
	if (this != &b)
		this->ideas = b.getIdeas();
	return (*this);
}

Brain::~Brain() {
	if (this->ideas)
		delete[] (this->ideas);
	std::cout << "Brain destroyed!" << std::endl;
}

void Brain::setIdea(int index, std::string idea) {
	this->ideas[index] = idea;
}

std::string Brain::getIdea(int index) const {
	return (this->ideas[index]);
}

std::string *Brain::getIdeas() const {
	return (this->ideas);
}