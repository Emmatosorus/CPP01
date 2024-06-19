#include <iostream>
#include <fstream>

int main(int ac, char **av)
{
	if (ac < 4 || ac > 4)
	{
		std::cout << "Please enter 4 paramters" << std::endl;
		return (1);
	}
	std::string		file = av[1];
	std::ifstream	ifs(file.c_str());
	std::string		text;

	text += ifs.get();
	while (ifs.good())
		text += ifs.get();
	ifs.close();
	std::cout << text;
	file += ".replace";
	std::ofstream new_file(file.c_str());
	new_file << "It worked!";
	new_file.close();
	return (0);
}
