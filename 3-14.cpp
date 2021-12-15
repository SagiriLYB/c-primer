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
    vector<int> mv;
    while(cin>>mi)
    {
        mv.push_back(mi);
    }
    for(auto c:mv)
    cout<<c;
    return 0;
}