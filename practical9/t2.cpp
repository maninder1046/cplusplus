#include <iostream>

using namespace std;

class Area
{
	public:
		int length;
		int breadth;
		Area( int l, int b )
		{
			length = l;
			breadth = b;
		}
		Area( int l )
		{
			length = l;
		}
		int printAreaR()
		{
			return length * breadth;
		}
		int printAreaS()
		{
			return length * length;
		}
};

int main()
{
	Area rt1( 7, 4 );
	Area sq2(25);
	cout << "Area of rectangle " << rt1.printAreaR() << endl;
	cout << "Area of square " << sq2.printAreaS() << endl;
	return 0;
}
