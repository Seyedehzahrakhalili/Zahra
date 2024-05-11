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
