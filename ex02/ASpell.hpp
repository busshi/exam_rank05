/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldubar <aldubar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 18:53:07 by aldubar           #+#    #+#             */
/*   Updated: 2021/10/15 18:53:10 by aldubar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASPELL_HPP
# define ASPELL_HPP

# include <string>
# include "ATarget.hpp"

class	ATarget;

class	ASpell {

	public:
		ASpell( void );
		ASpell( std::string const & name, std::string const & effects );
		ASpell( ASpell const & src );
		virtual ~ASpell( void );

		ASpell &	operator=( ASpell const & rhs );

		std::string const &	getName( void ) const;
		std::string const &	getEffects( void ) const;

		virtual ASpell *	clone( void ) const = 0;

		void				launch( ATarget const & ) const;

	protected:
		std::string name;
		std::string effects;
};

#endif
