#include <iostream>

int main(void)
{
	std::string stringNML = "HI THIS IS BRAIN";
	std::string *stringPTR = &stringNML;
	std::string &stringREF = stringNML;

	std::cout << "Address held by stringNML : " << &stringNML << std::endl;
	std::cout << "Address held by stringPTR : " << stringPTR << std::endl;
	std::cout << "Address held by stringREF : " << &stringREF << std::endl;
	std::cout << std::endl;
	std::cout << "String held by stringNML : " << stringNML << std::endl;
	std::cout << "String held by stringPTR : " << *stringPTR << std::endl;
	std::cout << "String held by stringREF : " << stringREF << std::endl;
}