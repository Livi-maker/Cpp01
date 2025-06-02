#include <iostream>

int	main()
{
	std::string 	str = " HI THIS IS BRAIN";
	std::string*	pointer;
	std::string&	reference = str;

	pointer = &str;
	std::cout << "string adress: " << &str << std::endl;
	std::cout << "pointer adress: " << &pointer << std::endl;
	std::cout << "reference adress: " << &reference << std::endl;
	std::cout << "string value: " << str << std::endl;
	std::cout << "pointer value: " << *pointer << std::endl;
	std::cout << "reference value: " << reference << std::endl;
}
