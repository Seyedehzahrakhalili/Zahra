
#include <iostream>
using namespace std;
void get(int n,int a[]){
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
}

void print(int n,int a[]){
    for(int i=0;i<n;i++){
        cout<<"["<<i<<"]="<<a[i]<<endl;
    }
}

  int findmax(int n,int a[]){
    int max=a[0];
    for(int i=1;i<n;i++){
        if(a[i]>max){
            max=a[i];
        }
    }
    return max;
}

   int findmin(int n,int a[]){
     int min=a[0];
    for(int i=1;i<n;i++){
        if(a[i]<min){
            min=a[i];
        }
    }
    return min;
}

int sum(int n,int a[]){
    int b=0;
  for(int i=0;i<n;i++){
     b+=a[i];
    }
return b;
}

int avarage(int n,int a[]){
       int b=sum( n,a);
return b/n;
}
void sort(int n,int a[]){
  
     for(int i=0;i<n;i++){
        
        for(int j=0;j<n-i;j++){ 
            
          if(a[j]>a[j+1]){
              
            int temp= a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
          } 
        } 
    }
}

int index(int n,int value,int a[]){
   for(int i=0;i<n;i++){
       if(a[i]==value){
           return i;
       }
    
   }
   return -1;
}
int main()
{
   int n,value;
   cout<<"how many numbers do you want enter?";
   cin>>n;
   int a[n],b[n];
   cout<<"enter numbers:"<<endl;
   get(n,a);
   print(n,a);
   cout<<"max is:"<<findmax(n,a)<<endl;
   cout<<"min is:"<<findmin(n,a)<<endl;
   cout<<"sum is:"<<sum(n,a)<<endl;
   cout<<"avarage is:"<<avarage(n,a)<<endl;
   cout<<"What is the index value?"<<endl;
   cin>>value;
   cout<<"index:"<<index(n,value,a)<<endl;
   cout<<"Numbers in order from smallest to largest:"<<endl;
   sort(n,a);
   for(int i=0;i<n;i++){
       b[i]=a[i];
   }
   print(n,b);
        return 0;
}