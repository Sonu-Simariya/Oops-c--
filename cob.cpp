#include<iostream>
using namespace std;
class mario{
    private:
    char name ;
    public:
    int level;
    char type;
    int print(){
        mario m;
        m.name='A';
        cout <<"the name is :"<<endl;
    }
    char getName(){
        return name;
    }
    int setName(char a){
        name=a;
        return name;
    }
};
int main(){
    mario m;
    m.level = 20;
    m.type = 'z';
    m.setName('s');
    cout<<"The name is "<<m.getName()<<endl;
    cout<<"The level is: "<<m.level<<endl;
    cout<<"The type is: "<<m.type<<endl;
    return 0;
}