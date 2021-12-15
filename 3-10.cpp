#include <string>
#include <iostream>

using std::string;
using std::cout;
using std::cin;
using std::endl;

int main()
{
    int i=0;
    string ms1,ms2;
    cin>>ms1;
    for(auto a:ms1)
    {
        if(!ispunct(ms1[i]))
        {
            ms2+=ms1[i];
        }
        i++;
    }
    cout<<ms2;
    return 0;
}