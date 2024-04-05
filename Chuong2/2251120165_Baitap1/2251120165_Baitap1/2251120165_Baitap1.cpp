// 2251120165_Baitap1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<vector>
#include<string>
#include<fstream>
using namespace std;

// trim from start (in place)
static inline void ltrim(std::string& s) {
    s.erase(s.begin(), std::find_if(s.begin(), s.end(), [](unsigned char ch) {
        return !std::isspace(ch);
        }));
}
int main()
{
    cout << "2251120165 - Nguyen Khao\n";
    cout << "\t\t\n======== BAI TAP 1 =======\n";
    vector<string> dong;
    // Doc file data.txt vao bo nho
    fstream fi("data.txt"); // mo file de doc
    while (!fi.eof())
    {   //doc mot dong, chen dong nay vao mang tren bo nho
        string s;
        getline(fi, s);
        dong.push_back(s);
    }
    fi.close();
    // Dem so dong trong file 
    cout << "So dong trong file: " << dong.size() << endl;
    // In ra cac dong bat dau bang "-"
    // Duyet cac dong 
    for (int i = 0; i < dong.size(); i++)
    {   
        string s = dong[i];
        ltrim(s);
        if (s.compare(0,1,"-") == 0)
        {
            cout << dong[i] << endl;
        }
    }
    return 0;
}

