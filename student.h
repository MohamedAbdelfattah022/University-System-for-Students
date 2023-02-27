#include<string>
#include <stdlib.h>
using namespace std;
//Student Class
class Cstudent
{
    private:
string student_name;
int student_ID;
string email_username;
string student_major;
string email_password;
float student_grades[5];
float student_score;

    public:
        void set_name(string name);
        string get_name();

        void set_student_ID(int id);
        int get_student_ID();

        void set_username(string username);
        string get_username();

        void set_password(string pass);
        string get_password();

        void set_major(string major);
        string get_major();

        void set_grades(float grade[]);
        float get_grades();

        void set_score(float score);
        float get_score();

        void regStudent();
        void getInfo();
        void claculateGPA();

        Cstudent();
};//Student Class End


//Course
class course
{
private:
    string course_name;
    string course_code;
    float course_cost;

public:
    //Name
    void setname(string Name);
    string getname();
    //Code
    void setcode(string Code);
    string getcode();
    //Cost
    void setcost(float Cost);
    float getcost();
    //adding courses
    void addCourse();
    void getCourseInfo();
    course();
};
//Course class End


//Postgraduate students
class pgStudent: public Cstudent{
private:
    string jobTitle;
public:
    void setJob(string job);
    string getJob();
};
