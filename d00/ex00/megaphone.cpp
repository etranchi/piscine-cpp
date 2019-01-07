/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etranchi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/07 11:40:50 by etranchi          #+#    #+#             */
/*   Updated: 2019/01/07 11:40:53 by etranchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#import <iostream>

int main(int argc, char* argv[])
{
	if (argc && argc > 1) {
		char *string = argv[1];
		int i = -1;
		while(string[++i]) {
			char c = toupper(string[i]);
			std::cout << c;
		}
		std::cout << std::endl;

	} else {
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	}
    
    return 0;
}

