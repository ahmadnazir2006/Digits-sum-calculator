#include <iostream>
using namespace std;
int main() {
	long int sum = 0;
	long int number;
	cout << "Enter your Number:\n";
	cin >> number;
	while (number > 0) {
		sum = sum + (number % 10);
		number = number / 10;
	}
	cout << "The sum of digits of the number is: "<<sum;
	return 0;
}