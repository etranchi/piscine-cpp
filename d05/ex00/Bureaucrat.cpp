# include "Bureaucrat.hpp"


Bureaucrat::Bureaucrat(void) : _name("no_name"), _grade(150){}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name){
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		_grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat const &src){
	*this = src;
}

Bureaucrat::~Bureaucrat(void) {}

/* GETTER */
std::string const  Bureaucrat::get_name() const { return _name; };
int Bureaucrat::get_grade() const { return _grade; };


/* HIGH */
Bureaucrat::GradeTooHighException::GradeTooHighException(void){ return ; };
Bureaucrat::GradeTooHighException::~GradeTooHighException(void) throw() { return ; } ;
Bureaucrat::GradeTooHighException::GradeTooHighException(GradeTooHighException const & srcs) {
	*this = srcs;
	return ;
}
const char *Bureaucrat::GradeTooHighException::what() const throw() { return ("Grade to Hight."); };
Bureaucrat::GradeTooHighException &Bureaucrat::GradeTooHighException::operator= (const GradeTooHighException &rhs)
{
	(void)rhs;
	return (*this);
}
/* LOW */
Bureaucrat::GradeTooLowException::GradeTooLowException(void){ return ; };
Bureaucrat::GradeTooLowException::~GradeTooLowException(void) throw() { return ; };
Bureaucrat::GradeTooLowException::GradeTooLowException(GradeTooLowException const & srcs) {
	*this = srcs;
	return ;
}
const char *Bureaucrat::GradeTooLowException::what() const throw() { return ("Grade to Low."); };
Bureaucrat::GradeTooLowException &Bureaucrat::GradeTooLowException::operator= (const GradeTooLowException &rhs)
{
	(void)rhs;
	return (*this);
}

/* Function */
void Bureaucrat::downgrade() { 
	if (get_grade() + 1 > 150)
		throw Bureaucrat::GradeTooHighException();
	else
		_grade++;
};

void Bureaucrat::upgrade() { 
	if (get_grade() - 1 < 1)
		throw Bureaucrat::GradeTooHighException();
	else
		_grade--;
};

Bureaucrat &		Bureaucrat::operator=( Bureaucrat const & src ) {
	if ( this != &src ) {
		// do something
	}
	return *this;
}

std::ostream & operator<<(std::ostream & o, Bureaucrat const & rhs){
	o << rhs.get_name() << ", bureaucrat grade " << rhs.get_grade() << std::endl;
	return o;
};
