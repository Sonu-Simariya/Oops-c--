#include<iostream>
using namespace std;
class sonu{
    public:
    char sex;
    int age;
    static char name;

    static char print(){
        return name;

    }

    ~sonu(){
        cout<<"call destructor"<<endl;
    }
};
char sonu::name='s';
int main(){
    cout<<"the name is "<<sonu::print()<<endl;
    return 0;

}



/* sahi h ye...
//static member function
//initializer_list
char sonu::name='s';
int main(){
    cout<<"the name is "<<sonu::name<<endl;
    //statically allocation
    sonu ss;
    ss.age=20;
    ss.sex='M';
    cout<<"the age is "<<ss.age<<endl;
    cout<<"the sex is "<<ss.sex<<endl;
    //dynamically allocation
    sonu *s=new sonu();
    delete s;
    return 0;
}  */