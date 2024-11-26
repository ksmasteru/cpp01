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
        buffer += line;
        if (line[0] != '\n' && line[0] != '\0') buffer+= '\n';
    }
    if (buffer.length() > 0) // trim last newline
    {
        if (buffer[buffer.length() - 1] == '\n')
            buffer[buffer.length() - 1] = 0;
    }
    ofs << buffer;
    ifs.close();
    ofs.close();
}