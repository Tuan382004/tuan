#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
nhapdulieu:
    int a;
    cout << "BAN CO YEU TOI KHONG  " << endl;
    cout << "1 CO " << "         " << "2 KHONG" << endl;
    cin >> a;
    while (a != 1 && a != 2)
    {

        cout << "vui long nhap lai";
        cin >> a;
    }

    if (a == 1)
    {
        cout << "    " << "TOI CUNG " << endl;

        for (int i = 1; i <= 9; i++)
        {
            for (int j = 1; j <= 9; j++)
            {
                if (i == 9 && j == 5 || i == 8 && j == 4 || i == 7 && j == 3 ||
                    i == 6 && j == 2 || i == 5 && j == 1 || i == 4 && j == 1 ||
                    i == 3 && j == 1 || i == 2 && j == 2 || i == 2 && j == 4 ||
                    i == 3 && j == 5 || i == 2 && j == 6 || i == 2 && j == 8 ||
                    i == 3 && j == 9 || i == 4 && j == 9 || i == 5 && j == 9 ||
                    i == 6 && j == 8 || i == 7 && j == 7 || i == 8 && j == 6 ||
                    i == 8 && j == 5 || i == 7 && 4 <= j && j <= 6 || i == 6 && 3 <= j && j <= 7 ||
                    i == 5 && 2 <= j && j <= 8 || i == 4 && 2 <= j && j <= 8 ||
                    i == 3 && 2 <= j && j <= 8 || i == 2 && j == 3 && j == 7 ||
                    i == 2 && j == 7 || i == 2 && j == 3)
                    cout << "T" << " ";
                else
                    cout << " " << " ";
            }
            cout << endl;
        }
        cout << endl;
        cout << "       " << "BAN";
    }
    else if (a == 2)
    {
        cout << "MINH BUON LAM :(( ";
    }
    else
    {
        cout << "vui long nhap lai" << endl;
    }

    return 1;
}
