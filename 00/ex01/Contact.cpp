#include "Contact.hpp"

std::string const Contact::contact_head[5] = {
	KYEL "First Name",
	KYEL "Last Name",
	KYEL "Nickname",
	KYEL "Phone Number",
	KYEL "Darkest Secret"
};

Contact::Contact()
{
	for (int i = First; i <= Secret; i++)
		this->contact_input[i] = std::string();
}

Contact::~Contact()
{
}

bool	Contact::get_contact(int index)
{
	this->index = index;
	for (int i = First; i <= Secret; i++)
	{
		std::cout << Contact::contact_head[i] << ": ";
		std::getline(std::cin, this->contact_input[i]);
		if (contact_input[i].empty())
		{
			//for (int i = First; i <= Secret; i++)
			//	this->contact_input[i].clear(); // Why isn't it needed to clear the contact input ?
			std::cout << KRED "Empty fields are forbidden, return to phonebook." KCYN << std::endl;
			return (false);
		}
		if (std::cin.eof())
			return (false);
	}
	std::cout << KGRN "Contact added. " KCYN << std::endl;
	return (true);

}

void	Contact::print_contact_table()
{
	std::cout << "|" << std::setw(10) << this->index;
	for (int i = First; i <= Nick; i++)
	{
		std::cout << "|";
		if (this->contact_input[i].length() > 10)
			std::cout << this->contact_input[i].substr(0, 9) << ".";
		else
			std::cout << std::setw(10) << this->contact_input[i];
	}
	std::cout << "|" << std::endl;
}

void	Contact::print_contact()
{
	std::cout << KCYN "Contact №" << this->index <<std::endl;
	for (int i = First; i <= Secret; i++)
	{
		std::cout << Contact::contact_head[i] << KCYN ": ";
		std::cout << this->contact_input[i] << std::endl;
	}
}
