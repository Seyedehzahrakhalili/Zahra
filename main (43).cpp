
#include<iostream>
using namespace std;
int m(int a,int b,char c){
    switch(c)
    {
        case '+':
        return a+b;
        break;
        
        case '-':
        return a-b;
        break;
        
        case '/':
        return a/b;
        break;
        
        case '*':
        return a*b;
        break;
        default:
        return 0;
    }
}

int main()
{
    int i,j,z;
    char k;
    cout<<"enter two num"<<endl;
    cin>>i>>j;
    cout<<"choose / + * -";
    cin>>k;
    z=m( i,j,k);
    cout<<z;
    return 0;
}