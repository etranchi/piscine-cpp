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

int main() {
	FragTrap t = FragTrap("tutu");
	FragTrap i = FragTrap("lala");
	int j = -1;

	t.meleeAttack(i._name);
	i.takeDamage(t._melee_dmg);

	i.rangedAttack(t._name);
	t.takeDamage(i._ranged_dmg);

	t.beRepared(2);

	while (++j < 5) {
		t.vaulthunter_dot_exe("toto");
	}
	return 0;
}

