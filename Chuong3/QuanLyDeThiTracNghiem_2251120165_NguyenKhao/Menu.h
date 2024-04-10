#pragma once
#include<vector>
#include<iostream>
using namespace std;
class Menu
{
private:
	vector<string>dsChucNang;
public:
	void themChucNang(string);
	void xuatCacChucNang();
	int choice();
};

