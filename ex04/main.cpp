#include <iostream>
#include <fstream>
#include <string>

int	search_and_replace(std::fstream &newFile, std::string line, std::string toFind)
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
		{
			newFile << "x";
			return (i - x + 1);
		}
	}
	return (-1);
}

int	main(void)
{
	std::ifstream outfile("text.txt");
	std::string	line;
	int	i;
	std::string line2;
	std::fstream newFile("replace.txt", std::ios::in | std::ios::app);

	if (outfile.is_open() && newFile.is_open())
	{
		while (std::getline(outfile, line))
		{
			i = search_and_replace(newFile, line, "i");
			std::cout << i << line << "\n";
		}
		outfile.close();
	}
	else
		std::cout << "Error: couldn't open file\n";
}
