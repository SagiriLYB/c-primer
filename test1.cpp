#include <string>
#include <iostream>
#include <vector>
#include <sstream>
#include <fstream>
#include <iomanip>

using namespace std;

int main()
{
    ifstream infile("2.txt",ios::in);
    ofstream outfile("3.txt",ios::out);
    string line;
    while(getline(infile,line))
    {
        for(int i = 0;i<10;i++)
        {
            outfile << line[i];
        }
        outfile << endl;
    }
    return 0;
}