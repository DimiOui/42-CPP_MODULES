#ifndef FILESTREAM_HPP
#define FILESTREAM_HPP

#include <iostream>
#include <fstream>
#include <algorithm>
#include <string>

#pragma once

class Filestream
{
public:
    Filestream();
    ~Filestream();

    bool            openFile(std::string inputFile);
    bool            replaceStr(std::string src, std::string dest);
    void            outputFile(std::string content);
    bool            isEmpty(std::ifstream &inputFile);

private:
    std::string     _fileName;
    std::ifstream   _ifs;
};

#endif
