#include <iostream>
#include "tabtenn1.h"

int main(void)
{
    using std::cout;
    using std::endl;
    TableTennisPlayer player1("Chuck", "Blizzard", true);
    RatedPlayer rplayer1("Mallory", "Duck", true);
    player1.Name();
    rplayer1.Name();
    if(rplayer1.HasTable())
        cout << ": has a table.\n";
    else 
        cout << ": hasn't a table.\n";
    player1.Name();
    if(player1.HasTable())
        cout << ": has a table.\n";
    else 
        cout << ": hasn't a table.\n";
    cout << "Name: ";
    rplayer1.Name();
    cout << ";Rating: " << rplayer1.Rating() << endl;
    RatedPlayer rplayer2(1212,player1);
    cout << "Name: ";
    rplayer2.Name();
    cout << "; Rating: " << rplayer2.Rating() << endl;
    
    std::cin.get();
    return 0;
}