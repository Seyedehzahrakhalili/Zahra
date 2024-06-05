
#include <iostream>
using namespace std;
int main()
{
    int gpa;
    cout<<"please enter gpa"<<endl;
    cin>>gpa;
    if(gpa>=17&&gpa<=20){
    cout<<"A."<<"Excellent. You are not conditional";
    }
    else if(gpa>=14&&gpa<17){
    cout<<"B."<<"good. You are not conditional";
    }
    else if(gpa<14&&gpa>=10){
    cout<<"C."<<"you were lucky. It could be conditional ";
    }
    else if(gpa<10&&gpa>=0){
    cout<<"D."<<"conditional I am sorry ";
    }
    else{
    cout<<"error";    
    }
    return 0;
}
