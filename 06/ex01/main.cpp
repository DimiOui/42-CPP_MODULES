#include <iostream>
#include <stdint.h>

struct	Data
{
	float	val;
};

uintptr_t	serialize(Data *ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data	*deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}

int	main()
{
	Data		*ptr = new Data;
	Data		*new_data;
	uintptr_t	raw;

	ptr->val = 42.42;
	std::cout << "data before serialize : " << ptr->val << std::endl;
	raw = serialize(ptr);
	std::cout << "data after serialize : " << raw << std::endl;
	new_data = deserialize(raw);
	std::cout << "new_data after deserialize : " << new_data->val << std::endl;
	return (0);
}
