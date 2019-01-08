/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etranchi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/08 14:23:54 by etranchi          #+#    #+#             */
/*   Updated: 2019/01/08 14:23:56 by etranchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Brain.hpp"
#include "Human.hpp"

Human::Human(){
	
	std::cout << "Human created" << std::endl;
}

Human::~Human() {
	std::cout << "Human destroyed" << std::endl;	
}

const Brain & Human::getBrain() {
	return brain;
}

const Brain *Human::identify() const {
	return &brain;
}
