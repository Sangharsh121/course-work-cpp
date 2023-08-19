#include<iostream>
using namespace std;
class person{
    int n;
    public:
    void prime();
    void palandrome();
};
void person :: prime(){
    cout<<"Enter a number:";
    cin>>n;
    int i,flag=0;
    for(i=2;i<n/2;i++){
        if(n%i==0){
            cout<<n<<" is not a prime number"<<endl;
            flag=flag+1;
            break;
        }
    }
    if(flag==0){
    cout<<n<<" is a prime number"<<endl;
}
} 

void person ::palandrome(){
    int num,rev=0;
    cout<<"Enter a number:";
    cin>>n;
    num=n;
    do{
        rev=(rev*10)+(num%10);
        num=num/10;
    }while(num!=0);
    if(n==rev){
        cout<<n<<" is a palendrome"<<endl;
    }
    else{
        cout<<n<<" is not a palendrome"<<endl;
    }
}

int main(){
    person p;
    int choice;
    cout<<"1.number is prime or not"<<endl;
    cout<<"2.number is palendrome or not"<<endl;
    cout<<"0 to exit"<<endl;
    cin>>choice;
    while(choice!=0){
    switch(choice){
        case 1:p.prime();
        break;
        case 2:p.palandrome();
        break;
        default:cout<<"enter a proper number"<<endl;
    }
    cout<<"\nEnter the choice(0 for exit):";
    cin>>choice;
    }
    return 0;
}
