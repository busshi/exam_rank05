/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TargetGenerator.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldubar <aldubar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 18:56:04 by aldubar           #+#    #+#             */
/*   Updated: 2021/10/15 18:56:05 by aldubar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator( void ) {}

TargetGenerator::~TargetGenerator( void ) {

	std::vector<ATarget *>::iterator	it;

	for (it = this->_array.begin(); it != this->_array.end(); it++)
		delete *it;

	this->_array.clear();
}

void		TargetGenerator::learnTargetType( ATarget * ptr ) {

	std::vector<ATarget *>::iterator	it;

	if (ptr) {

		for (it = this->_array.begin(); it != this->_array.end(); it++) {

			if ((*it)->getType() == ptr->getType())
				return;
		}
		this->_array.push_back(ptr->clone());
	}
}

void		TargetGenerator::forgetTargetType( std::string const & type ) {

	std::vector<ATarget *>::iterator	it;

	for (it = this->_array.begin(); it != this->_array.end(); it++) {

		if ((*it)->getType() == type) {

			delete *it;
			this->_array.erase(it);
			return;
		}
	}
}

ATarget *	TargetGenerator::createTarget( std::string const & type ) {

	std::vector<ATarget *>::iterator	it;

	for (it = this->_array.begin(); it != this->_array.end(); it++) {

		if ((*it)->getType() == type)
			return *it;
	}
	return NULL;
}
