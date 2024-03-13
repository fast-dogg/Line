#include <iostream>
#include "twofile2.h"
extern int tom;
static int dick;
int harry = 200;

void remote_access()
{
    using namespace std;
    cout << "remote_access() reports the following addresses:\n";
    cout << &tom << " = &tom, " << &dick << " = &dick, ";
    cout << &harry << " = &harry\n";
}