#include<iostream>
using namespace std;

class LectureDetails
{

    public:

    string lecturerName;
    string subjectName;
    string courseName;
    int courseNumber;

    LectureDetails(string lecturerName_, string subjectName_, string courseName_, int courseNumber_)
    {
        lecturerName = lecturerName_;
        subjectName = subjectName_;
        courseName = courseName_;
        courseNumber = courseNumber_;
    }

    void showDetails()
    {
        cout << "Lecturer Name is: " << lecturerName << endl;
        cout << "Subject is: " << subjectName << endl;
        cout << "Course Name is: " << courseName << endl;
        cout << "Course Number is: " << courseNumber << endl;
        
    }

};

int main()
{

    LectureDetails l1("ajaysir", "c", "bca", 001);
    LectureDetails l2("vijaysir", "cpp", "bsc", 002);
    LectureDetails l3("jaydeepsir", "c++", "mca", 003);
    LectureDetails l4("premsir", "python", "msc", 004);
    LectureDetails l5("ajaysir", "c", "bca", 051);


            cout <<"Lecturer 1" << endl;
            l1.showDetails();
            cout <<"Lecturer 2"<< endl;
            l2.showDetails();
            cout <<"Lecurer 3"<< endl;
            l3.showDetails();
            cout <<"Lecturer 4"<< endl;
            l4.showDetails();
            cout <<"Lecturer 5"<< endl;
            l5.showDetails();

    return 0;
}