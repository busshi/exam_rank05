/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpellBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldubar <aldubar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 18:55:33 by aldubar           #+#    #+#             */
/*   Updated: 2021/10/15 18:55:34 by aldubar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SpellBook.hpp"

SpellBook::SpellBook( void ) {}

SpellBook::~SpellBook( void ) {

	std::vector<ASpell *>::iterator	it;

	for (it = this->_array.begin(); it != this->_array.end(); it++)
		delete *it;

	this->_array.clear();
}

void		SpellBook::learnSpell( ASpell * ptr ) {

	std::vector<ASpell *>::iterator	it;

	if (ptr) {

		for (it = this->_array.begin(); it != this->_array.end(); it++) {

			if ((*it)->getName() == ptr->getName())
				return;
		}
		this->_array.push_back(ptr->clone());
	}
}

void		SpellBook::forgetSpell( std::string const & name ) {

	std::vector<ASpell *>::iterator	it;

	for (it = this->_array.begin(); it != this->_array.end(); it++) {

		if ((*it)->getName() == name) {

			delete *it;
			this->_array.erase(it);
			return;
		}
	}
}

ASpell *	SpellBook::createSpell( std::string const & name ) {

	std::vector<ASpell *>::iterator	it;

	for (it = this->_array.begin(); it != this->_array.end(); it++) {

		if ((*it)->getName() == name)
			return *it;
	}
	return NULL;
}
