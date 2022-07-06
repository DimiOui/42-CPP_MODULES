#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("PPF", 25, 5), _target("Default")
{
	std::cout << KYEL "Presidential Pardon Form class created with Default target." << std::endl;
	return;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string target) : Form("PPF", 25, 5), _target(target)
{
	std::cout << KYEL "Presidential Pardon Form class created." << std::endl;
	std::cout << KWHT "PPF with grade " << this->_gradeToSign << " required to sign, and grade "
	<< this->_gradeToExec << " required to execute created succesfully." << std::endl;
	return;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &obj) : Form("PPF", 25, 5), _target(obj.getTarget())
{
	std::cout << KYEL "Presidential Pardon Form class copy constructor called.";
	return;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << KYEL "PPF destructor called." << std::endl;
	return;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(PresidentialPardonForm const &obj)
{
	std::cout << KYEL "Assignement operator overload for PPF called." << std::endl;
	obj.getTarget();
	return *(this);
}

void	PresidentialPardonForm::execute(const Bureaucrat &executor) const
{
	if (this->getSignStatus() == true && executor.getGrade() <= this->getExec())
	{
		std::cout << KGRN << this->_target << " has been pardoned by Zaphod BeebleBox."
		<< std::endl;
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

std::string const	PresidentialPardonForm::getTarget() const
{
	return (this->_target);
}
