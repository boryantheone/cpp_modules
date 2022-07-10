/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcollin <jcollin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 15:19:27 by jcollin           #+#    #+#             */
/*   Updated: 2022/07/10 15:19:28 by jcollin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "myReplace.hpp"

myReplace::myReplace() {}

myReplace::~myReplace() {}

void myReplace::replace(const std::string &filename, const std::string &find, const std::string &replace) {

    if (filename.empty())
        throw "Filename is empty";
    if (find.empty())
        throw "String to find is empty";
    if (replace.empty())
        throw "String to replace with is empty";

    std::ifstream infile;
    infile.open(filename, std::ios::in);  //std::ios::in - флаг на чтение
    if (!infile.is_open())
        throw "Input file wasn't open";
    if (infile.peek() == EOF)
        throw "Empty file";

    std::string outFileName = filename + ".replace";
    std::ofstream outfile;
    outfile.open(outFileName, std::ios::trunc | std::ios::out);
    if (!outfile.is_open()) {
        infile.close();
        throw "Output file wasn't open";
    }


    std::string buffer;
    size_t      indexFound;
    while (!infile.eof()) {
        std::getline(infile, buffer);
        while (true) {
            indexFound = buffer.find(find);
            if (indexFound != std::string::npos) {    //std::string::npos - возвращает find, есди вхождение не быдо найдено
                buffer.erase(indexFound, find.length());
                buffer.insert(indexFound, replace);
            }
            else {
                break;
            }
        }
        outfile << buffer << std::endl;
    }

    infile.close();
    outfile.close();
}

