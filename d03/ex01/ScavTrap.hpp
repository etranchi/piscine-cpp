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


#ifndef SCAVTRAP_H
# define SCAVTRAP_H

class ScavTrap {
	public :
	ScavTrap(std::string name);
	~ScavTrap();
	void rangedAttack(std::string const & target);
	void meleeAttack(std::string const & target);
	void intimidatingShout(std::string const & target);
	void makeSomeWind(std::string const & target);
	void makeADance(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepared(unsigned int amount);
	void challengeNewcomer();
	ScavTrap & operator=(ScavTrap const & rhs);
	int _hp;
	int _max_hp;
	int _energy;
	int _max_energy;
	int _level;
	int _melee_dmg;
	int _ranged_dmg;
	int _armor_reduc;
	std::string _name;
	private :
	
	 
};

#endif