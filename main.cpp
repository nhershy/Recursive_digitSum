//print the running sum of the previous digits, starting from left
#include <iostream>
using namespace std;

void DigiSum(int num, int mod, int sum);

int main() 
{
	
	//int num = 12345;
	int num = 56372;
	DigiSum(num, 10000, 0);
	return 0;
}

void DigiSum(int num, int mod, int sum)
{
	int temp=0;
	if (mod==0)
		return;
	else
	{
		temp = num / mod;
		sum += temp;
		cout << sum << " ";
		num = num % mod;
		mod = mod/ 10;
		DigiSum(num, mod, sum);
	}
}
