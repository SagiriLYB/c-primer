#include <iostream>
#include<typeinfo>

using namespace std;

int n[2][3] = {{1,2,3},{4,5,6}};

int main()
{
    int a;
    cout << typeid(a).name();
    return 0;
}