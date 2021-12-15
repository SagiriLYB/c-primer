#include <string>
#include <iostream>

using std::string;
using std::cout;
using std::cin;
using std::endl;

int main()
{
    string ms1,ms2;
    cin>>ms1;
    cin>>ms2;
    if(ms1.size()>ms2.size()) cout<<ms1;
    else cout<<ms2;
    return 0;
}