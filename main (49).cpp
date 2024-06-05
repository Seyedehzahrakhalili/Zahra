
#include<iostream>
using namespace std;
int main()
{
        int a,j;
        cout<<"Enter any num :";
        cin>>a;
        for(int i=1;i<2*a;i++){
        for(j=1;j<=2*a+i;j++){
        cout<<' ';  
        } 
        for(int i=1;i<=a;i++){
        cout<<'*';
        }
        cout<<endl;
        }
        for(int i=1;i<=5*a;i++){
        cout<<'*';   
        }
        cout<<endl;
        for(int i=1;i<(2*a);i++){
        for(int c=j-i;c>0;c--){
        cout<<' ';   
        }
        for(int i=1;i<=a;i++){
        cout<<'*';  
        }
        cout<<endl;
        }
        return 0;
}