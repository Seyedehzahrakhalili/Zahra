#include<iostream>
using namespace std;
int main()
{
        int a;
        cout<<"please enter a number"<<endl;
        cin>>a;
        for(int e=0;e<a;e++){
        for(int s=0;s<e+1;s++){    
        cout<<"*";
        }
        cout<<endl;
        }
        return 0;
}        