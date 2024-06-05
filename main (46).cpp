

#include<iostream>
using namespace std;
int main()
{
        float a,b,c,d,e,av,max,min;
        cout<<"please enter 5 integer"<<endl;
        cin>>a>>b>>c>>d>>e;
        av=((a+b+c+d+e)/5);
        cout<<"Their average is"<<av<<endl;
        max=a;
        if(b>max){
        max=b;    
        }
        if(c>max){
        max=c;   
        }
        if(d>max){
        max=d;   
        }
        if(e>max){
        max=e;   
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