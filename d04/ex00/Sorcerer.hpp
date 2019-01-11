/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etranchi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/11 12:57:12 by etranchi          #+#    #+#             */
/*   Updated: 2019/01/11 12:57:13 by etranchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Victim.hpp"
#ifndef SORCERER_H
# define SORCERER_H

class Sorcerer {
public:
    Sorcerer(std::string name, std::string title) : _name(name), _title(title) { std::cout << name << ", " << title << " is born !" << std::endl;};
    Sorcerer() : _name("defaultname"), _title("defaulttitle") {};
    ~Sorcerer() { std::cout << this->getName() + " ," + this->getTitle() + " is dead. Consequences will never be the same !" << std::endl; };
    std::string introduce();
    std::string getName(void);
    std::string getTitle(void);
    void polymorph(Victim const & victim) const;
    private :
    std::string _name;
    std::string _title;
};

std::ostream & operator<<(std::ostream & o, Sorcerer & rhs);



#endif //SORCERER_H

