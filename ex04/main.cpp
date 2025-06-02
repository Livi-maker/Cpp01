#include <iostream>
#include <fstream>
#include <string>

void	search_and_replace(std::fstream &newFile, std::string line, std::string toFind, std::string toReplace)
{
	int		i;
	int		x;
	char	c;

	x = 0;
	for (i = 0; i < line.length(); i ++)
	{
		c = toFind[x];
		if (line[i] == c)
			x++;
		else
		{
			x = 0;
			newFile << line[i];
		}
		if (x == toFind.length())
			newFile << toReplace;
	}
}

int	main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "Error: argument required:\n-filename -toFind -toReplace\n";
		return (1);
	}
	std::ifstream outfile(av[1]);
	std::string	line;
	std::fstream newFile("replace.txt", std::ios::in | std::ios::app);

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
