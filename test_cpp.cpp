
#include <iostream>
//#include <thread>
//using namespace std;

//123
//456

class Time_app
{
public:
	void set_time(void);
	void show_time(void);
private:
	int hour;
	int minute;
	int sec;
};

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

int main(int argc, char **argv)
{
	//std::cout << "hello world\n";
	Time_app t1;

	t1.show_time();
	return 0;
}

