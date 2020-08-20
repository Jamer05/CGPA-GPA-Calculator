#include "CgpaComputing.h"
#include<iostream>

using namespace std;

double CgpaComputing::getScore()
{
    double sem_Score[3];

    for(int i =0; i < 3; i++)
    {
        cout << "Enter your Score :";
        cin >> sem_Score[i];
    }
    return sem_Score[3];
}
int CgpaComputing::getHours()
{
    int total_Hours[3];
    for(int i =0; i < 3; i++)
    {
        cout << "Enter total hours: ";
        cin >> total_Hours[i];
    }
    return total_Hours[3];
}
double CgpaComputing::totalScore(double score[], int hours[])
{
    float sc =0;
    int hrs=0;
    for (int i=0; i < 3; i++)
    {
        cout << "the score you have: "<<score[i];
        cout << "the total hours you have: "<< hours[i];
    }
    for(int j=0; j < 3; j++)
    {
        sc +=score[j];
        hrs+=hours[j];
    }
    float total = sc/hrs;
    return total;
}
