/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fireball.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldubar <aldubar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 18:54:38 by aldubar           #+#    #+#             */
/*   Updated: 2021/10/15 18:54:40 by aldubar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fireball.hpp"

Fireball::Fireball( void ): ASpell("Fireball", "burnt to a crisp") {}

Fireball::~Fireball( void ) {}

ASpell *	Fireball::clone( void ) const { return new Fireball(); }
