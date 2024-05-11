// مختصات دو نقطه x1,y1 و x2,y2 حالا با کمک فرمول خط مشخص کنید خطی که از این دو نقطه می گذرد چیست آن را با فرمت y=ax+b بنویسید.دقت کنید که تقسیم به صفر در برنامه نویسی تعریف نشده است.
#include <iostream>
using namespace std;
int main()
{
        int x1,y1,x2,y2,b;
        float a;
        cout<<"Please enter x1 & y1"<<endl;
        cin>>x1>>y1;
        cout<<"Please enter x2 & y2"<<endl;
        cin>>x2>>y2;
        a=(y1-y2)/(x1-x2);
        y2-y1!=0;
        b=y1-(a*x1);
        cout<<"y"<<"="<<a<<"*x+"<<b;
    return 0;
}
