#include<iostream>
using namespace std;
class sonu{
    public:
    void fuc(){
        cout<<"m hu"<<endl;
    }
    
};
class lalit:public sonu{
    public:
    void func(){
        cout<<"this is man "<<endl;
    }
};
class lsss:public sonu{
    public:
    void fuv(){
        cout<<"aj phit"<<endl;
    }
};
int main(){
    lsss s;
    s.fuc();
    s.fuv();

    sonu l;
    l.fuc();

    lalit p;
    p.fuc();
    p.func();
    return 0;
}