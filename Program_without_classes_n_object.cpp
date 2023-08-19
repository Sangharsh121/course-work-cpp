#include<iostream>
using namespace std;
void swap();
void factorial();
void fibonacci();

int main(){
    int choice;
    cout<<"1.Swapping of two numbers"<<endl;
    cout<<"2.factorial of a number"<<endl;
    cout<<"3.fibonacci series"<<endl;
    cin>>choice;
    while(choice!=0){
    switch(choice){
        case 1:swap();
        break;
        case 2:factorial();
        break;
        case 3:fibonacci();
        break;
        default:cout<<"enter a proper number"<<endl;
    }
    cout<<"\n\nEnter choice(0 for exit)"<<endl;
    cin>>choice;
    }
    return 0;
}

void swap(){
    int a,b,temp;
    cout<<"Enter two numbers\n";
    cin>>a>>b;
    cout<<"number before swap a="<<a<<" b="<<b<<endl;
    temp=a;
    a=b;
    b=temp;
    cout<<"number after swap a="<<a<<" b="<<b;
}
void factorial(){
    int n,i,fact=1;
    cout<<"Enter a number:";
    cin>>n;
    for(i=1;i<=n;i++){
     fact=fact*i;
    }
    cout<<"factorial="<<fact;
}
void fibonacci(){
    int a=0,b=1,c,n,i;
    cout<<"Enter length of fibonacci series:";
    cin>>n;
    if(n>=1){
        cout<<a<<" ";
    }
    if(n>=2){
        cout<<b<<" ";
    }
    for(i=3;i<=n;i++){
        c=a+b;
        a=b;
        b=c;
        cout<<c<<" ";
    }
}
