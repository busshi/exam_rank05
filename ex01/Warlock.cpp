/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldubar <aldubar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 18:57:59 by aldubar           #+#    #+#             */
/*   Updated: 2021/10/15 18:58:00 by aldubar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Warlock.hpp"
#include <iostream>

Warlock::Warlock( std::string const & name, std::string const & title ): _name(name), _title(title) {

	std::cout << _name << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock( void ) {

	std::cout << _name << ": My job here is done!" << std::endl;

	std::vector<ASpell *>::iterator	it;

	for (it = this->_array.begin(); it != this->_array.end(); it++)
		delete *it;

	this->_array.clear();
}

std::string const &	Warlock::getName( void ) const { return _name; }

std::string const &	Warlock::getTitle( void ) const { return _title; }

void				Warlock::setTitle( std::string const & title ) { _title = title; }

void				Warlock::introduce( void ) const {

	std::cout << _name << ": I am " << _name << ", " << _title << "!" << std::endl;
}

void				Warlock::learnSpell( ASpell * spell ) {

	std::vector<ASpell *>::iterator	it;

	if (spell) {

		for (it = this->_array.begin(); it != this->_array.end(); it++) {

			if ((*it)->getName() == spell->getName())
				return;
		}
		this->_array.push_back(spell->clone());
	}
}

void				Warlock::forgetSpell( std::string name ) {

	std::vector<ASpell *>::iterator	it;

	for (it = this->_array.begin(); it != this->_array.end(); it++) {

		if ((*it)->getName() == name) {

			delete *it;
			this->_array.erase(it);
			return;
		}
	}
}

void				Warlock::launchSpell( std::string name, ATarget const & target) {

	std::vector<ASpell *>::iterator	it;

	for (it = this->_array.begin(); it != this->_array.end(); it++) {

		if ((*it)->getName() == name) {

			(*it)->launch(target);
			return;
		}
	}
}
