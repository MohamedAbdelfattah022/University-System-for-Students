#include <iostream>
#include <string>
#include <stdlib.h>
#include "student.h"
using namespace std;

/*
TEAM MEMBERS:
Mohamed Abdelfattah    211001956
Saif eldin sameh Mostafa    211001048
Adham hossam eldin younis     211001699
Mohamed Abdelnaser Saied      211001159
*/


int main()
{
    int nStudent;
    string title;
    cout<<"Enter Number of students: ";
    cin>>nStudent;
    Cstudent s1,sObjects[nStudent];
    course c1, cObjects[nStudent];
    pgStudent p1, pgObjects[nStudent];

    //Student Data
    for(int i=0;i<nStudent;i++){
        cout<<"\nSTUDENT "<<(i+1)<<" DATA: \n";
        cout<<"\n-------------\n";
        sObjects[i].regStudent();
    }


    //Postgraduate Data
    for(int i=0;i<nStudent;i++){
        cout<<"\nPOSTGRAD STUDENT "<<(i+1)<<" DATA: \n";
        cout<<"\n-------------\n";
        pgObjects[i].regStudent();
        cout<<"Job Title: ";
        cin.ignore();
        getline(cin,title);
        pgObjects[i].setJob(title);
    }

    //Courses data
    for(int i=0;i<nStudent;i++){
        cout<<"\nCOURSE "<<(i+1)<<" DATA";
        cout<<"\n-------------\n";
        cObjects[i].addCourse();
    }

     //Student Inforamation
    for(int i=0;i<nStudent;i++){
        cout<<"\nSTUDENT"<<(i+1)<<" INFORMATION";
        cout<<"\n-------------\n";
        sObjects[i].getInfo();
    }

    //Postgraduate Inforamation
    for(int i=0;i<nStudent;i++){
        cout<<"\nPOSTGRAD STUDENT "<<(i+1)<<" INFORMATION";
        cout<<"\n-------------\n";
        pgObjects[i].getInfo();
        cout<<"\nJob Title: "<<pgObjects[i].getJob();
    }

    //Courses Information
    for(int i=0;i<nStudent;i++){
        cout<<"\nCOURSE "<<(i+1)<<" INFORMATION";
        cout<<"\n-------------\n";
        cObjects[i].getCourseInfo();
    }

    return 0;
}

