#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Trainee_" + traineeCounter())
{
	std::cout << KYEL "Default Bureaucrat class constructor called." << std::endl;
	std::cout << KWHT "Name and grade given by default." << std::endl;
	this->_grade = 150;
	return;
}

Bureaucrat::Bureaucrat(int grade) : _name("Trainee_" + traineeCounter())
{
	std::cout << KYEL "Grade Bureaucrat class constructor called." << std::endl;
	std::cout << KWHT "Name given by default." << std::endl;
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

Bureaucrat::Bureaucrat(Bureaucrat const &obj) : _name(obj.getName()), _grade(obj.getGrade())
{
	std::cout << KYEL "Bureaucrat class copy constructor called." << std::endl;
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

bool	Bureaucrat::signForm(Form &form) const
{
	try
	{
		if (form.beSigned(*this))
		{
			std::cout << KGRN << this->_name << " signed form " << form.getName() << "\n";
			return (true);
		}
		else
			throw Form::GradeTooLowException();
	}
	catch (const Form::GradeTooLowException& e)
	{
		std::cout << KRED << this->_name << " couldn't sign form " << form.getName();
		std::cout << " because grade is not high enough\n";
		return (false);
	}
}

bool	Bureaucrat::execForm(Form &form) const
{
	try
	{
		if (form.getSignStatus() == true && this->getGrade() <= form.getExec())
		{
			std::cout << KGRN << this->getName() << " executes form " << form.getName()
			<< std::endl;
			return (true);
		}
		else
			throw Form::ExecFormException();
	}
	catch (const Form::ExecFormException& e)
	{
		if (form.getSignStatus() == false)
		{
			std::cout << KRED << form.getName() << " form is not signed yet." << std::endl;
			return (false);
		}
		else
		{
			std::cout << KRED << this->_name << " couldn't execute form " << form.getName();
			std::cout << " because grade is not high enough\n";
			return (false);
		}
	}
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

std::string	Bureaucrat::traineeCounter()
{
	static int			count = 1;
	std::string			strCount;
	std::ostringstream	toStr;

	toStr << count++;
	strCount = toStr.str();
	return (strCount);
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
            return (KRED "Grade too high...");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
            return (KRED "Grade too low...");
}

std::ostream& operator<<(std::ostream& o, Bureaucrat const &i)
{
	o << KBLU << i.getName() << ", Bureaucrat grade " << i.getGrade();
	return o;
}
