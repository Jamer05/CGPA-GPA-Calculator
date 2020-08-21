#include "GpaComputing.h"
#include<iostream>
#include<string>
#include<stdio.h>
using namespace std;

double GpaComputing :: display()
{
    double gpa = 0;
    cout << "GPA Comupter System" << endl;
    gpa = compute(score(),getCreditUnit());
    //error the code above
}
int GpaComputing::score()
{
    int score[7];
    char grades [7];//gathering the grades of student based on index
    //obtaining grades inside the loop
    for (int i =0; i < 7; i++)
    {
        cout << "Enter your grades: ";
        cin >> grades[i];
    }
    cout<<endl;
    //obtaining score
    for(int j =0; j < 7; j++)
    {
        cout << "Enter your score: ";
        cin >> score[j];
    }
    /**< displaying the entered scores in a list */
    for (int i =0; i < 7; i++)
    {
        /**<
        using the function of equivalent it will convert the score into a number
         */
        score[i]=equivalent(grades[i]);
    }
    return score[7];
}
int GpaComputing :: getCreditUnit()
{
    int creditUint[7];
    for(int i =0; i < 7; i++)
    {
        cout << endl << "Enter your credit unit: ";
        cin >> creditUint[i];
    }
    return creditUint[7];
}
double GpaComputing:: compute(int totalScore[], double creditUnit[])
{
    /*
    * The final computation for getting the gpa result...
    * in working with array you have think very critically how to make it automatic
    * using loop. your code serves right and out the correct result but in reality there is one big job ahead
    * what is the array holds more than on thousand elements do that means we have to call it one by one using its index number as you did
    * so that's the issue.
    */
    float gpa = 0;
    float total = 0;
    int totalUnit = 0;
    float totalPoint = 0;

    for(int i=0; i < 7; i++)
    {
        cout << "The score points: " << totalScore[i];
        cout << "It's corresponding credit units: "<<creditUnit[i];
    }

    for (int i = 0; i < 7; i++)
    {
        totalPoint += score[i] * creditUnit[i];
        //error the code above
        totalUnit += creditUnit[i];
    }
    gpa = totalPoint/totalUnit;
    return gpa;
}
int GpaComputing ::equivalent(char gradePoint)
{
    int point =0;
    //    Equivalent of total score
    switch(gradePoint)
    {
    case 'A':
        point = 4;
        break;
    case 'B':
        point = 3;
        break;
    case 'C':
        point = 2;
        break;
    case 'D':
        point =1;
        break;
    case 'E':
        point =0;
        break;

    }
    return point;
}
