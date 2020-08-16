#include<stdio.h>
#include<iostream>

using namespace std;
int select;

void course_drop()
{
    char name,id,email,program,address,department; //these variable has only character value
    int phone_number,select; //this variable has int value
    char course;
    string a; // need a string to calculate digit of phone number
    cout<<"\"Welcome for registration\"";
    cout<<"Student name:";
    cin>>name;
    cout<<"Student id number:";
    cin>>id;
    cout<<endl;
    cout<<"Which course u want to drop:";
    cin>>course;
    cout<<"Enter the student address";
    cin>>address;
    cout<<endl;
    cout<<"Student phone number:";
    cin>>phone_number;
    if(a[phone_number]!=11)
    {
        cout<<"Invalid number";
    }
    else
    {
        cout<<"Enter the email number:";
        cin>>email;
        cout<<endl;
        cout<<"Enter the program:";
        cin>>program;
        cout<<endl;
        cout<<"Enter the name of department:";
        cin>>department;
    }
    cout<<"Thank you for registration";
}
void course_add()
{
    char name,course,id,email,program,address,department; //these variable has only character value
    int phone_number,select; //this variable has int value
    string a; // need a string to calculate digit of phone number
    cout<<"\"Welcome for registration\""<<endl;
    cout<<"Student name:";
    cin>>name;
    cout<<endl;
    cout<<"Student id number:";
    cin>>id;
    cout<<endl;
    cout<<"Which course u want to add:";
    cin>>course;
    cout<<endl;
    cout<<"Enter the student address";
    cin>>address;
    cout<<endl;
    cout<<"Student phone number:";
    cin>>phone_number;
    if(a[phone_number]!=11)
    {
        cout<<"Invalid number";
    }
    else
    {
        cout<<"Enter the email number:";
        cin>>email;
        cout<<endl;
        cout<<"Enter the program:";
        cin>>program;
        cout<<endl;
        cout<<"Enter the name of department:";
        cin>>department;
    }
    cout<<"Thank you for registration";
}
int main()
{
    float cgpa; //cgpa can be in point
    cout<<"Enter the result of mid term:";
    cin>>cgpa;
    if(cgpa>=3.50)
    {
        cout<<"If you want to add course choice 1 else select 0:";
        cin>>select;
        if(select==1)
        {
            course_add();
        }
        else if(select==0)
        {
            cout<<"continue these course to final";
        }
        else
        {
            cout<<"Invalid";
        }
    }
    else if(cgpa<3.50 && cgpa>2.50)
    {
        cout<<"You can not allow for adding course;";
    }
    else if(cgpa<2.50)
    {
        cout<<"You can drop your course."<<endl;
        cout<<"If you want drop the course select 1 else select 0:";
        cin>>select;
        if(select==1)
        {
            course_drop();
        }
        else if(select==0)
        {
            cout<<"you can continue your course";
        }
    }
    else
    {
        cout<<"you are failed";
    }

    return 0;
}
