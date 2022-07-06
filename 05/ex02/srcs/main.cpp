#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int	main()
{
	// PRESIDENTIAL PARDON
	try
	{
		PresidentialPardonForm	form("Jeremy");
		Bureaucrat	Dave("Dave", 1);
		Bureaucrat	Trainee;
		Trainee.signForm(form);
		Dave.signForm(form);
		Dave.executeForm(form);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;

	//	SHRUBBERY
		try
	{
		ShrubberyCreationForm	shrub("Backyard");
		Bureaucrat	ForesterReq("ForesterReq", 146);
		Bureaucrat	Forester("Forester", 138);

		ForesterReq.signForm(shrub);
		ForesterReq.upgrade();
		ForesterReq.signForm(shrub);
		Forester.executeForm(shrub);
		Forester.upgrade();
		Forester.executeForm(shrub);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;

	//	ROBOTOMY
		try
	{
		RobotomyRequestForm	robotomy("Dimitri");
		Bureaucrat	Dave("Dave", 1);
		Dave.signForm(robotomy);
		Dave.executeForm(robotomy);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return(0);
}
