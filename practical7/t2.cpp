#include <iostream>
#include <ctime>
using namespace std;
int main()
{
	time_t current_time;
	current_time = time(NULL);

	char *tm = ctime(&current_time);
	cout << "Today is : " << tm;
	
	return 0;
}
