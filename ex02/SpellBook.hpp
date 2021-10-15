/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpellBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldubar <aldubar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 18:55:41 by aldubar           #+#    #+#             */
/*   Updated: 2021/10/15 18:55:42 by aldubar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPELLBOOK_HPP
# define SPELLBOOK_HPP

# include <vector>
# include "ASpell.hpp"

class	SpellBook {

	public:
		SpellBook( void );
		~SpellBook( void );

		void		learnSpell( ASpell * );
		void		forgetSpell( std::string const & name );
		ASpell *	createSpell( std::string const & name );

	private:
		SpellBook( SpellBook const & src );

		SpellBook &	operator=( SpellBook const & rhs );

		std::vector<ASpell *>	_array;
};

#endif
