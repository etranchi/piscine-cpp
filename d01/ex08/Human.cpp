/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etranchi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/08 17:17:04 by etranchi          #+#    #+#             */
/*   Updated: 2019/01/08 17:17:07 by etranchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Human.hpp"

void Human::meleeAttack(std::string const & target) {
	std::cout << "Melee attack to " << target << std::endl;
}

void Human::rangedAttack(std::string const & target) {
		std::cout << "Range attack to " << target << std::endl;
}

void Human::intimidatingShout(std::string const & target) {
		std::cout << "Intimidating shouting to " << target << std::endl;
}

void Human::action(std::string const & action_name, std::string const & target) {
	int i = -1;
	std::string actionsStr[] = {"meleeAttack", "rangedAttack", "intimidatingShout"};

    void (Human::*actions[3])(std::string const & target) = {&Human::meleeAttack, &Human::rangedAttack, &Human::intimidatingShout};
	while (++i < 3) {
		if (actionsStr[i] == action_name) {
			(this->*actions[i])(target);
        	break ;
    	}	
	}
    
}