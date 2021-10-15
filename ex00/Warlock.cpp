/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldubar <aldubar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 18:58:36 by aldubar           #+#    #+#             */
/*   Updated: 2021/10/15 18:58:39 by aldubar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Warlock.hpp"
#include <iostream>

Warlock::Warlock( std::string const & name, std::string const & title ): _name(name), _title(title) {

	std::cout << _name << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock( void ) {

	std::cout << _name << ": My job here is done!" << std::endl;
}

std::string const &	Warlock::getName( void ) const { return _name; }

std::string const &	Warlock::getTitle( void ) const { return _title; }

void				Warlock::setTitle( std::string const & title ) { _title = title; }

void				Warlock::introduce( void ) const {

	std::cout << _name << ": I am " << _name << ", " << _title << "!" << std::endl;
}
