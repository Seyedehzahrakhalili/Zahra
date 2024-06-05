
#include <iostream>
using namespace std;
int main()
{
        int a,max,min,c;
        cout<<"How many numbers do you enter?"<<endl;
        cin>>a;
        cout<<"please enter first number"<<endl;
        cin>>c;
        max=c;
        min=c;
        for(int i=1;i<a;i++){
        cout<<"enter number"<< (i+1)<<endl;
        cin>>c;
        if(c>max){
        max=c;
        }
        if(c<min){
        min=c;
        }
        }
        cout<<"max is :"<<max<<endl;
        cout<<"min is:"<<min;
        return 0;
}
