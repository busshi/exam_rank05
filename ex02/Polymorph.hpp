/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Polymorph.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldubar <aldubar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 18:55:16 by aldubar           #+#    #+#             */
/*   Updated: 2021/10/15 18:55:19 by aldubar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POLYMORPH_HPP
# define POLYMORPH_HPP

# include "ASpell.hpp"

class	Polymorph: public ASpell {

	public:
		Polymorph( void );
		~Polymorph( void );

		virtual ASpell *	clone( void ) const;
};

#endif
