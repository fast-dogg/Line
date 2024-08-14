#ifndef CLASSIC_H_
#define CLASSIC_H_

//base class
class Cd 
{
private:
    char performers[50];
    char label[20];
    int selections;
    double playtime;
public:
    Cd(const char * s1, const char * s2, int n, double x);
    Cd(const Cd & d);
    Cd();
    ~Cd();
    virtual void Report() const;
    Cd & operator=(const Cd & d);    
};

class Classic : public Cd
{
private:
    char cdstr[50];
public:
    Classic() : Cd() {cdstr[0] = '\0';}
    Classic(const char * s, const char * s1, const char * s2, int n, double x);
    Classic(const char * s, const Cd & d);
    ~Classic();
    virtual void Report() const;
    Classic & operator=(const Classic & cs);

};

#endif