/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etranchi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/10 14:58:56 by etranchi          #+#    #+#             */
/*   Updated: 2019/01/10 14:58:58 by etranchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"

#ifndef FRAGTRAP_H
# define FRAGTRAP_H

class FragTrap : public ClapTrap {
	public :
	FragTrap(std::string name);
	// FragTrap(FragTrap & ref);
	~FragTrap();
	void vaulthunter_dot_exe(std::string const & target);
	// FragTrap & operator=(FragTrap const & rhs);

	private :
	
	 
};

#endif
