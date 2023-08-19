#include<iostream>
using namespace std;
class team1{
	int run1[10];
	public:
		getdata1(){
			int o=6;
			cout<<"\nEnter runs for team 1 only 1 over (-1 for no ball)\n";
			for(int i=0;i<o;i++){
				cout<<i+1<<" ball:";
				cin>>run1[i];
				if(run1[i]==-1){
					cout<<"Free Hit:";
					cin>>run1[i];
				}
			}
		}
		putdata1(int a){
				return run1[a];
			}
};
class team2{
	int run2[10];
	public:
		getdata2(){
			int o=6;
			cout<<"\nEnter runs for team 2 only 1 over (-1 for no ball)\n";
			for(int i=0;i<o;i++){
				cout<<i+1<<" ball:";
				cin>>run2[i];
				if(run2[i]==-1){
					cout<<"Free Hit:";
					cin>>run2[i];
				}
			}
		
		}
		putdata2(int a){
				return run2[a];
	}
};
class result:public team1,public team2{
	int total1=0,total2=0;
	public:
		void winner(){
			for(int i=0;i<6;i++){
				total1=total1+putdata1(i);
				total2=total2+putdata2(i);
			}
			
			cout<<"Team 1 Total Score:"<<total1<<endl;
			cout<<"Team 2 Total Score:"<<total2<<endl;
			if(total1>total2){
				cout<<"\nTeam 1 is Winner";
			}
			else
			cout<<"\nTeam 2 is Winnar";
		}
};
int main(){
	result R;
	R.getdata1();
	R.getdata2();
	R.winner();
	return 0;
}
