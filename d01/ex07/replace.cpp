/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etranchi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/08 17:02:21 by etranchi          #+#    #+#             */
/*   Updated: 2019/01/08 17:02:22 by etranchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

void findAndReplaceAll(std::string & data, std::string toSearch, std::string replaceStr)
{
	size_t pos = data.find(toSearch);

	while( pos != std::string::npos)
	{
		data.replace(pos, toSearch.size(), replaceStr);	
		pos = data.find(toSearch, pos + replaceStr.size());
	}
}


int main(int argc, char **argv) {
	if (argc != 4) {
		return 0;
	}
	std::string fd = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	if (s1.size() == 0 || s2.size() == 0) {
		return 0;
	}
	std::ofstream ofs(fd + ".replace");
   	findAndReplaceAll(s2, s1, "");
   	
   	ofs << s2 << std::endl;
   	ofs.close();
	return 0;
}
