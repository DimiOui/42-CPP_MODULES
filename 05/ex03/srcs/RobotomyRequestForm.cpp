#include "RobotomyRequestForm.hpp"
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm() : Form("RRF", 72, 45), _target("Default")
{
	std::cout << KYEL "Robotomy Request Form class created with Default target." << std::endl;
	return;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string target) : Form("RRF", 72, 45), _target(target)
{
	std::cout << KYEL "Robotomy Request Form class created." << std::endl;
	std::cout << KWHT "RRF with grade " << this->_gradeToSign << " required to sign, and grade "
	<< this->_gradeToExec << " required to execute created succesfully." << std::endl;
	return;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &obj) : Form("RRF", 72, 45), _target(obj.getTarget())
{
	std::cout << KYEL "Robotomy Request Form class copy constructor called.";
	return;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << KYEL "RRF destructor called." << std::endl;
	return;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(RobotomyRequestForm const &obj)
{
	std::cout << KYEL "Assignement operator overload for RRF called." << std::endl;
	obj.getTarget();
	return *(this);
}

void	RobotomyRequestForm::execute(const Bureaucrat &executor) const
{
	if (this->getSignStatus() == true && executor.getGrade() <= this->getExec())
	{
		std::srand(time(NULL));
		bool	prob = rand() % 2;

		std::cout << "Brrrrrrrrrrrrrrrrrrrrrrrrrrrrtttttttt" << std::endl;
		if (prob)
			std::cout << KGRN << this->_target << " successfully robotomized." << std::endl;
		else
			std::cout << KRED << this->_target << " robotomization has failed." << std::endl;
	}
	else if (this->getSignStatus() == false)
	{
		std::cout << KRED << this->getName() << " form is not signed yet." << std::endl;
		throw Form::ExecFormException();
	}
	else
	{
		std::cout << KRED << executor.getName() << " couldn't execute form " << this->getName();
		std::cout << " because grade is not high enough\n";
		throw Form::ExecFormException();
	}
}

std::string const	RobotomyRequestForm::getTarget() const
{
	return (this->_target);
}
