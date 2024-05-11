/*۱.برنامه ای بنویسید که دو عدد با نام های a و b از ورودی بگیرد و مشخص کند 
۱.۱. کدام یک بزرگ تر است
۱.۲. کدام هر دو مثبت هستند
۱.۳. هر دو منفی هستند
۱.۴. هر دو صفر هستند
۱.۵. عدد اول a مثبت است یا منفی
۱.۶. عدد دوم b مثبت است یا منفی*/
 #include<iostream>
 using namespace std;
 int main() 
 {
        int a,b;
        cin >>a>>b;
        if(a>b){
        cout<<a<<">"<<b<<endl;
        }
        else{
        cout<<b<<">"<<a<<endl;
        }
        if(a>0&&b>0){
        cout<<a<<"&"<<b<<">0"<<endl;
        }
        if(a<0&b<0){
        cout<<a<<"&"<<b<<"<0"<<endl;
        }
        if(a==0&&b==0){
        cout<<a<<"&"<<b<<"=0"<<endl;
        }
        !a==0&&!b==0;
        if(a>0){
        cout<<"number1 is +"<<endl;
        }
        else{
        cout<<"number1 is _"<<endl;
        }
        if(b>0){
        cout<<"number2 is +"<<endl;
        }
        else{
        cout<<"number2 is _";  
        }
        return 0;
 }      
