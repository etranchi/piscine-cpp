/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etranchi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/10 16:24:59 by etranchi          #+#    #+#             */
/*   Updated: 2019/01/10 16:25:00 by etranchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef CLAPTRAP_H
# define CLAPTRAP_H

class ClapTrap {
	public :
	ClapTrap(std::string name, int energy, int m_energy, int melee_d, int range_d, int armor_reduc);
	// ClapTrap(ClapTrap & ref);
	~ClapTrap();
	void rangedAttack(std::string const & target);
	void meleeAttack(std::string const & target);
	void intimidatingShout(std::string const & target);
	void makeSomeWind(std::string const & target);
	void makeADance(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepared(unsigned int amount);
	// ClapTrap & operator=(ClapTrap const & rhs);
	int _hp;
	int _max_hp;
	int _level;
		std::string _name;
	int _energy;
	int _max_energy;
	int _melee_dmg;
	int _ranged_dmg;
	int _armor_reduc;

	private :
	
	 
};

#endif