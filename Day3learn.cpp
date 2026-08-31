#include<iostream>
using namespace std;

int c = 30;

int main(){
    int a, b, c;
    cout<<"Enter the value of a:"<<endl;
    cin>>a;
    cout<<"Enter the value of b:\n";
    
   cin>>b;
   c = a+b;
   cout<<"the sum is:"  <<c<<"\n" ;
   cout<<"the global c is:"  <<::c<<"\n";
   
   double i=3.14;
   float d = 3.14f;
   long double e = 3.14l;
   cout<<"the value of d:"  <<  d<<"\n"; 
  cout<<"the value of e:"   <<  e<<"\n";
    
  cout<<"the size of 3.14f:"<<sizeof(3.14f)<<endl;
  cout<<"the size of 3.14l:"<<sizeof(3.14l)<<"\n"; 
  cout<<"the size of 3.14:"<<sizeof(3.14)<<"\n";






  
  //nxt topic     //
  
  //refrence variables//
  
  float x = 15.6;
  float & y = x;
  float & z = y;
   cout<<x<<endl;
   cout<<y<<endl;
   cout<<z<<endl;




  
  //typecasting//
  //mtlb ek variables ko dusre variables m change krna
  
  int h = 45;
  cout<<"the value of a : "<<(float)h<<endl;  
  
  cout<<"the value of a : "<<float(h)<<endl;  
  
  cout<<"the size of a :  "<< sizeof h<<endl;
  
  
 float I = 99.99;
 cout<<"the value of b :"<< (int)I<<endl;
 
 cout<<"the value of b :"<< int(I)<<endl;
 
 
   cout<<"the expression is : "<<I+h<<endl;
   cout<<"the expression is :"<< (int)I+h<<endl;
   cout<<"the expression is :"<< int(I)+ float(h)<<endl;
 
   cout<<"the expression is :"<< int(I)+ (float)h;
   
    return 0;
}
