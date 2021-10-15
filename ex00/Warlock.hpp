/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldubar <aldubar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 18:58:41 by aldubar           #+#    #+#             */
/*   Updated: 2021/10/15 18:58:43 by aldubar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WARLOCK_HPP
# define WARLOCK_HPP

# include <string>

class	Warlock {

	public:
		Warlock( std::string const & name, std::string const & title );
		~Warlock( void );

		std::string const &	getName( void ) const;
		std::string const &	getTitle( void ) const;

		void				setTitle( std::string const & title );

		void				introduce( void ) const;

	private:
		Warlock( void );
		Warlock( Warlock const & src );

		Warlock &	operator=( Warlock const & rhs );

		std::string	_name;
		std::string	_title;
};

#endif
