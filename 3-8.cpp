#include <string>
#include <iostream>

using std::string;
using std::cout;
using std::cin;
using std::endl;

int main()
{
    int i=0;
    string My_string;
    cin>>My_string;
    while(i<My_string.size())
    {
        My_string[i]='X';i++;
    }
    //for(i=0;i<My_string.size();)
    cout<<My_string;
    return 0;
}