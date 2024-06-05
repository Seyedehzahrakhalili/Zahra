#include<iostream>
using namespace std;
struct Mobile{
    char number[11];
    bool isvalid(){
        if(number[0]=='0'&&number[1]=='9'){
            return 1;
        }
        return 0;
    }
};
int main()
{
    Mobile mobile;
    cin>>mobile.number;
    if(mobile.isvalid()){
        cout<<"valid";
    }else{
        cout<<"invalid";
    }
    return 1;
}

        
    




