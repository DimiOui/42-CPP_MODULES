#include "Filestream.hpp"

Filestream::Filestream()
{
}

Filestream::~Filestream()
{
}

bool	Filestream::isEmpty(std::ifstream &inputFile)
{
	return inputFile.peek() == std::ifstream::traits_type::eof();
}

bool	Filestream::openFile(std::string inputFile)
{
	if (this->_ifs.is_open())
		this->_ifs.close();
	if (inputFile.empty())
	{
		std::cerr << "Error: filename cannot be empty." << std::endl;
		return (false);
	}
	this->_ifs.open(inputFile);
	if (_ifs.fail())
	{
		std::cerr << "Error: could not open file." << std::endl;
		return (false);
	}
	if (this->isEmpty(_ifs))
	{
		std::cerr << "Error: file cannot be empty." << std::endl;
		return (false);
	}
	this->_fileName = inputFile;
	return (true);
}

bool	Filestream::replaceStr(std::string src, std::string dst)
{
	std::string	result;

	if (src.empty() || dst.empty())
	{
		std::cout << "Error: strings cannot be empty"<< std::endl;
		return (false);
	}
	result.assign(std::istreambuf_iterator<char>(this->_ifs),
			std::istreambuf_iterator<char>());
	for (size_t pos = 0; pos < result.length(); pos++)
	{
		if (result.compare(pos, src.length(), src) == 0)
		{
			result.erase(pos, src.length());
			result.insert(pos, dst);
			pos += dst.length() - 1;
		}
	}
	this->outputFile(result);
	return (true);
}

void	Filestream::outputFile(std::string content)
{
	std::ofstream	ofs;
	std::string		ofn = this->_fileName;

	std::transform(ofn.begin(), ofn.end(), ofn.begin(), ::toupper);
	ofn += ".replace";
	ofs.open(ofn);
	ofs << content;
}
