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

#ifndef FRAGTRAP_H
# define FRAGTRAP_H

class FragTrap {
	public :
	FragTrap(std::string name);
	~FragTrap();
	void rangedAttack(std::string const & target);
	void meleeAttack(std::string const & target);
	void intimidatingShout(std::string const & target);
	void makeSomeWind(std::string const & target);
	void makeADance(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepared(unsigned int amount);
	void vaulthunter_dot_exe(std::string const & target);
	FragTrap & operator=(FragTrap const & rhs);
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
