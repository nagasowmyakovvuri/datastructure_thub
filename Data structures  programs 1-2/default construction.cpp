#include<iostream>
using namespace std;
class Student{
	public:
		string name;
		int marks;
		Student()
		{
			cout<<"hi"<<endl;
		}
		Student(int marks)
		{
			this->marks;
			cout<<marks<<endl;
		}
		Student(string name="",int marks=0)
		{
			this->name=name;
			this->marks=marks;
		}
		void display()
		{
			cout<<marks<<" "<<name<<endl;
		}
};
int main()
{
	Student s1("sowmya",1234);
	s1.display();
	Student s2(20);
	Student s3(100);
}
