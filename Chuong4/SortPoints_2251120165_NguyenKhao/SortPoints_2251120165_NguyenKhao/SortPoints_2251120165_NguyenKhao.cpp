
#include <iostream>
#include<vector>
#include<algorithm>
#include "Point.h"
using namespace std;

int main()
{
    vector<Point>dsPoint;
    int n;
    ifstream fi;
    fi.open("Points.txt", ios_base::in);
    fi >> n;
    for (int i = 0; i < n; i++)
    {
        Point* p = new Point();
        fi >> *p;
        dsPoint.push_back(*p);
    }
    fi.close();
    cout << "Sort a list of points\n";
    sort(dsPoint.begin(), dsPoint.end());
    for (int i = 0; i < dsPoint.size(); i++)
    {
        cout << dsPoint[i] << endl;
    }
}
