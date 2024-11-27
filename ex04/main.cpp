#include <fstream>
#include <iostream>
#include <string>
#include <cstdio>

int main(int ac, char **av) // filename s1 s2
{
    /*It will open the file <filename> and copies its content into a new file
<filename>.replace, replacing every occurrence of s1 with s2.*/
    if (ac != 4)
        return (0);
    std::ifstream ifs(av[1]);
    std::string buffer;
    std::string word;
    std::string line;
    std::string to_find = av[2];
    if (!ifs)
    {   std::cerr << "failed to open" << av[1] << std::endl;
        return (1);
    }
    std::string ofName;
    ofName =  av[1];
    ofName += ".replace";
    std::cout << "ofName is " << ofName << std::endl;
    std::ofstream ofs(ofName);
    while (std::getline(ifs, line))
    {
        line += '\n';
        if (line.find(to_find)) != std::string::npos)
        {
            std::cout << "s1 wasnt found" << to_find << std::endl;
            ofs << line;
        }
        buffer += line;
    }
    if (buffer.length() > 0) // trim last newline
        buffer.resize(buffer.length() - 1);
    ofs << buffer;
    ifs.close();
    ofs.close();
}