#include <iostream>
using namespace std;

class Demo
{
private:
    int x,y;
    int *p;
public:
    
	Demo()
    {
        p=new int;
    }
	
	 void SetDemo(int x1,int y1,int p1)
{
x=x1;
y=y1;
*p=p1;
}

    //Demo operator+(Demo const &obj)
   // {
   //     Demo res;
   //     res.x=x*obj.x;
   //     cout<<"Operat "<<x<<" obj.x "<<obj.x <<&obj<<endl;
    //    res.y=y*obj.y;
   //     cout<<"Operat "<<y<<" obj.y "<<obj.y<<endl;
//return res;
   // }

	Demo(Demo  &obj)
	{
          x=obj.x;
	  y=obj.y;
//	p=new int;
	 *p=*(obj.p);
        }


    void  show()
    {
        cout<<"x"<<x<<"y"<<y<<"*p"<<*p<<endl;
    }



};
int main()
{
    Demo D1;

D1.SetDemo(1,2,3);
   // Demo D3=D1+D2;
Demo D2;
	D2=D1;
    D2.show();

    return 0;
}
