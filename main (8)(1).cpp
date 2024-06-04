#include <iostream>
using namespace std;
int pow(int a,int b){
    if(b==0){
        return 1;
    }
    return a*pow(a,b-1);
}
int fibo(int n){
    if(n==1||n==2){
        return 1;
    }
    return fibo(n-2)+fibo(n-1);
}
int zarb(int a,int b){
    if(b==0){
        return 0;
    }
    return a+zarb(a,b-1);
}
int fact(int n){
    if(n==1){
        return 1;
    }
    return n*fact(n-1);
}
struct calculator{
    int lv,rv;
    char op;
void run()
    {
        cout<<"enter operator"<<endl;
        cin>>op;
        switch(op){

        case'^':
           cin>>lv>>rv;  
           cout<<pow(lv,rv);
           break;
        case'f':
           cin>>lv;  
           cout<<fibo(lv);
           break;
        case'*':
           cin>>lv>>rv;  
           cout<<zarb(lv,rv);
           break;
        case'!':
           cin>>lv;  
           cout<<fact(lv);
           break;
        default:
        cout<<"Bad!";
        }
    }
                };    
        int main()
        {
            calculator c;
            c.run();
            return 0;
        }
           
    