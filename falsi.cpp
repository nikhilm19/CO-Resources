//develop a c program to find the roots of a non linear equation using regular falsi method error=0.0002
#include<iostream>
#include<cmath>
using namespace std;
float f(float x)
{
    return pow(x,3)-4*x-9;
}
float app(float x0,float x1)
{
    float ans=(x0*f(x1)-x1*f(x0))/(f(x1)-f(x0));
    return ans;
}

int main()
{   int i;
    float y,x0,x1,a;
    for(i=0;;i++)
    {
        y=f(i);
        if(y>0){
            x1=i;
            x0=i-1;
            break;
        }
    }
    float ans=app(x0,x1);
    for(i=0;;i++)
    {
        float p=ans;
        a=f(ans);
        if(a<0){
            x0=ans;
            ans=app(x0,x1);
        }
        else {
            x1=ans;
            ans=app(x0,x1);
        }
        cout<<"answer:"<<ans<<"  "<<"x0:"<<x0<<"  "<<"x1:"<<x1<<" "<<endl;

        if(fabs(p-ans)<0.0002)break;
    }
     return 0;
}
