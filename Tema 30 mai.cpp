// Tema 30 mai.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int maxim(int x[], int n)
{

    int max = -1000000;
    for (int i = 0;i < n;i++)
    {

        if (x[i] > max)
        {
            max = x[i];
        }
    }
    return max;
}
int main()
{
    //ex 1 
    int x[100];
    int n;
    n = 6;
    /*for (int i = 0;i < n;i++)
    {
        cin >> x[i];
    }*/




    /*cout<< maxim(x,n);*/

    //ex2
  /*  int a[10] = { 1,2,3,4,5,6,7,8,9,10 };
    int  el;
    cin >> el;
    int ok = 0;
    for (int i = 0;i < 10;i++)
    {
        if (a[i] == el)
        {
            ok = 1;
        }
    }
    if (ok == 1)
    {
        cout << "exista";
    }
    else
    {
        cout << "nu exista";
    }*/

    //ex 3

    int a[10] = { 1,2,3,2,5,6,2,8,3,10 };
    int  el;
    cin >> el;
    int nr = 0;
    for (int i = 0;i < 10;i++)
    {
        if (a[i] == el)
        {
            nr++;
        }
    }
    cout << nr;
}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
