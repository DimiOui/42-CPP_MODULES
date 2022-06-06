#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	this->contact_count = 0;
	this->iter = 0;
}

PhoneBook::~PhoneBook()
{
}

void	PhoneBook::run()
{
	std::cout << KBLU "*VERY LAME PHONEBOOK*" << std::endl;
	std::cout << KBLU "*Enter one of the following commands : ADD, SEARCH, EXIT" KCYN << std::endl;
}

void	PhoneBook::add_contact()
{
	if (this->contact_count < 8)
	{
		if (this->contacts[this->contact_count].get_contact(this->contact_count + 1))
			this->contact_count++;
	}
	else
	{
		if (this->contacts[this->iter].get_contact(this->iter + 1))
			this->iter++;
		if (this->iter == 8)
			this->iter = 0;
	}
}

void	PhoneBook::header()
{
	std::cout << KBLU "*********************************************" << std::endl;
	std::cout << KBLU "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	for (int i = 0; i < this->contact_count; i++)
		this->contacts[i].print_contact_table();
	std::cout << KBLU "*********************************************" << std::endl;
}

bool	PhoneBook::search_contact()
{
	int	index;

	if (this->contact_count == 0)
		std::cout << KRED "Trying to read from an empty book innit ?" KCYN << std::endl;
	else
	{
		this->header();
		std::cout << KBLU "Enter the index of desired contact to display its informations. (0 to exit)" KCYN << std::endl;
		while (!(std::cin >> index) || (index < 0 || index > this->contact_count))
		{
			if (std::cin.eof())
				return (false);
			std::cin.clear();
			std::cin.ignore(10000, '\n');
			std::cout << KRED "Invalid index." KCYN << std::endl;
		}
		if (index > 0)
			this->contacts[index - 1].print_contact();
	}
	return (true);
}
