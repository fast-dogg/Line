#include <cstring>
#include "port.h"
#include "vintageport.h"

VintagePort::VintagePort() : Port()
{
    nickname = new char[1];
    nickname[0] = '\0';
    year = 0;
}

VintagePort::VintagePort(const char * br, int b, const char * nn, int y) : Port(br, "vintage",b)
{
    nickname = new char[strlen(nn) + 1];
    strcpy(nickname, br);
    year = y;
}

VintagePort::VintagePort(const VintagePort & vp) : Port(vp) 
{
    nickname = new char[strlen(vp.nickname) + 1];
    strcpy(nickname, vp.nickname);
    year = vp.year;    
}

VintagePort & VintagePort::operator=(const VintagePort & vp)
{
    if (this == &vp)
        return *this;
    Port::operator=(vp);
    delete [] nickname;
    nickname = new char[strlen(vp.nickname) + 1];
    strcpy(nickname, vp.nickname);
    year = vp.year;  
    return *this;
}

void VintagePort::Show() const
{
    Port::Show();
    cout << "nickname: " << nickname << endl;
    cout << "year: " << year << endl;
}

ostream & operator<<(ostream & os, const VintagePort & vp)
{
    os << (const Port &) vp;
    os << ", " << vp.nickname << ", " << vp.year;
    return os;
} 