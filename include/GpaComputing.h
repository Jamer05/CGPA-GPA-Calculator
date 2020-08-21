#ifndef GPACOMPUTING_H
#define GPACOMPUTING_H
#include<string>
using namespace std;
class GpaComputing
{
    public:
       int score();
       int getCreditUnit();
       double compute(int totalScore[],double creditUnit[]);
       int equivalent(char gradePoint);  //for entering a score
       double display();
};

#endif // GPACOMPUTING_H
