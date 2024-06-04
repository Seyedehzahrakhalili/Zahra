#include <iostream>
using namespace std;
int main()
{
    
    int a[9]={0},n;
    do{
        cout<<"enter a number";
        cin>>n;
        if(n>0&&n<10){
            a[n-1]++;
        }
    }while(n!=0);
    int indexmax=0,indexmin=0,max=a[0],min=a[0];
    for(int i=0;i<9;i++){
        cout<<i+1<<"i"<<a[i]<<endl;
    
    if(a[i]>max){
        indexmax=i;
        max=a[i];
    }
    if(a[i]<min){
        indexmin=i;
        min=a[i];
    }
}
    cout<<"max :"<<indexmax+1<<":"<<a[indexmax]<<endl;
     
    cout<<"mix :"<<indexmin+1<<":"<<a[indexmin]<<endl;

    return 0;
}
