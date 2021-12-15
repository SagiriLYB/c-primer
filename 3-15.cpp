#include <string>
#include <iostream>
#include <vector>

using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::vector;

int main()
{
    string ms;
    int mi;
    vector<string> mv;
    while(cin>>ms)
    {
        mv.push_back(ms);
    }
    for(auto c:mv)
    cout<<c;
    return 0;
}