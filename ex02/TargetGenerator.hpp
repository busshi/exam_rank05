/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TargetGenerator.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldubar <aldubar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 18:55:54 by aldubar           #+#    #+#             */
/*   Updated: 2021/10/15 18:55:55 by aldubar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TARGETGENERATOR_HPP
# define TARGETGENERATOR_HPP

# include <vector>
# include "ATarget.hpp"

class	TargetGenerator {

	public:
		TargetGenerator( void );
		~TargetGenerator( void );

		void		learnTargetType( ATarget * );
		void		forgetTargetType( std::string const & );
		ATarget *	createTarget( std::string const & );

	private:
		TargetGenerator( TargetGenerator const & src );

		TargetGenerator &	operator=( TargetGenerator const & rhs );

		std::vector<ATarget *>	_array;
};

#endif
