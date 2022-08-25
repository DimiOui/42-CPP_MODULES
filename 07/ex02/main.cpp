#include "Array.hpp"

#define KNRM "\x1B[0m"
#define KYEL "\x1B[33m"

int	main()
{
	Array<std::string>	strArray(5);
	Array<std::string>	other;

	strArray[0] = "First";
	strArray[1] = "Second";
	strArray[2] = "Third";
	strArray[3] = "Fourth";
	strArray[4] = "Fifth";
	other = strArray;
	other[2] = "INTRUDER";


	// TEST1
	try
	{
		std::cout <<  KYEL "Out of bound test1:" KNRM << std::endl;
		std::cout << strArray[10] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	// TEST2
	try
	{
		std::cout <<  KYEL "Out of bound test2:" KNRM << std::endl;
		std::cout << strArray[-10] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	// TEST3
	try
	{
		std::cout <<  KYEL "What's in the 3rd cell ? + Size of array:" KNRM << std::endl;
		std::cout << strArray[3] << std::endl;
		std::cout << strArray.size() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	// TEST4
	try
	{
		std::cout <<  KYEL "Print array:" KNRM << std::endl;
		for (int i = 0; i < strArray.size(); i++)
			std::cout << strArray[i] << std::endl;
		std::cout <<  KYEL "Print other array:" KNRM << std::endl;
		for (int i = 0; i < other.size(); i++)
			std::cout << other[i] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	// TEST5
	Array<int>	intArray(10);
	srand(time(NULL));
	for (int i = 0; i < 10; i++)
	{
		const int value = rand();
		intArray[i] = value;
	}
	try
	{
		std::cout <<  KYEL "Print intArray:" KNRM << std::endl;
		for (int i = 0; i < intArray.size(); i++)
			std::cout << intArray[i] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	// TEST6
	Array<int>	intArray2;
	std::cout <<  KYEL "Print intArray2 size: " KNRM << intArray2.size() << std::endl;
	return (0);
}


//#define MAX_VAL 750
//int main(int, char**)
//{
//    Array<int> numbers(MAX_VAL);
//    int* mirror = new int[MAX_VAL];
//    srand(time(NULL));
//    for (int i = 0; i < MAX_VAL; i++)
//    {
//        const int value = rand();
//        numbers[i] = value;
//        mirror[i] = value;
//    }
//    //SCOPE
//    {
//        Array<int> tmp = numbers;
//        Array<int> test(tmp);
//    }

//    for (int i = 0; i < MAX_VAL; i++)
//    {
//        if (mirror[i] != numbers[i])
//        {
//            std::cerr << "didn't save the same value!!" << std::endl;
//            return 1;
//        }
//    }
//    try
//    {
//        numbers[-2] = 0;
//    }
//    catch(const std::exception& e)
//    {
//        std::cerr << e.what() << '\n';
//    }
//    try
//    {
//        numbers[MAX_VAL] = 0;
//    }
//    catch(const std::exception& e)
//    {
//        std::cerr << e.what() << '\n';
//    }

//    for (int i = 0; i < MAX_VAL; i++)
//    {
//        numbers[i] = rand();
//    }
//    delete [] mirror;//
//    return 0;
//}
