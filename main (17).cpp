#include <iostream>
using namespace std;
int main()
{
        int a,z;
        cout<<"enter a number"<<endl;
        cin>>a;
        for(int i=1;i<=100;i++){
        z=a*i;
        cout<<i<<"×"<<a<<"="<<z<<endl;
        }
    return 0;
}
