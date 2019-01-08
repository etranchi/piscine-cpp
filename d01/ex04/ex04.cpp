/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etranchi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/08 14:19:21 by etranchi          #+#    #+#             */
/*   Updated: 2019/01/08 14:19:22 by etranchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main() {
	std::string string = "HI THIS IS BRAIN";

	std::string *point = &string;
	std::string& ref = string;


	std::cout << "pointeur : " << *point << std::endl;
	std::cout << "ref : " << ref << std::endl;
	return 0;
}