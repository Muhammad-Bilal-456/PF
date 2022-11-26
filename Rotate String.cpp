#include<iostream>
using namespace std;
int main() {
	int test = 1;
	cout << "Enter any no from 1 to 10 for Test Case  : ";
	do {
		cin >> test;
		if (test < 1 || test > 10) {
			cout << "\nError ! Only Enter from 1 to 10 \n";
		}
	} while (test < 1 || test > 10);
	cin.ignore();
	do {
		cout << "\nINPUT\n";
		int length = 0;
		char temp;
		string a;
		bool flag = false;
		cout << "Enter a String[Without Space] in Lower Case Character from range 1 to 100\n";
		do {
			cin >> a;
			length = 0;
			flag = false;
			for (length; a[length] != '\0'; length++);
			for (int i = 0; i < length; i++)
				if (a[i] > 122 || a[i] < 97)
				{
					cout << "Error : Enter String[Without Space] in LOWER CASE Character Only\n";
					flag = true;
				}
				else if (length < 1 || length>100) {
					cout << "Error : Enter String from range 1 to 100 only\n";
					flag = true;
				}
		} while (flag);
		cout << "OUTPUT\n";
		for (int i = 0; i < length; i++)
		{
			temp = a[0];
			for (int j = 0; j < length - 1; j++)
				a[j] = a[j + 1];
			a[length - 1] = temp;
			cout << a << " ";
		}
		test--;
		cout << endl;
	} while (test);
	return 0;
}