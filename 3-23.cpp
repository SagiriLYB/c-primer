#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> mv1 = {1,2,3,4};
    for(auto a = mv1.begin();a != mv1.end();a++)
    {
        *a = (*a) * 2;
    }
    for(auto b:mv1) cout << b << ' ';
    return 0;
}