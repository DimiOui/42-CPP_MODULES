#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm() : Form("SCF", 145, 137), _target("Default")
{
	std::cout << KYEL "Shrubbery Creation Form class created with Default target." << std::endl;
	return;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target) : Form("SCF", 145, 137), _target(target)
{
	std::cout << KYEL "Shrubbery Creation Form class created." << std::endl;
	std::cout << KWHT "SCF with grade " << this->_gradeToSign << " required to sign, and grade "
	<< this->_gradeToExec << " required to execute created succesfully." << std::endl;
	return;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &obj) : Form("SCF", 145, 137), _target(obj.getTarget())
{
	std::cout << KYEL "Shrubbery Creation Form class copy constructor called.";
	return;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << KYEL "SCF destructor called." << std::endl;
	return;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm const &obj)
{
	std::cout << KYEL "Assignement operator overload for SCF called." << std::endl;
	obj.getTarget();
	return *(this);
}

void	ShrubberyCreationForm::execute(const Bureaucrat &executor) const
{
	std::ofstream	output;
	std::string		fileName = this->_target + "_shrubbery";

	if (this->getSignStatus() == true && executor.getGrade() <= this->getExec())
	{
		output.open(fileName.c_str(), std::ios::out);
		output << "  __                    _" << std::endl;
		output << " / _|                  | |" << std::endl;
		output << "| |_ ___  _ __ ___  ___| |_" << std::endl;
		output << "|  _/ _ \\| '__/ _ \\/ __| __|" << std::endl;
		output << "| || (_) | | |  __/\\__ \\ |_" << std::endl;
		output << "|_| \\___/|_|  \\___||___/\\__|" << std::endl;
		output.close();
		std::cout << KGRN "Created a shrubbery in " << this->_target << " !" << std::endl;
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

std::string const	ShrubberyCreationForm::getTarget() const
{
	return (this->_target);
}
