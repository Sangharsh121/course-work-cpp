#include<iostream>
using namespace std;

class MUL 
{
   private :
   int mul,a,b,c;
   public :
   MUL(int x, int y )     // so here we pass the parameter and set the real and img to 0
   {
       a = x; // 0
       b = y;  // 0
   }

  friend void operator * (MUL &obj)
   {
    obj.c=obj.a*obj.b;
    
   }
   void showMUL()
   {
      cout<<"MULTIPLICATION OF NUM IS "<<c;
   }
};

int main()
{
      MUL W(5,6);
      operator *(W);
      W.showMUL();
      return 0;
}
