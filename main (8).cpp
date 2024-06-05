
#include <iostream>
using namespace std;
int main()
{
        int x1,y1,x2,y2,a,b;
        cout<<"Please enter x1 & y1"<<endl;
        cin>>x1>>y1;
        cout<<"Please enter x2 & y2"<<endl;
        cin>>x2>>y2;
        a=(y2-y1)/(x2-x1);
        x2-x1!=0;
        b=y1-(a*x1);
        cout<<"y"<<"="<<a<<"*x+"<<b;
    return 0;
}
