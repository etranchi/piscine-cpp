/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etranchi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/08 11:19:04 by etranchi          #+#    #+#             */
/*   Updated: 2019/01/08 11:19:05 by etranchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_CLASS_H
# define PONY_CLASS_H

class Pony {
	public :
		std::string _name;
		Pony(std::string name);
		~Pony();
		void displayName();
		void ponyOnTheStack(std::string name);
		void ponyOnTheHeap(std::string name);
};

#endif

