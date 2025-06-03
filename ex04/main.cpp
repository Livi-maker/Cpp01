#include <iostream>
#include <fstream>
#include <string>

void	search_and_replace(std::fstream &newFile, std::string line, std::string toFind, std::string toReplace)
{
	long unsigned int	i;
	long unsigned int	x;
	char				c;
	long unsigned int	r;

	x = 0;
	for (i = 0; i < line.size(); i ++)
	{
		c = toFind[x];
		if (line[i] == c)
			x++;
		else
		{
			x = 0;
			newFile << line[i];
		}
		if (x == toFind.size())
			newFile << toReplace;
		else if (x != 0 && i + 1 <= line.size() && line[i + 1] != toFind[x])
			for (r = 0; r < x; r++)
				newFile << line[i - x + r + 1];
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
