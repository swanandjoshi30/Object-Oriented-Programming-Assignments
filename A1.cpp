#include<iostream>
using namespace std;

class complex

    {   public:

        int img_num,real_num;

        complex()

        { 
            real_num=0;
            img_num=0;
        }
        };

int main()

    {   complex x,y,z,m;

        cout<<"enter the first number : ";
        cin>>x.real_num;
        cout<<"enter the second number : ";
        cin>>x.img_num;

        cout<<"\nFirst complex number is : "<<x.real_num<<"+"<<y.img_num<<"i";

        cout<<"\n\n enter the first number : ";
        cin>>y.real_num;
        cout<<"enter the second number : ";
        cin>>y.img_num;

        cout<<"\n\nSecond complex number is : "<<y.real_num<<"+"<<y.img_num<<"i";

        z.real_num=x.real_num+y.real_num;
        z.img_num=x.img_num+y.img_num;

        cout<<" \n\naddition of two complex no. is : "<<z.real_num<<"+"<<z.img_num<<"i";

        m.real_num=(x.real_num*y.real_num)+(x.img_num*y.img_num);
        m.img_num=(x.img_num*y.real_num)-(y.img_num*x.real_num);

        cout<<"\n\nmultiplication of two complex no is : "<<m.real_num<<"+"<<m.img_num<<"i";


    }