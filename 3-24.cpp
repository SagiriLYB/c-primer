#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int TempData;
	vector<int> mv1;

//读入一组数据
	while (cin >> TempData)
	{
		mv1.push_back(TempData);
        char Temp = cin.get();
        if(Temp == '\n') break;
	}
}