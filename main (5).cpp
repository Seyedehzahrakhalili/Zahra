// رنامه ای بنویسید که یک عدد سه رقمی بگیرید و برعکس آن را چاپ کنید مثال 124 تبدیل می شود به 421
#include <iostream>
using namespace std;
int main()
{
        int a,b,c;
        cin>>a;
        if(99<a&&a<1000){
        b=(a/10)%10;
        c=(a%10);
        a=a/100;
        cout<<c<<b<<a;
        }
         else{
         cout<<"error";   
         }
        return 0;
}