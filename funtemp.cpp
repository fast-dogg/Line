#include <iostream>
#include <cstdio>
template <typename T>
void Swap(T &a, T &b);

int main()
{
    using namespace std;

    int i = 10;
    int j = 20;
    cout << "i, j = " << i << "," << j << ".\n";
    Swap(i, j);
    cout << "Now i, j = " << i << "," << j << ".\n"; 

    double x = 24.5;
    double y = 81.7;
    cout << "x, y = " << x << "," << y << ".\n";
    Swap(x, y);
    cout << "Now x, y = " << x << "," << y << ".\n";     
    system("pause");
    return 0;
}

template <typename T>
void Swap(T &a, T &b)
{
    T temp;
    temp = a;
    a = b;
    b = temp;
}

