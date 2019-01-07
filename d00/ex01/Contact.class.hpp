/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etranchi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/07 12:17:47 by etranchi          #+#    #+#             */
/*   Updated: 2019/01/07 12:17:49 by etranchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

class Contact {

public :
	std::string createLine(std::string ref) const;
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string login;
	std::string postal;
	std::string email;
	std::string phone;
	std::string birthday;
	std::string meal;
	std::string underwear;
	std::string secret;
	Contact();
	~Contact(void);
	void putDescription(int nb) const ;

private : 
	
};

#endif
