#include <iostream>
#include <string>

using namespace std;

int reverse (int n, int r)
	{
		int m;
		
		if (n>0)
		{
		
		m = n%10;
		//n = n/10;	
		r = r*10+m;
		
		return reverse ((n/10),r);
			
		}
		else
		 
		 return r;
	}
	
int main ()
{
	int g=0;
	int num = 1247878;
	
	int number = reverse(num,g);
	
	cout << number << endl;
}
