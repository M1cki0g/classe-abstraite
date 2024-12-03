#include <iostream>

using namespace std;


class A{
int x;
int y;
public:
    virtual void afficher1(){
    cout<<"aff1_A"<<endl;
    }
    virtual void afficher2(){
    cout<<"aff2_A"<<endl;
    }
    void afficher3(){
    cout<<"aff3_A"<<endl;
    }
};

class B:public A{
public:

    void afficher1(){
    cout<<"aff1_B"<<endl;
    }
    void afficher2(){
    cout<<"aff2_B"<<endl;
    }
};

int main()
{
B b;
b.afficher1();
b.afficher2();
b.afficher3();

        return 0;
}
