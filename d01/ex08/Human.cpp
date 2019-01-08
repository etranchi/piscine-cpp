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




Human::Human() {
	std::cout << "Human created" << std::endl;
}

Human::~Human() {
	std::cout << "Human destroyed" << std::endl;
}


void meleeAttack(std::string const & target) {
	std::cout << "Melee attack from " << target << std::endl;
}

void rangedAttack(std::string const & target) {
		std::cout << "Range attack from " << target << std::endl;
}

void intimidatingShout(std::string const & target) {
		std::cout << "Intimidating shouting from " << target << std::endl;
}

void Human::action(std::string const & action_name, std::string const & target) {
	int i = -1;
	std::string actionsStr[] = {"meleeAttack", "rangedAttack", "intimidatingShout"};

    typedef void (Human::*Actions)(std::string const & target);
    Actions actions[3] = {&Human::meleeAttack, &Human::rangedAttack, &Human::intimidatingShout};
	while (++i < 3) {
		if (actionsStr[i] == action_name) {
			(this->*actions[i])(target); // getFunc()[i](target);
			// std::__invoke(actions[i],this, target);
        	// (*(actions[i]))(target);
        	break ;
    	}	
	}
    
}