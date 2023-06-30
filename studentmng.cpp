#include <iostream>
#include <string>
using namespace std;
class student
{
public:
    string roll[20],reg[20],name[20],gen[20],add[20],cr[20];
    int n;
    int total=0;
    
    string age[20];
    void menu();
    void getdata();
    void showdata();
    void search();
    void update();
    void deleterecord();
};
void student::menu()
{
    int choice;
    char X;
 while(true)
 {
    cout << "\t\t\t----------------------------------------\n";
    cout << "\t\t\t-----STUDENT MANAGEMENT SYSTEM----------\n";
    cout << "\t\t\t----------------------------------------\n";
    cout << "\t\t\t 1.ADD NEW STUDENT\n";
    cout << "\t\t\t 2.SHOW DATA\n";
    cout << "\t\t\t 3.SEARCH DATA\n";
    cout << "\t\t\t 4.UPDATE DATA\n";
    cout << "\t\t\t 5.DELETE DATA\n";
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
        getdata();
        break;
    case 2:
        showdata();
        break;
    case 3:
        search();
        break;
    case 4:
        update();
        break;
    case 5:
        deleterecord();
        break;
    case 6:
        exit(0);
        break;

    default:
        cout << "Invalid Choice";
        break;
    }
 }
}
void student::getdata()
{
    cout << "Enter the number of students: ";
    cin >> n;
    if(total=0)
    {
        
    for (int i = 0; i < n; i++)
    {
    cout << "Enter Roll no\n";
    cin >> roll[i];
    cout << "Enter Name\n";
    cin >> name[i];
    cout << "Enter Registration no\n";
    cin >> reg[i];
    cout << "Enter Age\n";
    cin >> age[i];
    cout << "Enter Gender\n";
    cin >> gen[i];
    cout << "Enter Course details\n";
    cin >> cr[i];
    cout << "Enter Address\n";
    cin >> add[i];
    }
    }
    else
    {
        
        for (int i = total; i <(total+n); i++)
        {
            cout << "Enter Roll no\n";
            cin >> roll[i];
            cout << "Enter Name\n";
            cin >> name[i];
            cout << "Enter Registration no\n";
            cin >> reg[i];
            cout << "Enter Age\n";
            cin >> age[1];
            cout << "Enter Gender\n";
            cin >> gen[i];
            cout << "Enter Course details\n";
            cin >> cr[i];
            cout << "Enter Address\n";
            cin >> add[i];
        }
        total=total+n;
    }
}
void student::showdata()
{
    if(total==0)
    {
        cout<<"NO data is entered\n";
    }   
    else
    {
        for (int i = 0; i < total; i++)
        {
            cout << "\t\t\tSTUDENT DETAILS"<<i+1<<endl;
            cout << "\t\t\tSTUDENT ROLL NUMBER" << roll[i] << endl;
            cout << "\t\t\tSTUDENT NAME" << name[i] << endl;
            cout << "\t\t\tREGISTRATION NUMBER" << reg[i] << endl;
            cout << "\t\t\tSTUDENT AGE" << age[i] << endl;
            cout << "\t\t\tGENDER" << gen[i] << endl;
            cout << "\t\t\tCOURSE" << cr[i]<<endl;
            cout << "\t\t\tADDRESS" << add[i]<<endl;
        }
    }
}
void student::search()
{
    
    if(total==0)
    {
        cout<<"NO data is entered\n";
    }   
    else
    {
        string rollno;
        cout<<"Enter Roll number of student which roll no you want to search\n";
        cin>>rollno;
        for (int i = 0; i < total; i++)
        {
            if(rollno==roll[i])
            {
            cout << "\t\t\tSTUDENT DETAILS"<<i+1<<endl;
            cout << "\t\t\tSTUDENT ROLL NUMBER" << roll[i] << endl;
            cout << "\t\t\tSTUDENT NAME" << name[i] << endl;
            cout << "\t\t\tREGISTRATION NUMBER" << reg[i] << endl;
            cout << "\t\t\tSTUDENT AGE" << age[i] << endl;
            cout << "\t\t\tGENDER" << gen[i] << endl;
            cout << "\t\t\tCOURSE" << cr[i]<<endl;
            cout << "\t\t\tADDRESS" << add[i]<<endl;
            }

        }
    }
}
void student::update()
{
    
    string rollno;
    cout<<"Enter Roll number of student which roll no you want to search\n";
    cin>>rollno;
    
    if(total==0)
    {
        cout<<"NO data is entered\n";
    }   
    else
    {
        for (int i = 0; i < total; i++)
        {
            if(rollno==roll[i])
            {
                cout<<"previous data\n";
                cout << "\t\t\tSTUDENT DETAILS"<<i+1<<endl;
                cout << "\t\t\tSTUDENT ROLL NUMBER" << roll[i] << endl;
                cout << "\t\t\tSTUDENT NAME" << name[i] << endl;
                cout << "\t\t\tREGISTRATION NUMBER" << reg[i] << endl;
                cout << "\t\t\tSTUDENT AGE" << age[i] << endl;
                cout << "\t\t\tGENDER" << gen[i] << endl;
                cout << "\t\t\tCOURSE" << cr[i]<<endl;
                cout << "\t\t\tADDRESS" << add[i]<<endl;
                cout<<"enter new data\n";
                cout << "Enter Roll no\n";
                cin >> roll[i];
                cout << "Enter Name\n";
                cin >> name[i];
                cout << "Enter Registration no\n";
                cin >> reg[i];
                cout << "Enter Age\n";
                cin >> age[1];
                cout << "Enter Gender\n";
                cin >> gen[i];
                cout << "Enter Course details\n";
                cin >> cr[i];
                cout << "Enter Address\n";
                cin >> add[i];
            }
        }

    }
    
}
void student::deleterecord()
{
    
    if(total==0)
    {
        cout<<"NO data is entered\n";
    }   
    else
    {
        int a;
        cout<<"Press 1 to delete full record\n";
        cout<<"press 2 to delete specific record\n";
        cin>>a;
        if(a==1)
        {
            total=0;
            cout<<"All record is deleted\n";
        }
        else if(a==2)
        {
            string rollno;
            cout<<"Enter Roll number of student which roll no you want to delete\n";
            cin>>rollno;
            for (int i = 0; i < total; i++)
            {
                if(rollno==roll[i])
                {
                    for (int j = 0; j <total; j++)
                    {
                        roll[j]=roll[j+1];
                        reg[j]=reg[j+1];
                        name[j]=name[j+1];
                        age[j]=age[j+1];
                        gen[j]=gen[j+1];
                        cr[j]=cr[j+1];
                        add[j]=add[j+1];

                    }
                    total--;
                    cout<<"Your required record is deleted..||\n";
                }
            }
        }

    } 
}
int main()
{

    student s1;
    s1.menu();
    
}
