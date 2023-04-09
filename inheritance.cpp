#include<iostream>
using namespace std;
class mario{
    public:
    char name;
    int level;
    char grade;
    int age;
    int setname(char name){
        this->name;
        return name;
    }
};
class count:public mario{
    public:
    int na;
};
int main(){
    count c;
    c.age=30;
    c.grade='Z';
    c.na=45;  
    cout<<"The name is "<<c.setname('b')<<endl;
    cout<<"The age is "<<c.age<<endl;
    cout<<"The grade is "<<c.grade<<endl;
    cout<<"The name is "<<c.na<<endl;
    return 0;
}
