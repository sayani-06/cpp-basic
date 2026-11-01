#include<iostream>
using namespace std;
class student{
    public:
    char name[10];
    int rollno;
    float marks;
    void input(){
        cout<<"Enter name";
        cin>>name;
        cout<<"Enter roll no";
        cin>>rollno;
        cout<<"Enter marks";
        cin>>marks;
    }
        void display(){
        cout<<"Name"<<name<<endl;
        cout<<"Roll No"<<rollno<<endl;
        cout<<"marks"<<marks<<endl;
    }
};
int main(){
    student s;
    s.input();
    s.display();
    return 0;
}
