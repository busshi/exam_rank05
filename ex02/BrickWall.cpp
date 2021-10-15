/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BrickWall.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldubar <aldubar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 18:53:50 by aldubar           #+#    #+#             */
/*   Updated: 2021/10/15 18:53:52 by aldubar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BrickWall.hpp"

BrickWall::BrickWall( void ): ATarget("Inconspicuous Red-brick Wall") {}

BrickWall::~BrickWall( void ) {}

ATarget *	BrickWall::clone( void ) const { return new BrickWall(); }
