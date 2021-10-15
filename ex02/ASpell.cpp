/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldubar <aldubar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 18:53:15 by aldubar           #+#    #+#             */
/*   Updated: 2021/10/15 18:53:18 by aldubar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ASpell.hpp"

ASpell::ASpell( void ) {}

ASpell::ASpell( std::string const & name, std::string const & effects ): name(name), effects(effects) {}

ASpell::ASpell( ASpell const & src ) { *this = src; }

ASpell::~ASpell( void ) {}

ASpell &	ASpell::operator=( ASpell const & rhs ) {

	this->name = rhs.name;
	this->effects = rhs.effects;

	return *this;
}

std::string const &	ASpell::getName( void ) const { return name; }

std::string const &	ASpell::getEffects( void ) const { return effects; }

void				ASpell::launch( ATarget const & target ) const { target.getHitBySpell(*this); }
