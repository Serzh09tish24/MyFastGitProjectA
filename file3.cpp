#include<iostream>

int main(int argc, char*argv[])
{
    int n = 10;
    for(size_t i{0}; i != n; ++i)
    {
        std::cout<<"count["<<i<<"] = "<<i<<std::endl;
    }

    std::cout<<"Hello World!!!!"<<std::endl;
    return 0;
}