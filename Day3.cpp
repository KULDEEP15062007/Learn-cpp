#include<iostream>

using namespace std;

int main (){
    
    int num1, num2;
    cout<<"enter the value of num1: \n";
    
    //   |<<<<<<<<<<| is caller insertion operator
 
 
    cin>>num1;
    
    
    //  |>>>>>>>>>|  is called extraction oprator
    cout<<"enter the value of num2: \n";
    
    
    //   |<<<<<<<<<<| is caller insertion operator
 
    cin>>num2;
    
    
       //  |>>>>>>>>>|  is called extraction      oprator
    
    cout<< "sum of the num1 or num2:\n" 
    <<num1+num2 << "\n";

    
    cout<< "product of the num1 or num2: \n"<<num1*num2;
    
/* cout mtlb hota h print krna or  result dena 

    
cin mtlb hota h ki user se pucha jaye
Ex-: yha hum chahte h ki user se num1 or num2 pucha jaye isliye humne cin use kiya */
    return 0;
}
