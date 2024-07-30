#include "Harl.h"

int main(void)
{
	Harl bot1;

	bot1.complain("DEBUG");
	std::cout << std::endl;
	bot1.complain("INFO");
	std::cout << std::endl;
	bot1.complain("WARNING");
	std::cout << std::endl;
	bot1.complain("ERROR");
	std::cout << std::endl;
}