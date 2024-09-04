#include<iostream>

using namespace std;

class Point
{
private:
	int x, y;
public:
	void Print()
	{
		cout << "X: " << x << "\tY: " << y << endl;
	}

	void init(int a, int b)
	{
		x = a;
		y = b;
	}

	int GetX() {
		return x;
	}

	int GetY() {
		return y;
	}
};

int main()
{
	Point a;
	a.init(1, 2);
	a.Print();

	Point b;
	b.init(10, 20);
	b.Print();

	cout << a.GetX() << endl;
	cout << b.GetX() << endl;
}