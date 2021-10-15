/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldubar <aldubar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 18:57:00 by aldubar           #+#    #+#             */
/*   Updated: 2021/10/15 18:57:01 by aldubar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ATarget.hpp"
#include <iostream>

ATarget::ATarget( void ) {}

ATarget::ATarget( std::string const & type ): _type(type) {}

ATarget::ATarget( ATarget const & src ) { *this = src; }

ATarget::~ATarget( void ) {}

ATarget &	ATarget::operator=( ATarget const & rhs ) {

	this->_type = rhs._type;

	return *this;
}

std::string const &	ATarget::getType( void ) const { return _type; }

void				ATarget::getHitBySpell( ASpell const & spell ) const {

	std::cout << _type << " has been " << spell.getEffects() << "!" << std::endl;
}
