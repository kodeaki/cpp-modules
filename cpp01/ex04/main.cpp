
#include <iostream>
#include <fstream>

std::string	ft_replace(std::string buffer, std::string strToReplace, std::string replacementStr)
{
	size_t	toReplaceLen = strToReplace.length();
	size_t	replacementLen = replacementStr.length();

	if (strToReplace.empty())
		return (buffer);

	std::size_t pos = 0;

	while (true) {
		pos = buffer.find(strToReplace, pos);
		if (pos == std::string::npos)
			break;
		buffer.erase(pos, toReplaceLen);
		buffer.insert(pos, replacementStr);
		pos += replacementLen;
	}
	return (buffer);
}

int	main(int ac, char **av)
{
	if (ac != 4) {
		std::cout << "Usage: ./replacestr <filename> <strToReplace> <replacementStr>" << std::endl;
		return (1);
	}

	std::string		fileName = av[1];
	std::string		strToReplace = av[2];
	std::string		replacementStr = av[3];

	std::string		newFile = fileName + ".replace";
	std::string		buffer;

	std::ifstream	infile;
	std::ofstream	outfile;

	// Open and error check infile
	infile.open(fileName);
	if (infile.is_open() == false) {
		std::perror("Infile error");
		return (1);
	}

	// Open and error check outfile
	outfile.open(newFile, std::ios::out | std::ios::trunc);
	if (outfile.is_open() == false) {
		std::perror("Outfile error");
		infile.close();
		return (1);
	}

	// Main loop for reading the infile
	while (std::getline(infile, buffer)) {
		buffer = ft_replace(buffer, strToReplace, replacementStr);
		outfile << buffer;
		if (infile.peek() != EOF)
			outfile << std::endl;
	}

	// Cleanup
	outfile.close();
	infile.close();
	return (0);
}
