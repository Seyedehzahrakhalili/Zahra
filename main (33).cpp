#include<iostream>
using namespace std;
float m(float a,float b,char c){
    switch(c)
    {
        case '+':
        return a+b;
        break;
        
        case '-':
        return a-b;
        break;
        
        case '/':
        if(b==0){
        cout<<"error"<<endl;
        }
        else{
        return a/b;    
        }
        break;
        
        case '*':
        return a*b;
        break;
    }
    return 0;
}

int main()
{
    float i,j,z;
    char k;
    cout<<"enter two num"<<endl;
    cin>>i>>j;
    cout<<"choose / + * -"<<endl;
    cin>>k;
    z=m( i,j,k);
    cout<<z;
    return 0;
}

