#include<iostream>
 using namespace std;
 int main() 
 {
        int a,b;
        cin >>a>>b;
        if(a>b){
        cout<<a<<">"<<b<<endl;
        }
        if(a<b){
        cout<<a<<"<"<<b<<endl;
        }
        else{
        cout<<b<<"="<<a<<endl;
        }
        if(a>0&&b>0){
        cout<<a<<"&"<<b<<">0"<<endl;
        }
        if(a<0&b<0){
        cout<<a<<"&"<<b<<"<0"<<endl;
        }
        if(a==0&&b==0){
        cout<<a<<"&"<<b<<"=0"<<endl;
        }
        if(!a==0&&!b==0){   //چون صفر نه مثبته ن منفی♡
        if(a>0){
        cout<<"number1 is +"<<endl;
        }
        else{
        cout<<"number1 is -"<<endl;
        }
        if(b>0){
        cout<<"number2 is +"<<endl;
        }
        else{
        cout<<"number2 is -";  
        }
        }
        return 0;
 }
