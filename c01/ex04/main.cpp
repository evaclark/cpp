#include <iostream>
#include <fstream>

// ifstream used to read information in file
// ofstream used to operate on files
// ios::out allows output on to stream eg. writing in files
// string::npos is used as a value to signal the end of the string

int main(int argc, char **argv)
{
	std::string file = argv[1];
	std::ifstream	infile(argv[1]);
	std::string	s1 = argv[2];
	std::string s2= argv[3];
	std::string	line;

	if (argc != 4)
	{	
		std::cout << "please input only filename and two strings :)" << std::endl;
		return (0);
	}

	if (!infile.is_open())
	{
		std::cout << "file " << file << " does not exist :(" << std::endl;
	}
	file.append(".replace");
	std::ofstream	outfile(file, std::ios::out);
	
	size_t match;
	while (std::getline(infile, line))
	{
		match = line.find(s1);
		while (match != std::string::npos)
		{
			line.erase(match, s1.length());
			line.insert(match, s2);
			match = line.find(s1);
		}
		outfile << line << std::endl;
	}
	infile.close();
	outfile.close();
}