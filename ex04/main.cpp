#include <fstream>
#include <iostream>
#include <string>
#include <cstdio>

void replace_word(const std::string& line, const std::string& s1, const std::string& s2)
{
    // given a line string replaces every occurence of s1 by s2
    // line should have at least one s1 instance
    size_t  total_l;
    int     numberOfs1 = 0;
    int     s1Pos = 0;
    int     i = 0;
    int j = 0;
    while (s1Pos != std::string::npos)
    {
        s1Pos = line.find(s1, s1Pos);
        if (s1Pos != std::string::npos)
        {
            numberOfs1++;
            s1Pos += s1.length();
        }
    }
    total_l = line.length() - s1.length() * numberOfs1 + s2.length() * numberOfs1;
    char* str = new char[total_l + 1];
    str[total_l] = 0;
    while (str[i] != 0)
    {
        while (line[j] != 0 && str[i] != 0 && line[j] != s1[0])
            str[i++] = line[j++]; //:D . work with line.find
        while ()
    }
    //std::cout << "replaced string is " << *replaced << std::endl;
}

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
        if (line.find(to_find) != std::string::npos)
        {
            std::cout << "s1 was found" << to_find << std::endl;
            replace_word(line, av[2], av[3]);
            ofs << line;
        }
        else
            ofs << line;
        //buffer += line;
    }
    if (buffer.length() > 0) // trim last newline
        buffer.resize(buffer.length() - 1);
    //ofs << buffer;
    ifs.close();
    ofs.close();
}