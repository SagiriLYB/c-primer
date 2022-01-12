#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> mv1 = {1,2,3,4,5};
    for(auto a = mv1.cbegin();a != mv1.cend();a++)
    {
        cout<<*a<<' ';
    }
    return 0;
}