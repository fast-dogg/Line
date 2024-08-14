#include <iostream>
#include <cstring>
#include "classic1.h"

Cd::Cd(const char * s1, const char * s2, int n, double x)
{
    performers = new char[std::strlen(s1) + 1];
    std::strcpy(performers, s1);
    label = new char[std::strlen(s2) + 1];
    std::strcpy(label, s2);
    selections = n;
    playtime = x;
}

Cd::Cd(const Cd & d)
{
    performers = new char[std::strlen(d.performers) + 1];
    std::strcpy(performers, d.performers);
    label = new char[std::strlen(d.label) + 1];
    std::strcpy(label, d.label);
    selections = d.selections;
    playtime = d.playtime;
}

Cd::Cd()
{
    performers = new char[1];
    performers[0] = '\0';
    label = new char[1];
    label[0] = '\0';
    selections = 0;
    playtime = 0.0;
}

Cd::~Cd()
{
    delete [] performers;
    delete [] label;
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
    performers = new char[std::strlen(d.performers) + 1];
    std::strcpy(performers, d.performers);
    label = new char[std::strlen(d.label) + 1];
    std::strcpy(label, d.label);
    selections = d.selections;
    playtime = d.playtime;
    return *this;
}

Classic::Classic(const char * s, const char * s1, const char * s2, int n, double x) : Cd(s1, s2, n, x)
{
    cdstr = new char[std::strlen(s) + 1];
    std::strcpy(cdstr, s);
}

Classic::Classic(const char * s, const Cd & d) : Cd(d)
{
    cdstr = new char[std::strlen(s) + 1];
    std::strcpy(cdstr, s);
}    

Classic::~Classic()
{
    delete [] cdstr;
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
    cdstr = new char[std::strlen(cs.cdstr) + 1];
    std::strcpy(cdstr, cdstr);
    return *this;
}