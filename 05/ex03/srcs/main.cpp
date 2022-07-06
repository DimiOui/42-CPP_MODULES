#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int	main()
{
	// WRONG FORM
	try
	{
		Intern		intern;
		Bureaucrat	Dave("Dave", 1);
		Form		*form;

		form = intern.makeForm("bonjour", "Dimitri");
		if (form)
			delete form;
		form = intern.makeForm("Presidential pardon", "Dimitri");
		if (form)
			delete form;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;

	// GOOD FORMS
	try
	{
		Intern		intern;
		Bureaucrat	Dave("Dave", 1);
		Form		*form;

		form = intern.makeForm("Presidential pardon", "Dimitri");
		if (form)
			delete form;
		form = intern.makeForm("Shrubbery creation", "Backyard");
		Dave.signForm(*form);
		Dave.executeForm(*form);
		if (form)
			delete form;
		form = intern.makeForm("Robotomy request", "Dimitri");
		Dave.signForm(*form);
		Dave.executeForm(*form);
		if (form)
			delete form;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	return(0);
}
