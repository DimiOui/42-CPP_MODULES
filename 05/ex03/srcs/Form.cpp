#include "Form.hpp"

Form::Form() : _name("Default"), _isSigned(false), _gradeToSign(150),
		_gradeToExec(150)
{
	std::cout << KYEL "Default Form class constructor called." << std::endl;
	std::cout << KYEL "Name, grade to sign and grade to execute given by default.\n";
	return;
}

Form::Form(std::string const name, int gradeToSign, int gradeToExec) : _name(name),
		_isSigned(false), _gradeToSign(gradeToSign), _gradeToExec(gradeToExec)
{
	if (gradeToSign > 150 || gradeToExec > 150)
		throw Form::GradeTooLowException();
	else if (gradeToSign < 1 || gradeToExec < 1)
		throw Form::GradeTooHighException();
	else
	{
		std::cout << KYEL "Form class constructor called." << std::endl;
	}
	return;
}

Form::Form(Form const &obj) : _name(obj.getName()),  _isSigned(obj.getSignStatus()),
		 _gradeToSign(obj.getSign()), _gradeToExec(obj.getExec())
{
	std::cout << KYEL "Form class copy constructor called." << std::endl;
	return;
}

Form::~Form()
{
	std::cout << KYEL "Form destructor called." << std::endl;
	return;
}

Form &Form::operator=(Form const &obj)
{
	std::cout << KYEL "Assignement operator overload for Form called." << std::endl;
	this->_isSigned = obj.getSignStatus();
	return (*this);
}

std::string const	Form::getName() const
{
	return (this->_name);
}

int	Form::getSign() const
{
	return(this->_gradeToSign);
}

int	Form::getExec() const
{
	return(this->_gradeToExec);
}

bool	Form::getSignStatus() const
{
	return(this->_isSigned);
}

bool	Form::beSigned(const Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() <= this->_gradeToSign)
	{
		this->_isSigned = true;
		return (true);
	}
	else
	{
		this->_isSigned = false;
		throw Form::GradeTooLowException();
		return (false);
	}
}

const char* Form::GradeTooHighException::what() const throw()
{
    return (KRED "Grade too high...");
}

const char* Form::GradeTooLowException::what() const throw()
{
    return (KRED "Grade too low...");
}

const char* Form::ExecFormException::what() const throw()
{
    return (KRED "Cannot execute form...");
}

std::ostream& operator<<(std::ostream& o, Form const &i)
{
	o << KBLU << i.getName() << " form needs to be signed by a grade "
	<< i.getSign() << " and executed by a grade " << i.getExec() << " bureaucrat."
	<< " It is currently " << ((i.getSignStatus()) ? "" : "not ") << "signed.";
	return o;
}
