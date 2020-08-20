#ifndef CGPACOMPUTING_H
#define CGPACOMPUTING_H
#include "GpaComputing.h"

class CgpaComputing
{
public:
    double getScore();
    int getHours();
    double displayResult();
    void preface();
    double totalScore(double score[], int hours[]);
protected:

private:
};

#endif // CGPACOMPUTING_H
