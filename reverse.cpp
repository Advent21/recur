#include <iostream>
#include <string>

using namespace std;

int reverse(int n, int r)
{
	int m;

	if (n>0)
	{

		m = n % 10;	
		r = r * 10 + m;

		return reverse((n / 10), r);

	}
	else

		return r;
}

int main()
{
	int a = 0;
	int num = 0;
	cout << "Enter a number" << endl;
	cin >> num;
	int number = reverse(num, a);
	cout << number << endl;
	system("pause");

}
