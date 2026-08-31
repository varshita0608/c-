#include<iostream>
using namespace std;
//wap that has 5 objects of class student and display their details along with attributes
class student{
    public:
    string name;
    int rollno;
    int age;
    void getdata(string n,int r,int a){
        name=n;
        rollno=r;
        age=a;
    }
    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Roll No: "<<rollno<<endl;
        cout<<"Age: "<<age<<endl;
    }
};
int main(){
    student s[5];
    for(int i=0;i<5;i++){
        string n;
        int r,a;
        cout<<"Enter name, roll no and age of student "<<i+1<<": ";
        cin>>n>>r>>a;
        s[i].getdata(n,r,a);
    }
    cout<<"\nDetails of students:\n";
    for(int i=0;i<5;i++){
        cout<<"\nStudent "<<i+1<<":\n";
        s[i].display();
    }
    return 0;
}