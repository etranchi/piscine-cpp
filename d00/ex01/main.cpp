/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etranchi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/07 12:14:52 by etranchi          #+#    #+#             */
/*   Updated: 2019/01/07 12:14:54 by etranchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include <string>
#include "Contact.class.hpp"


Contact addContact() {
	Contact contact;
	std::cout << "Put a first name : ";
	getline(std::cin, contact.first_name);
	std::cout << "Put a last name : ";
	getline(std::cin, contact.last_name);
	std::cout << "Put a nickname : ";
	getline(std::cin, contact.nickname);
	std::cout << "Put a login : ";
	getline(std::cin, contact.login);
	std::cout << "Put a postal code : ";
	getline(std::cin, contact.postal);
	std::cout << "Put a email : ";
	getline(std::cin, contact.email);
	std::cout << "Put a phone : ";
	getline(std::cin, contact.phone);
	std::cout << "Put a birthday : ";
	getline(std::cin, contact.birthday);
	std::cout << "Put a favorite meal : ";
	getline(std::cin, contact.meal);
	std::cout << "Put a favorite underwear : ";
	getline(std::cin, contact.underwear);
	std::cout << "Put a darkest secret : ";
	getline(std::cin, contact.secret);
	return contact;
}

void searchContact(int nb, Contact contacts[]) {
	int i = -1;
	while(++i < nb) {
		Contact c = contacts[i];
		c.putDescription(i);
	}
}

void putCommands(std::string *buf) {
	std::cout << "Put a command (ADD, SEARCH, EXIT) :";
	getline(std::cin, *buf);
}

void printContact(Contact contact) {
	std::cout << "first_name : " << contact.first_name << std::endl;
	std::cout << "last_name : " << contact.last_name << std::endl;
	std::cout << "nickname : " << contact.nickname << std::endl;
	std::cout << "login : " << contact.login << std::endl;
	std::cout << "postal code : " << contact.postal << std::endl;
	std::cout << "email : " << contact.email << std::endl;
	std::cout << "phone : " << contact.phone << std::endl;
	std::cout << "birthday : " << contact.birthday << std::endl;
	std::cout << "meal : " << contact.meal << std::endl;
	std::cout << "underwear : " << contact.underwear << std::endl;
	std::cout << "secret : " << contact.secret << std::endl;
}

void askForIndex(int nb, Contact contacts[]) {
	std:string buf;
	std::cout << "Which contact do you want to see :";
	getline(std::cin, buf);	
	int index = std::stoi(buf);
	if (index < nb) {
		printContact(contacts[index]);
		return ;
	} else {
		std::cout << "Out of range" << std::endl;
		askForIndex(nb, contacts);
	}
	return ;
}

void parseIn(Contact contacts[], int nb) {
	std::string command;
	
	putCommands(&command);
	if (command.compare("ADD") == 0 ) {
		if (nb < 8) {
			contacts[nb] = addContact();
			nb++;
			parseIn(contacts, nb);
		} else {
			std::cout << "You have already 8 contacts..." << std::endl;
			parseIn(contacts, nb);
		}
	} else if (command.compare("SEARCH") == 0) {
		searchContact(nb, contacts);
		askForIndex(nb, contacts);
		parseIn(contacts, nb);
	} else if (command.compare("EXIT") == 0) {
		return ;
	} else {
		parseIn(contacts, nb);
	}
	return ;
}

int main(void) {
	Contact contacts[8];
	int nb = 0;
	parseIn(contacts, nb);
}