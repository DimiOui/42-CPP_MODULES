#include "PhoneBook.hpp"

int	main()
{
	PhoneBook	phonebook;
	bool		status;
	std::string	input_cmd;

	status = true;
	phonebook.run();
	while(std::getline(std::cin, input_cmd))
	{
		if (input_cmd == "ADD")
			phonebook.add_contact();
		else if (input_cmd == "SEARCH")
			phonebook.search_contact();
		else if (input_cmd == "EXIT")
			return (0);
		std::cin.eof();
	}
	return (0);
}

//NEED TO FIX: CONTACTS ARE GETTING ADDED EVEN IF EMPTY.
