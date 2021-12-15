#include <string>
#include <iostream>
#include <vector>
#include <cctype>

using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::vector;

int main()
{
    string a;
    vector<string> v;
    while(cin>>a) 
    {
        a+=' ';
        v.push_back(a);
    }
    for(int t1=0;t1<v.size();t1++)
    {
        for(auto &t2:v[t1]) t2=toupper(t2);
    }
    for(auto t:v) cout<<t;
    return 0;
}