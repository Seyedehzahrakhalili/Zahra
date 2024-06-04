#include<iostream>
#include<cmath>
using namespace std;
struct Point{
    int x,y,z;
};
float calDistance(Point p1,Point p2){
    
    return sqrt(pow(p2.x-p1.x,2)+pow(p2.y-p2.y,2)+pow(p2.z-p1.z,2));

}

Point getpoint(){
Point myp;
cout<<"enter  x y z for point:"<<endl;
cin>>myp.x>>myp.y>>myp.z;

return myp;
}
void z(Point p1,Point p2){
    if(p1.z=p2.z){
        cout<< " p1,p2 dar yek safhe hastan!"<<endl;
        if(p1.x=p2.x){
            cout<<"har do dar safhe y";
        }else if(p1.y=p2.y){
            cout<<"har do dar safhe x";
        }
    }else{
        cout<<" p1,p2 dar yek safhe nstan!";
    }
}
int main()
{
    Point p1=getpoint();
    Point p2=getpoint();
    float d=calDistance(p1,p2);
    cout<<"D:"<<d<<endl;
    z(p1,p2);
    return 0;
}
