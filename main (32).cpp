
#include <iostream>
using namespace std;
int main()
{
    float g[10];
    
    int w[10];
    
    for(int i=0;i<10;i++){
        
        cout<<"enter grade"<<i+1<<endl;
        
        cin>>g[i];
    }
    for(int j=0;j<10;j++){
        
        cout<<"enter weight"<<j+1<<endl;
        
        cin>>w[j];
    }
    float z=0;
    int d=0;
    
    for(int k=0;k<10;k++){
        
        z+=w[k]*g[k];
    }
    for(int c=0;c<10;c++){
        
      d+=w[c]; 
    }
    cout<<"weighted average is:"<<z/d<<endl;
    
    int max=0;
    
    for(int i=0;i<10;i++){
       if(g[i]>max){
           max=g[i];
       }
    }
    cout<<"grade max is:"<<max<<endl;
    
    int maxi=0,m;
    
    for(int i=0;i<10;i++){
        
        if(w[i]>maxi){
            
            maxi=w[i];
            m=i;
        }
    }
    cout<<m<<"th lesson is the most important";
    return 0;
}