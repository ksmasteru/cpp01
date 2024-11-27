#include <fstream>
#include <iostream>
#include <string>
#include <cstdio>

char* replace_word(const std::string& line, const std::string& s1, const std::string& s2)
{
    // given a line string replaces every occurence of s1 by s2
    // line should have at least one s1 instance
    size_t  total_l;
    int     numberOfs1 = 0;
    unsigned    long     s1Pos = 0;
    unsigned    long     i = 0;
    int     j = 0;
    int     s2_itr;

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
    s1Pos = 0;
    while (i < line.length() && line.find(s1, s1Pos) != std::string::npos)
    {
        s1Pos = line.find(s1, s1Pos);
        s2_itr = 0;
        while (i < s1Pos) //copy intial part of the string.
            str[i++] = line[j++];
        s1Pos += s1.length();
        j = s1Pos; 
        while (s2[s2_itr]) // copy the new s2
            str[i++] = s2[s2_itr++];
    }
    while (line[j] != '\0')
        str[i++] = line[j++];
    return (str);
}

int main(int ac, char **av)
{
       if (ac != 4)
        return (0);
    std::ifstream ifs(av[1]);
    std::string buffer;
    std::string word;
    std::string line;
    char *replaced_word;
    std::string to_find = av[2];
    if (!ifs)
    {   std::cerr << "failed to open" << av[1] << std::endl;
        return (1);
    }
    std::string ofName;
    ofName =  av[1];
    ofName += ".replace";
    std::ofstream ofs(ofName);
    while (std::getline(ifs, line))
    {
        line += '\n';
        if (line.find(to_find) != std::string::npos)
        {
            replaced_word = replace_word(line, av[2], av[3]);
            ofs << replaced_word;
            delete[] replaced_word;
        }
        else
            ofs << line;
    }
    ifs.close();
    ofs.close();
}
