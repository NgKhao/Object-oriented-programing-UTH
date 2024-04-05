// SVMSSV_Baitap1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <vector>
#include <fstream>
using namespace std;


// trim from start (in place)
void ltrim(std::string& s) {
    s.erase(s.begin(), std::find_if(s.begin(), s.end(), [](unsigned char ch) {
        return !std::isspace(ch);
        }));
}

int main()
{
    cout << "MSSV - Ho ten cua ban!\n";
    cout << "========Bai tap 1 ==========\n";
    //string dong[100];//co the thu voi mang co dien
    vector<string> dong; // doi tuong thay the mang chua cac dong
    //Doc file data.txt vao bo nho
    fstream fi("data.txt");//mo file de doc
    while (!fi.eof())
    {  //doc mot dong, chen dong nay vao mang tren bo nho
        string s;
        getline(fi, s);
        dong.push_back(s);
    }
    fi.close();
    //Dem so dong trong file
    cout << "So dong trong file: " << dong.size()<<endl;
    //In ra cac dong bat dau bang "-"
   //duyet cac dong; voi moi dong kiem tra neu bat dau bang - thi in ra
    for (int i = 0; i < dong.size(); i++)
    {
        string s = dong[i];
        //xoa cac ky tu trang thua o dau dong
        ltrim(s);
        if (s.compare(0,1,"-")==0) // So sanh 1 ky bat dau tu vi tri dau tien
            cout << dong[i] << endl;
    }
}
