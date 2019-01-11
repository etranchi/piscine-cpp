/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etranchi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/10 17:29:16 by etranchi          #+#    #+#             */
/*   Updated: 2019/01/10 17:29:17 by etranchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#ifndef NINJATRAP_H
# define NINJATRAP_H

class NinjaTrap : public virtual ClapTrap {
	public :
	NinjaTrap(std::string name);
	// NinjaTrap(NinjaTrap & ref);
	~NinjaTrap();
	void ninjaShoebox(FragTrap & ref);
	void ninjaShoebox(ScavTrap & ref);
	void ninjaShoebox(ClapTrap & ref);
	void ninjaShoebox(NinjaTrap & ref);
	// NinjaTrap & operator=(ScavTrap const & rhs);
	private :
	
	 
};

#endif
