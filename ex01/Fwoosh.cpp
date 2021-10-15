/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fwoosh.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldubar <aldubar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 18:57:33 by aldubar           #+#    #+#             */
/*   Updated: 2021/10/15 18:57:35 by aldubar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fwoosh.hpp"

Fwoosh::Fwoosh( void ): ASpell("Fwoosh", "fwooshed") {}

Fwoosh::~Fwoosh( void ) {}

ASpell *	Fwoosh::clone( void ) const { return new Fwoosh(); }
