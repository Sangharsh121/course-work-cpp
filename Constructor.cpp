#include<iostream>
#include<string.h>
using namespace std;
class student{
	char name[20],grade;
	int marks[5];
	int n,total=0;
	float percent;
	public:
		student(){
		cout<<"Enter the name of student : ";
		cin>>name;
		cout<<"Enter the number of subject : ";
		cin>>n;
		cout<<"Enter the marks of subject\n";
		for(int i=0;i<n;i++){
			cin>>marks[i];
			total+=marks[i];
		}	
	  		percent=total/float(n);
	  	if(percent<35&&percent>=0){
	  		grade='D';
		  }
		 else if(percent<65&&percent>=35){
	  		grade='C';
		  }
		  else if(percent<85&&percent>=65){
	  		grade='B';
		  }
		  if(percent>=85){
	  		grade='A';
		  }
		  }
		student(char *name2,int n2,int m1=0,int m2=0,int m3=0,int m4=0,int m5=0){
			strcpy(name,name2);
		total=m1+m2+m3+m4+m5;
		percent=total/float(n2);
	  	if(percent<35&&percent>=0){
	  		grade='D';
		  }
		 else if(percent<65&&percent>=35){
	  		grade='C';
		  }
		  else if(percent<85&&percent>=65){
	  		grade='B';
		  }
		  else if(percent>=85){
	  		grade='A';
		  }
}
		  void display(){
		  	cout<<"Name :"<<name<<endl;
		  	cout<<"Total marks ="<<total<<endl;
		  	cout<<"percentage ="<<percent<<endl;
		  	cout<<"Grade ="<<grade<<endl;
		  }
};
int main(){
	student w;
	w.display();
	student x;
	x.display();
	student y("Sangharsh",4,67,76,89,98);
	y.display();
	student z("Sumit",3,56,75,54);
	z.display();
	return 0;
}
