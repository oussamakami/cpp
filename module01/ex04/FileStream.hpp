/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FileStream.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okamili <okamili@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 01:44:44 by okamili           #+#    #+#             */
/*   Updated: 2023/11/09 04:46:35 by okamili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILESTREAM_HPP
# define FILESTREAM_HPP

# include <iostream>
# include <fstream>

class FileStream
{
	private:
		std::string		_fileName;
		std::string		_oldString;
		std::string		_newString;
		std::ifstream	_inputFile;
		std::ofstream	_outputFile;
		std::string		_buffer;
	public:
		FileStream(std::string inFile, std::string oldStr, std::string newStr);
		~FileStream(void);
		int		readInput(void);
		void	replaceStr(void);
		int		writeOutput(void);
};

#endif
