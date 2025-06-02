#include <iostream>
#include <fstream>
#include <string>

int	search(std::string line, std::string toFind)
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
			x = 0;
		if (x == toFind.length())
			return (i - x + 1);
	}
	return (-1);
}

int	main(void)
{
	std::ifstream outfile("text.txt");
	std::string	line;
	int	i;

	if (outfile.is_open())
	{
		std::cout << "if\n";
		while (std::getline(outfile, line))
		{
			i = search(line, "i");
			std::cout << i << line << "\n";
		}
		outfile.close();
	}
}
