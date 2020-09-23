#include <iostream>
using namespace std;
class shape
{
public:
	int length;
	int width;
	void setarea(int y) {
		area = y;
	}
	int getarea()
	{
		return area;
	}


private:
	int area;
};

int main() {
	int y;
	shape s1;

	cout << "Enter length of shape: ";
	cin >> s1.length;
	cout << "Enter Width of shape: ";
	cin >> s1.width;
	y = s1.length*s1.width;
	s1.setarea(y);
	s1.getarea();
	cout << y;
}
