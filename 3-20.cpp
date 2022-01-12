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
//输出相邻两位和
    for(int t=1;t<mv1.size();t++)
    cout<<mv1[t-1]+mv1[t]<<' ';

    cout<<endl;
//输出对应两数和
    for(int t=0;t<(mv1.size()+1)/2;t++)
    cout<<mv1[t]+mv1[mv1.size()-t-1]<<' ';
	return 0;
}