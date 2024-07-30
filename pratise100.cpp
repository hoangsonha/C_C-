#include<iostream>
using namespace std;
int main() {
	int value = 10;
	int *const ptr = &value;
	int &ref = value;

	*ptr = 15;

	cout << *ptr << "\n";
	cout << ref << "\n";
	cout << value << "\n";

	ref = 20;

	cout << *ptr << "\n";
	cout << ref << "\n";
	cout << value << "\n";

	return 0;
}