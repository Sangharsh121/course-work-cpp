#include<iostream>
using namespace std;
class p2;
class p1{
    int a,c;
    char d;
    public:
    void s1(){
        cout<<"Enter a complex number A:";
        cin>>a>>c>>d;   // a= real number, c=integer with sign, d= is for only i;
    }
    friend void sum(p1 x , p2 y);
};
class p2{
    int m,o;
    char p;
    public:
    void s2(){
        cout<<"Enter a complex number B:";
        cin>>m>>o>>p;
        }
    friend void sum(p1 x , p2 y);
};
void sum(p1 x , p2 y){
        int sc=x.c+y.o;
        if(sc>0){
            cout<<"sum="<<(x.a+y.m)<<"+"<<sc<<"i";
        }
        else{
            cout<<"sum="<<(x.a+y.m)<<sc<<"i";
        }
}
int main(){
    p1 m;
    p2 n;
    m.s1();
    n.s2();
    sum(m,n);
    return 0;
}
