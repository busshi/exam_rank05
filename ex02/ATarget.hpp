/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldubar <aldubar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 18:53:38 by aldubar           #+#    #+#             */
/*   Updated: 2021/10/15 18:53:41 by aldubar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ATARGET_HPP
# define ATARGET_HPP

# include <string>
# include "ASpell.hpp"

class	ASpell;

class	ATarget {

	public:
		ATarget( void );
		ATarget( std::string const & type );
		ATarget( ATarget const & src );
		virtual ~ATarget( void );

		ATarget &	operator=( ATarget const & rhs );

		std::string const &	getType( void ) const;

		virtual ATarget *	clone( void ) const = 0;

		void				getHitBySpell( ASpell const & ) const;

	private:
		std::string _type;
};

#endif
