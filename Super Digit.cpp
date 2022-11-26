#include<iostream>
using namespace std;
int SuperDigit(int n)
{
	int sum = 0;
	while (n > 0 || sum > 9)
	{
		if (n == 0)
		{
			n = sum;
			sum = 0;
		}
		sum += n % 10;
		n /= 10;
	}
	return sum;
}
int main() {
		cout << "INPUT\n";
		int n = 1, k = 1;
		cout << "Enter a no : ";
		do {
			cin >> n;
			if (n < 1)
				cout << "Error:Enter no from 1 to 10^100000 only \n";
		} while (n < 1);
		cout << "Enter value for integer k : ";
		do {
			cin >> k;
			if (k < 1 || k>100000)
				cout << "Error:Enter no from 1 to 100000 only\n";
		} while (k < 1 || k>100000);

		int	p = n, count = 0;
		while (p) {
			p = p / 10;
			count++;
		}
		p = n;
		for (int i = 1; i < k; i++) {
			if (count == 1)
				p = (p * 10) + n;
			if (count == 2)
				p = (p * 100) + n;
			if (count == 3)
				p = (p * 1000) + n;
			if (count == 4)
				p = (p * 10000) + n;
		}
		cout << "OUTPUT\n";
		cout << SuperDigit(p)<<"\n\n";
	return 0;
}