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
	std::ifstream infile(av[1]);
	std::string file;
	std::string	line;
	std::ofstream newFile("replace.txt");

	if (infile.is_open() && newFile.is_open())
	{
		while (std::getline(infile, line))
		{
			file.append(line);
			if (infile.peek() != EOF)
				file.append("\n");
		}
		search_and_replace(newFile, file, av[2], av[3]);
		infile.close();
		newFile.close();
	}
	else
		std::cout << "Error: couldn't open file\n";
}
