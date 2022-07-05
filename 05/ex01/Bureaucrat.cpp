#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name(std::string("Trainee_") + traineeCounter())
{
	std::cout << KYEL "Default Bureaucrat class constructor called." << std::endl;
	std::cout << KYEL "Name and grade given by default." << std::endl;
	this->_grade = 150;
	return;
}

Bureaucrat::Bureaucrat(int grade) : _name(std::string("Trainee_") + traineeCounter())
{
	std::cout << KYEL "Grade Bureaucrat class constructor called." << std::endl;
	std::cout << KYEL "Name given by default." << std::endl;
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else
		this->_grade = grade;
	return;
}

Bureaucrat::Bureaucrat(const std::string name) : _name("Trainee_" + name)
{
	std::cout << KYEL "Named Bureaucrat class constructor called." << std::endl;
	std::cout << KYEL "Grade given by default." << std::endl;
	this->_grade = 150;
	return;
}

Bureaucrat::Bureaucrat(const std::string name, int grade) : _name(name)
{
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else
		this->_grade = grade;
	std::cout << KYEL "Bureaucrat class constructor called." << std::endl;
	return;
}

Bureaucrat::Bureaucrat(Bureaucrat const &obj)
{
	std::cout << KYEL "Bureaucrat class copy constructor called." << std::endl;
	*this = obj;
	return;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << KYEL "Bureaucrat destructor called." << std::endl;
	return;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &obj)
{
	std::cout << KYEL "Assignement operator overload for Bureaucrat called." << std::endl;
	std::cout << KMAG "Only grade was copied as name is a const value !"  << std::endl;
	this->_grade = obj.getGrade();
	return (*this);
}

const std::string	Bureaucrat::getName() const
{
	return (this->_name);
}

int	Bureaucrat::getGrade() const
{
	return (this->_grade);
}

std::string	Bureaucrat::traineeCounter()
{
	static int			count = 1;
	std::string			strCount;
	std::ostringstream	toStr;

	toStr << count++;
	strCount = toStr.str();
	return (strCount);
}

void	Bureaucrat::upgrade()
{
	if (_grade <= 1)
		throw Bureaucrat::GradeTooHighException();
	else
	{
		this->_grade--;
		std::cout << KCYN << "Upgrading " << this->_name << " rank." << std::endl;
	}
}

void	Bureaucrat::downgrade()
{
	if (_grade >= 150)
		throw Bureaucrat::GradeTooLowException();
	else
	{
		this->_grade++;
		std::cout << KCYN << "Downgrading " << this->_name << " rank." << std::endl;
	}
}

std::ostream& operator<<(std::ostream& o, Bureaucrat const &i)
{
	o << KBLU << i.getName() << ", Bureaucrat grade " << i.getGrade();
	return o;
}
