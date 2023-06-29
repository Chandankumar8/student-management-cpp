#include <iostream>
#include <string>
using namespace std;
class student
{
public:
    int rollno, n;
    string regno;

    char name[20];
    int age;
    char gender;
    string course;
    string add;

    void menu();
    void getdata();
    void showdata();
    void getview();
};
void student::menu()
{
    int choice;
    char X;

    cout << "\t\t\t----------------------------------------\n";
    cout << "\t\t\t-----STUDENT MANAGEMENT SYSTEM----------\n";
    cout << "\t\t\t----------------------------------------\n";
    cout << "\t\t\t 1.ADD NEW STUDENT\n";
    cout << "\t\t\t 2.STUDENT LOGIN\n";
    cout << "\t\t\t 3.FACULITY LOGIN\n";
    cout << "\t\t\t 4.DELETE OLD DATA\n";
    cout << "\t\t\t 5.ADMIN VIEW\n";
    cout << "\t\t\t 6.EXIT\n";
    cout << "enter your choice :";
    cin >> choice;
    if (choice > 7)
    {
        cout << "wrong entry";
    }

    switch (choice)
    {
    case 1:
        cout << "Enter the number of students: ";
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            getdata();
        }
        break;
    case 2:
        showdata();
        break;
    case 3:
        getview();
        break;

    default:
        cout << "Invalid Choice";
        break;
    }
}
void student::getdata()
{

    cout << "Enter Roll no\n";
    cin >> rollno;
    cout << "Enter Name\n";
    cin >> name;
    cout << "Enter Registration no\n";
    cin >> regno;
    cout << "Enter Age\n";
    cin >> age;
    cout << "Enter Gender\n";
    cin >> gender;
    cout << "Enter Course details\n";
    cin >> course;
    cout << "Enter Address\n";
    cin >> add;
}
void student::showdata()
{
    cout << "\t\t\tSTUDENT DETAILS\n";
    cout << "\t\t\tSTUDENT ROLL NUMBER" << rollno << endl;
    cout << "\t\t\tSTUDENT NAME" << name << endl;
    cout << "\t\t\tREGISTRATION NUMBER" << regno << endl;
    cout << "\t\t\tSTUDENT AGE" << age << endl;
    cout << "\t\t\tGENDER" << gender << endl;
    cout << "\t\t\tCOURSE" << course;
}
void student::getview()
{
    char subcode[7];
    int option;
    cout << "Enter your subject code: ";
    cin >> subcode;
    string code1 = "CSE1001", code2 = "CSE1002",
           mark = "";

    int check = 0;

    cout << "\nAvailable operations: \n1. Add data "
            "about marks\n"
         << "2. View data\nEnter option: ";
    cin >> option;
    if (option == 1)
    {
        cout << "Warning! You would need to add mark"
             << "details for all the students!" << endl;
        for (int i = 0; i < n; i++)
        {
            // fstream file("Example.txt");
            cout << "Enter the mark of student#"
                 << i << " : ";
            cin >> mark;
        }
    }
}

int main()
{

    student s1;
    s1.menu();
    // s1.getdata();
    // s2.getdata();
    // s1.showdata();*
}
