// برنامه ای بنویسید که سه متغیر a1 الی a3 را از ورودی بگیرد:
#include<iostream>
using namespace std;
int main()
{
        int a,b,c,max,min,av;
        cout<<"please enter 3 integer"<<endl;
        cin>>a>>b>>c;
        av=((a+b+c)/3.0);
        cout<<"Their average is"<<av<<endl;
        max=a;
        if(b>max){
        max=b;    
        }
        if(c>max){
        max=c;   
        }
        cout<<"max is :"<<max<<endl;
        min=a;
        if(b<min){
        min=b;
        }
        if(c<min){
        min=c;    
        }
        cout<<"min is :"<<min<<endl;
        return 0;
}       