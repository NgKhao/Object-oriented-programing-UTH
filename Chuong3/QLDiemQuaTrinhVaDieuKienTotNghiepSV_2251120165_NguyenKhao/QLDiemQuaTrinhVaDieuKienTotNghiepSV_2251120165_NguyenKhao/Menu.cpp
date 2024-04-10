#include "Menu.h"
void Menu::themChucNang(string them)
{
	dsChucNang.push_back(them);
}

void Menu::inCacChucNang()
{
	cout << "\n===========================MENU==========================";
	for (int i = 0; i < dsChucNang.size(); i++)
	{
		cout << endl << i << ". " << dsChucNang[i];
	}
	cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~END~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
}

int Menu::choice()
{
	int ch;
	do
	{
		inCacChucNang();
		cout << "\nNhap lua chon cua ban: "; cin >> ch; cin.ignore();
		if (ch < 0 || ch >= dsChucNang.size())
		{
			cout << "\nLua chon cua ban khong hop le. Vui long chon lai !!!";
		}
	} while (ch < 0 || ch >= dsChucNang.size());
	return ch;
}
