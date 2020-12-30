
#include <iostream>
#include <string.h>
//#include <thread>
using namespace std;

//123
//456

class Time_app
{
public:
	Time_app();
	~Time_app();
	void set_time(void);
	void show_time(void);
private:
	int hour;
	int minute;
	int sec;
};

Time_app::Time_app()
{
	std::cout << "start---aa\n";
}

Time_app::~Time_app()
{
	std::cout << "exit---bb\n";
}

void Time_app::set_time(void)
{
	;
}

void Time_app::show_time(void)
{
	hour = 1;
	minute = 2;
	sec = 3;

	std::cout << hour << ":" << minute << ":" << sec <<std::endl;
}

void func_app(void)
{
	std::cout << "hello world\n";
	Time_app t1;

	std::cout << "----1\n";

	t1.show_time();
	std::cout << "----2\n";
}

class Student
{
public:
	Student(int, string, int);
	~Student();
	void get_value(void);
	void display(void);
private:
	int num;
	string name;
	int sex;
};

Student::Student(int n, string nam, int s)
{
	num = n;
	name = nam;
	sex = s;
}

Student::~Student()
{

}

void Student::get_value(void)
{
	cin >> num >> name >> sex;
}

void Student::display(void)
{
	cout << "num:" << num << endl;
	cout << "name:" << name << endl;
	cout << "sex:" << sex << endl;
}

class Student_1:private Student
{
public:
	Student_1(int n, string nam, int s, int a, string ad);
	~Student_1();
	void get_value_1(void);
	void display_1(void);
private:
	int age;
	string addr;
};

Student_1::Student_1(int n, string nam, int s, int a, string ad):Student(n, nam, s)
{
	age = a;
	addr = ad;
}

Student_1::~Student_1()
{

}

void Student_1::get_value_1(void)
{
	cin >> age >> addr;
}

void Student_1::display_1(void)
{
	Student::display();

	cout << "age:" << age << endl;
	cout << "address:" << addr << endl;
}

//371
int main(int argc, char **argv)
{
	//Student_1 stu(12, "hhkk", 13, 18, "ooop");

	//stu.display_1();

	int a, b, sum;
	char string[] = "hello world";

	cin >> a >> b;

	sum = a + b;

	cout << "a + b = " << sum << endl;

	cout << string << endl;
		
	return 0;
}

