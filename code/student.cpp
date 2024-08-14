#include "studentc.h"
using std::ostream;
using std::endl;
using std::istream;
using std::string;

//public methos
double Student::Average() const
{
    if (scores.size() > 0)
        return scores.sum() / scores.size();
    else 
        return 0; 
}
const std::string & Student::Name() const
{
    return name;
}
double & Student::operator[](int i)
{
    return scores[i];
}
double Student::operator[](int i) const
{
    return scores[i];
}

//private method
std::ostream & Student::arr_out(std::ostream & os) const
{
    int i;
    int lim = scores.size();
    if(lim > 0)
    {
        for(i = 0; i <lim; i++)
        {
            os << scores[i] << " ";
            if(i % 5 == 4)
                os << endl;
        }
        if(i % 5 == 4)
            os << endl;
    }
    else 
        os << "empty array";
}

//friends
//use string version of  operator>>()
std::istream & operator>>(std::istream & is, Student & stu)
{
    is >> stu.name;
    return is;
}
std::istream & getline(std::istream & is, Student & stu)
{
    getline(is, stu.name);
    return is;
}

//use string version of  operator>>()
std::ostream & operator<<(std::ostream & os, Student & stu)
{
    os << "Scores for " << stu.name << ":\n";
    stu.arr_out(os);
    return os;
}
