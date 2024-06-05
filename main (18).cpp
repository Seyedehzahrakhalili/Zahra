
#include <iostream> 
using namespace std; 
int main() 
{ 
        float n1,n2,n3; 
        int w1,w2,w3; 
        cin >>n1>>n2>>n3; 
        cin >>w1>>w2>>w3; 
        float avg =(n1*w1+n2*w2+n3*w3)/(w1+w2+w3); 
        cout<<avg; 
        return 0;
}        
