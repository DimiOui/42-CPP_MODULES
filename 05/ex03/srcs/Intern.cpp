#include "Intern.hpp"

Intern::Intern()
{
	std::cout << KYEL "Default Intern constructor class called." << std::endl;
	return;
}

Intern::Intern(const Intern &obj)
{
	*this = obj;
	std::cout << KYEL "Intern Copy constructor called." << std::endl;
	return;
}

Intern::~Intern()
{
	std::cout << KYEL "Intern Destructor called." << std::endl;
	return;
}

Intern	&Intern::operator=(const Intern &obj)
{
	std::cout << KYEL "Assignement operator overload for Intern called." << std::endl;
	(void)obj;
	return (*this);
}

Form	*Intern::makeForm(const std::string formName, const std::string target) const
{
	t_forms forms[] =
	{
		{ "Shrubbery creation", new ShrubberyCreationForm(target) },
		{ "Robotomy request", new RobotomyRequestForm(target) },
		{ "Presidential pardon", new PresidentialPardonForm(target) },
		{ "", NULL }
	};
	Form	*result = NULL;

	for (int i = 0; forms[i].formType != NULL; i++)
	{
		if (forms[i].formName == formName)
			result = forms[i].formType;
		else
			delete forms[i].formType;
	}
	if (result == NULL)
		throw WrongForm();
	else
		std::cout << KGRN "Intern created " << formName << " form" << std::endl;
	return (result);
}

const char*	Intern::WrongForm::what() const throw()
{
	return (KRED "Form couldn't be created.");
}

std::ostream	&operator<<( std::ostream &o, Intern const &i)
{
	(void)i;
	o << "Intern " << std::endl;
	return o;
}
