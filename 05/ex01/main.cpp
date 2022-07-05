#include "Bureaucrat.hpp"

int	main()
{
	// BASIC FORM TESTS
	try
	{
		Bureaucrat	Dave("Dave", 1);
		Form	form;
		std::cout << form << std::endl;
		Form	form2("A000", 75, 75);
		std::cout << form2 << std::endl;
		Dave.signForm(form2);
		std::cout << form2 << std::endl;
		Form	twin(form2);
		std::cout << twin << std::endl;
		Form	form3 = Form("A001", 151, 0); // change values to check try/catch conditions
		std::cout << form << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;

	//	SOME OTHER BASIC TESTS
	try
	{
		Bureaucrat	Dave("Dave", 2);
		Bureaucrat	Trainee;
		Form		form("A000", 1, 149);

		std::cout << Dave << std::endl;
		std::cout << Trainee << std::endl;
		std::cout << form << std::endl;
		Dave.signForm(form);
		Dave.upgrade();
		std::cout << Dave << std::endl;
		Dave.signForm(form);
		Trainee.execForm(form);
		Trainee.upgrade();
		std::cout << Trainee << std::endl;
		Trainee.execForm(form);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;

	//	BASIC TESTS WITH DAVE AND TRAINEE
	try
	{
		Bureaucrat	Dave = Bureaucrat("Dave", 1);
		Bureaucrat	Trainee;
		Form		form("A000", 1, 1);
		Form		form2;
		std::cout << Dave << std::endl;
		std::cout << Trainee << std::endl;
		std::cout << form << std::endl;
		Trainee.signForm(form);
		Dave.signForm(form);
		Dave.execForm(form2);
		std::cout << form << std::endl;
		Trainee.execForm(form);
		Dave.execForm(form);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return(0);
}
