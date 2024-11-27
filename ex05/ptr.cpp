#include <algorithm>
#include <iostream>
#include <stdio.h>

class sample{
    public:
        int a;
        int b;
    
};
int main()
{
    int sample::*ptr;
    sample instance;
    ptr = &sample::a;
    instance.*ptr = 69;
    std::cout <<  instance.a << std::endl;
}
