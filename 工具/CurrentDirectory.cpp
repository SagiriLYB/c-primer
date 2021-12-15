#include <unistd.h>
#include <iostream>

int main()
{
    char buf[80];
    getcwd(buf,sizeof(buf));
    std::cout<<"Current working directory is:";
    std::cout<<buf<<std::endl;
    return 0;
}