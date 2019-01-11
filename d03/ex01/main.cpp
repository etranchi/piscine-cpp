/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etranchi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/10 14:59:06 by etranchi          #+#    #+#             */
/*   Updated: 2019/01/10 14:59:08 by etranchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main() {
	FragTrap t = FragTrap("fufu");
	FragTrap i = FragTrap("fafa");
	int j = -1;

	t.meleeAttack(i._name);
	i.takeDamage(t._melee_dmg);

	i.rangedAttack(t._name);
	t.takeDamage(i._ranged_dmg);

	t.beRepared(2);

	while (++j < 5) {
		t.vaulthunter_dot_exe("toto");
	}


	ScavTrap s = ScavTrap("susu");
	ScavTrap a = ScavTrap("sasa");
	j = 0;

	s.meleeAttack(i._name);
	a.takeDamage(t._melee_dmg);

	a.rangedAttack(t._name);
	s.takeDamage(i._ranged_dmg);

	s.beRepared(2);

	while (++j < 5) {
		s.challengeNewcomer();
	}



	return 0;
}

