#include "student.h"
#include <string>
#include <stdlib.h>
#include <iostream>
using namespace std;

//Student Class

//Constructor imblementation
Cstudent::Cstudent(){
student_name="NULL";
email_username="NULL";
email_password="NULL";
student_major="NULL";
student_ID=0;
for(int i=0;i<5;i++) student_grades[i]=0.0;
student_score=0;
}


//Name Setter&Getter
void Cstudent::set_name(string name){
    student_name=name;
}
string Cstudent:: get_name(){
return student_name;
}

//ID Setter&Getter
void Cstudent::set_student_ID(int id){
student_ID=id;
}
int Cstudent::get_student_ID(){
return student_ID;
}

//UserName Setter&Getter
void Cstudent::set_username(string username){
email_username=username;
}
string Cstudent::get_username(){
return email_username;
}

//Password Setter&Getter
void Cstudent::set_password(string pass){
email_password=pass;
}
string Cstudent::get_password(){
return email_password;
}

//Major Setter&Getter
void Cstudent::set_major(string major){
student_major=major;
}
string Cstudent::get_major(){
return student_major;
}

//Grades Setter&Getter
void Cstudent::set_grades(float grades[]){
    for(int i=0;i<5;i++) student_grades[i]=grades[i];
}

float Cstudent::get_grades(){
    cout<<"Grades: \n";
    for(int i=0;i<5;i++) cout<<(i+1)<<")"<<student_grades[i] <<"\n";

}

//Score Setter&Getter
void Cstudent::set_score(float score){
student_score=score;
}
float Cstudent::get_score(){
return student_score;
}

//GPA
void Cstudent::claculateGPA(){
float score,sum=0;
for (int i = 0; i < 5; i++)
    {sum += student_grades[i];}
score= (sum/100);
if (score>=4){score=4.0;}
set_score(score);
}

//Storing Students Data
void Cstudent::regStudent(){
    string name, username, pass, major;
    int id;
    float grades[5], score;
    //Name
    cout<<"Name: ";
    cin.ignore();
    getline(cin,name);
    set_name(name);

    //UserName
    cout<<"\nUserName: ";
    getline(cin,username);
    set_username(username);

    //Password
    cout<<"\nPassword: ";
    getline(cin,pass);
    set_password(pass);

    //Major
    cout<<"\nMajor: ";
    getline(cin,major);
    set_major(major);

    //ID
    cout<<"\nId: ";
    cin>>id;
    set_student_ID(id);

    //Grades
    cout<<"\nEnter 5 Grades: ";
    for(int i=0;i<=4;i++) cin>>grades[i];
    set_grades(grades);

    //GPA
    claculateGPA();
}

//Printing student data
void Cstudent::getInfo(){
    cout<<"\nName: "<<get_name()<<endl;
    cout<<"ID: "<<get_student_ID()<<endl;
    cout<<"Username: "<<get_username()<<endl;
    cout<<"Password: "<<get_password()<<endl;
    cout<<"Major: "<<get_major()<<endl;
    get_grades();
    cout<<"GPA: "<<get_score()<<endl;
}//Student Class End


//================================================================
    //Course Class
    //Name
    void course::setname(string Name)
    {
        course_name = Name;
    }
    string course::getname()
    {
        return course_name;
    }
    //Code
    void course::setcode(string Code)
    {
        course_code = Code;
    }
    string course::getcode()
    {
        return course_code;
    }
    //Cost
    void course::setcost(float Cost)
    {
        course_cost = Cost;
    }
    float course::getcost()
    {
        return course_cost;
    }

    void course::addCourse() {
        string name, code;
        cout << "Enter course name: ";
        cin.ignore();
        getline(cin,name);
        setname(name);

        cout << "Enter course code: ";
        cin.ignore();
        getline(cin,code);
        setcode(code);

    }

    void course::getCourseInfo() {
        cout << "Course Name: " << getname()<<endl;
        cout << "Course Code: " << getcode()<< endl;
        cout << "Course Cost: " << getcost()<<" $" << endl;

    }

    course::course() {
        course_cost = 3000.0;
    }; //Course Class END

//==========================================
//postgraduate students Class
void pgStudent::setJob(string job){
    jobTitle=job;
}

string pgStudent::getJob(){
return jobTitle;
}
