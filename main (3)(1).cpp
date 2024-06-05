#include<iostream>
using namespace std;
struct Email{
    char address[255];
    bool isvalid(){
        int countAtsign=0,positionAt=-1,positionDot=-1;
    for(int i=0;address[i]!='\0';i++){
        if(address[i]=='@'){
            countAtsign++;
            if(positionAt==-1){
                positionAt=i;
            }
            
        }
        if(address[i]=='.'){
            positionDot=i;
        }
    }
    if(countAtsign==1&&positionAt!=0&&positionAt<positionDot){
        return true;
    }
    return false;
    }
};
int main()
{
    Email e;
    cin>>e.address;
    if(e.isvalid()){
        cout<<"valid";
    }else{
        cout<<"invalid";
    }
    return 3;
}

        
    




