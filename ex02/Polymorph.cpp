/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Polymorph.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldubar <aldubar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 18:55:24 by aldubar           #+#    #+#             */
/*   Updated: 2021/10/15 18:55:26 by aldubar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Polymorph.hpp"

Polymorph::Polymorph( void ): ASpell("Polymorph", "turned into a critter") {}

Polymorph::~Polymorph( void ) {}

ASpell *	Polymorph::clone( void ) const { return new Polymorph(); }
