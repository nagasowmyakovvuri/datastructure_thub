#include<iostream>
using namespace std;
class Time{
	int hh,mm;
	public:
		Time(int h,int m)
		{
			hh=h;
			mm=m;
		}
		void display()
		{
			cout<<hh<<" "<<mm<<endl;
		}
		friend void operator++(Time &obj);
};
void operator++(Time &obj)
{
	obj.hh++;
	obj.mm++;
}

int main()
{
	Time t1(2,30);
	Time t2(4,50);
	t1.display();
	++t1;
	t1.display();
}
