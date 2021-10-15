/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldubar <aldubar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 18:58:48 by aldubar           #+#    #+#             */
/*   Updated: 2021/10/15 18:58:50 by aldubar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Warlock.hpp"
#include <iostream>

int		main( void ) {

	//Warlock	bob;	//Supposed to not compile
//	Warlock	jim("not", "compile");
//	Warlock	bob = jim;
	//Warlock	jack(jim);

	Warlock const	richard("Richard", "Mistress of Magma");

	richard.introduce();
	std::cout << richard.getName() << " - " << richard.getTitle() << std::endl;

	Warlock *	jack = new Warlock("Jack", "the Long");

	jack->introduce();
	jack->setTitle("the Mighty");
	jack->introduce();

	delete jack;

	return (0);
}
