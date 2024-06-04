#include<iostream>
using namespace std;
int f(int a){
    if(a<10){
        return a;
    }
    else{
     cout<<a%10;
     return f(a/10);
    }
}
int main()
{
    int i;
    cout<<"enter a num";
    cin>>i;
    cout<<f(i);
    return 0;
}