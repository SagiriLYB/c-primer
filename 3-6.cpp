#include <string>
#include <iostream>

using std::string;
using std::cout;
using std::cin;
using std::endl;

int main()
{
    string My_string;
    cin>>My_string;
    for(auto &a:My_string)
    {
        a='X';   
    }
    cout<<My_string;
    return 0;
}