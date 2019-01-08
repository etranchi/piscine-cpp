/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etranchi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/08 11:18:50 by etranchi          #+#    #+#             */
/*   Updated: 2019/01/08 11:18:52 by etranchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Pony.hpp"


int main() {
	Pony pony = Pony("toto");
	pony.ponyOnTheHeap("plouf");
	pony.ponyOnTheStack("wouaza");

	std::cout << "after functions handsoff, toto is the only remaining" << std::endl;
	return 0;
}
