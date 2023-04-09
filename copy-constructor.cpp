#include<iostream>
using namespace std;
class sonu{
    private:
    int age;
    public :
    char grade;
    sonu (int age,char grade){
        this -> age=age;
        this ->grade=grade;
    }
    // paass by refrence(&) and pass by value().
    sonu(sonu& h){
        cout<<"Again"<<endl;
    }

    int print(){
        cout<<"the age is sonu "<<this->age<<endl;
        cout<<"the grade is sonu "<<this->grade<<endl;
    }
    int pr(){
        cout<<"the age is ramesh "<<this->age<<endl;
        cout<<"the grade is ramesh "<<this->grade<<endl;
    }
    int getAge(){
        return age;
    }
    int setAge (int e){
        e=age;
        return age;
    }
};
int main(){
    sonu ss(500,'A');
    ss.print();

    
    sonu m(ss);
    ss.print();

    sonu oo(ss);
    ss.pr();
    return 0;
}
