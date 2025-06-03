#include <iostream>
#include <fstream>
#include <string>

void	search_and_replace(std::ofstream &newFile, std::string line, std::string toFind, std::string toReplace)
{
	size_t			pos;
	size_t			len;
	std::string		temp;

	pos = 0;
	len = 0;
	while (len < line.length())
	{
		pos = line.find(toFind, pos);
		if (pos == (size_t)-1)
		{
			temp.append(line, len);
			break ;
		}
		else
		{
			temp.append(line, len, pos - len);
			temp.append(toReplace);
			pos = pos + toFind.length();
			len = pos;
		}
	}
	newFile << temp;
}

int	main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "Error: arguments required:\n-filename -toFind -toReplace\n";
		return (1);
	}
	std::ifstream outfile(av[1]);
	std::string	line;
	std::ofstream newFile("replace.txt");

	if (outfile.is_open() && newFile.is_open())
	{
		while (std::getline(outfile, line))
		{
			search_and_replace(newFile, line, av[2], av[3]);
			if (outfile.peek() != EOF)
				newFile << "\n";
		}
		outfile.close();
		newFile.close();
	}
	else
		std::cout << "Error: couldn't open file\n";
}
