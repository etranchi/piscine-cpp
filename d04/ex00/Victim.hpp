/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etranchi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/11 12:57:31 by etranchi          #+#    #+#             */
/*   Updated: 2019/01/11 12:57:33 by etranchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#ifndef VICTIM_H
#define VICTIM_H

class Victim {
    public:
    Victim(std::string name) : _name(name){ std::cout << "Some random victim called " + name + " just popped !" << std::endl;};
    Victim();
    ~Victim() { std::cout << "Victim " + this->getName() + " just died for no apparent reason !" << std::endl;};
    std::string getName() const;
    std::string introduce() const;
    virtual void getPolymorphed(void) const;

    private:
    std::string _name;
};

std::ostream & operator<<(std::ostream & o, Victim const & rhs);

#endif //VICTIM_H
