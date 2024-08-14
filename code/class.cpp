#include <iostream>
#include <cstring>
#include "classic.h"

Cd::Cd(const char * s1, const char * s2, int n, double x)
{
    std::strncpy(performers, s1,50);
    performers[49] = '\0';
    std::strncpy(label, s2, 20);
    label[19] = '\0';
    selections = n;
    playtime = x;
}

Cd::Cd(const Cd & d)
{
   std::strncpy(performers, d.performers, 50);
    performers[49] = '\0';
   std::strncpy(label, d.label, 20);
    label[19] = '\0';
    selections = d.selections;
    playtime = d.playtime;
}

Cd::Cd()
{
    performers[0] = '\0';
    label[0] = '\0';
    selections = 0;
    playtime = 0.0;
}

Cd::~Cd()
{
}

void Cd::Report() const
{
    std::cout << "Performers: " << performers << std::endl;
    std::cout << "Label: " << label << std::endl;
    std::cout << "Selections: " << selections << std::endl;
    std::cout << "Playtime: " << playtime << std::endl;
}

Cd & Cd::operator=(const Cd & d)
{
    if(this == &d)
        return *this;
    std::strncpy(performers, d.performers, 50);
    performers[49] = '\0';
    std::strncpy(label, d.label, 20);
    label[19] = '\0';
    selections = d.selections;
    playtime = d.playtime;
    return *this;
}

Classic::Classic(const char * s, const char * s1, const char * s2, int n, double x) : Cd(s1, s2, n, x)
{
    strncpy(cdstr, s, 50);
    cdstr[49] = '\0';
}

Classic::Classic(const char * s, const Cd & d) : Cd(d)
{
    strncpy(cdstr, s, 50);
    cdstr[49] = '\0';
}    

Classic::~Classic()
{
}

void Classic::Report() const
{
    Cd::Report();
    std::cout << "Major article in the CD is: : " << cdstr << std::endl;
}

Classic & Classic::operator=(const Classic & cs)
{
    if(this == &cs)
        return *this;
    Cd::operator=(cs);
    std::strncpy(cdstr, cs.cdstr, 50);
    cdstr[49] = '\0';
    return *this;
}