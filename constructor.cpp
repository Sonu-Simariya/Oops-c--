#include<iostream>
using namespace std;
class sonu{
    private:
    int age;
    public:
    char grade;

    sonu(){
        cout<<"guess: "<<endl;
        }
    //parameterized constructor
    sonu(int age,char grade){
        // cout<<"the second name is "<<this<<endl;
        this -> age = age;
        this-> grade=grade;
    }
    int print(){
        cout<<"the age is "<<this->age<<endl;
        cout<<"the grade is"<<this->grade<<endl;
    }
    int getage(){
        return age;
    }
    int setage(int ss){
        age=ss;
        return age;
        }
};
int main(){ 
    sonu ss(20,'b');
    ss.print();

    sonu oo(ss);
    oo.print();






    // //object created by statically
    // sonu h(100);
    // cout<<"the name of sonu is"<<&h<<endl;
    // h.getage();
// constructor by dynamically
//object created by dyanamically
// sonu *son = new sonu();
    return 0;
}