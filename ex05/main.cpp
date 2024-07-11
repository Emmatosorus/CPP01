#include "Harl.h"

int main(void)
{
	Harl bot1;

	bot1.complain("debug");
	std::cout << std::endl;
	bot1.complain("info");
	std::cout << std::endl;
	bot1.complain("warning");
	std::cout << std::endl;
	bot1.complain("error");
	std::cout << std::endl;
}