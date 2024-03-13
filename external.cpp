#include <iostream>
#include "support.h"

using namespace std;

double warming = 0.3;

void update(double dt);
void local();

int main()
{
    cout << "Global warming is " << warming << " drgrees.\n";
    update(0.1);
    cout << "Global warming is " << warming << " drgrees.\n";
    local();
    cout << "Global warming is " << warming << " drgrees.\n";
    cin.get();
    return 0;
}