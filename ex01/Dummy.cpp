/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dummy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldubar <aldubar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 18:57:18 by aldubar           #+#    #+#             */
/*   Updated: 2021/10/15 18:57:19 by aldubar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dummy.hpp"

Dummy::Dummy( void ): ATarget("Target Practice Dummy") {}

Dummy::~Dummy( void ) {}

ATarget *	Dummy::clone( void ) const { return new Dummy(); }
