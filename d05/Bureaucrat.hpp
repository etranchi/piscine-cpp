/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etranchi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/14 12:02:24 by etranchi          #+#    #+#             */
/*   Updated: 2019/01/14 12:02:27 by etranchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H


class Bureaucrat {
public:
	Bureaucrat();
	Bureaucrat(const std::string name, int grade);
	Bureaucrat(Bureaucrat & ref);
	~Bureaucrat();
	int getGrade() const;
	std::string getName() const;
	std::exception GradeTooLowException() const;
	std::exception GradeTooHighException() const;
	void incrementGrade();
	void decrementGrade();

private:
	std::string const _name;
	int _grade;
};


std::ostream & operator<<(std::ostream o, Bureaucrat & rhs);
#endif
