#include <iostream>
using namespace std;
int main()
{
        int a,i;
        cout<<"Enter any num: ";
        cin>>a;
        if(a==1){
        cout<<"smallest prime number is 2";    
        }
        for(i=2;i<a;i++){
          if(a%i==0){
          cout<<"Not prime number";
          break;
          }
        }
        
        if(a==i){
        cout<<"yes,number is prime";    
        }
    return 0;
}
