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
    vector<int> ivec2{ 42, 42, 42, 42, 42, 42, 42, 42, 42, 42};
	vector<int> My_int2(10,42);
	vector<int> My_int3 = My_int2;


    return 0;
}