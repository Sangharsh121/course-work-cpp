#include<iostream>
using namespace std;
class SharkTank{
	public:
		SharkTank(int n,char *P,int a[],int I[]){
			for(int i=0;i<n;i++){
			if(a[i]>=I[i]){
			cout<<i+1<<". Shark would invest in your company\n";	
			}
			else{
				cout<<i+1<<". Shark would not invest in your company\n";
			}
		}
	}
};
int main(){
	int n,p,a[6];
	int I[]={10000,15000,20000,25000,30000,35000};
	char P[10];
	cout<<"Name of product\n";
	cin>>P;
	cout<<"Prize of product\n";
	cin>>p;
	cout<<"MENU.\n1.Ashneer\n2.piyush bansal\n3.Anupam\n4.Namita\n5.Vinita\n6.Aman\n";
	cout<<"Enter the number of sharks you want\n";
	cin>>n;
	cout<<"Enter the money that you want from each shark\n";
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	 SharkTank obj(n,P,a,I);
	 return 0;
}
