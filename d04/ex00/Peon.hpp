/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etranchi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/11 12:57:40 by etranchi          #+#    #+#             */
/*   Updated: 2019/01/11 12:57:43 by etranchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

#ifndef PEON_H
#define PEON_H
class Peon : public Victim
{
    public:
        Peon(std::string name) : Victim(name) {std::cout << "Zog zog." << std::endl;};
        ~Peon() {std::cout << "Bleuark.." << std::endl;};
        virtual void getPolymorphed() const { std::cout << this->getName() + " has been turned into a pink pony !" << std::endl;}
        
    private:
    
};

#endif //PEON_H
