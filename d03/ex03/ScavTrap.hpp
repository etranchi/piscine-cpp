/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etranchi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/10 15:45:47 by etranchi          #+#    #+#             */
/*   Updated: 2019/01/10 15:45:48 by etranchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"

#ifndef SCAVTRAP_H
# define SCAVTRAP_H

class ScavTrap : public ClapTrap{
	public :
	ScavTrap(std::string name);
	// ScavTrap(ScavTrap & ref);
	~ScavTrap();
	void challengeNewcomer();
	// ScavTrap & operator=(ScavTrap const & rhs);
	private :
	
	 
};

#endif