#pragma once
#include <vector>
#include <string>
using namespace std;

class Menu
{
private:
	vector<string> dsLuachon;
public:
	void themLuachon(string mota);
	void xuat();
	int chon();//Tra ve chi so cua menu item ma nguoi dung chon
};

