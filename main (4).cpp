// .برنامه ای بنویسید که ساعت از 0 الی 23 را دریافت کند و 0 الی 11 پیام AM و 12 الی 23 را PM چاپ کند.
#include <iostream>
using namespace std;
int main()
{
   int hour;
   cin>>hour;
   if(hour<=11&&hour>=0){
   cout<<"AM";
   }
   else if(hour<=23&&hour>=12){
   cout<<"PM";
   }
    else{
        cout<<"invalid";
    }
    return 0;
}
