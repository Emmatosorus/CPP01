#include <iostream>
#include <fstream>

void	replace(std::string *text, std::string s1, std::string s2)
{
	size_t i = 0;
	size_t pos;
	size_t size = text->size();
	while (i < size)
	{
		pos = text->find(s1);
		if (pos == std::string::npos)
			return ;
		text->erase(pos, s1.length());
		text->insert(pos, s2);
		i += s2.length() + 1;
	}
}

int	get_file(std::string *text, std::string file)
{
	std::ifstream	ifs(file.c_str());
	if (!ifs)
	{
		std::cout << "Please enter valid file" << std::endl;
		return (1);
	}
	*text += ifs.get();
	while (ifs.good())
		*text += ifs.get();
	ifs.close();
	(*text)[text->length() - 1] = 0;
	return (0);
}

int main(int ac, char **av)
{
	if (ac < 4 || ac > 4)
	{
		std::cout << "Please enter 4 paramters" << std::endl;
		return (1);
	}
	std::string		file = av[1];
	std::string		s1 = av[2];
	std::string		s2 = av[3];
	std::string		text;

	if (get_file(&text, file) != 0)
		return (1);
	replace(&text, s1, s2);

	file += ".replace";
	std::ofstream new_file(file.c_str());
	new_file << text.substr(0, text.length() - 1);
	new_file.close();
	return (0);
}
