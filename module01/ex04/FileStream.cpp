/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FileStream.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okamili <okamili@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 01:47:54 by okamili           #+#    #+#             */
/*   Updated: 2023/11/09 04:45:16 by okamili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FileStream.hpp"

FileStream::FileStream(std::string inFile, std::string oldStr, std::string newStr)
{
	_fileName = inFile;
	_oldString = oldStr;
	_newString = newStr;
	_inputFile.open(inFile);
	_buffer = std::string("");
}

FileStream::~FileStream(void)
{
	this->_inputFile.close();
	this->_outputFile.close();
}

int	FileStream::readInput(void)
{
	char	holder;

	if (!this->_inputFile.is_open())
	{
		std::cerr << "ERROR: couldnt open input file\n";
		return (1);
	}
	while (this->_inputFile.get(holder))
	{
		this->_buffer += holder;
	}
	return (0);
}

void	FileStream::replaceStr(void)
{
	std::string	temp;

	if (this->_oldString.empty())
		return;
	temp = this->_buffer;
	this->_buffer = "";
	while (temp.substr(0).find(this->_oldString) != std::string::npos)
	{
		this->_buffer += temp.substr(0, temp.substr(0).find(this->_oldString));
		this->_buffer += this->_newString;
		temp = temp.substr(temp.substr(0).find(this->_oldString) + this->_oldString.length());
	}
	this->_buffer += temp;
}

int	FileStream::writeOutput(void)
{
	this->_outputFile.open(this->_fileName + ".replace");
	if (this->_outputFile.is_open())
		this->_outputFile << this->_buffer;
	else
	{
		std::cout << "ERROR: couldnt write to the output file\n";
		return (1);
	}
	return (0);
}
