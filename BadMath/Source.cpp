#include <iostream>
#include <iomanip>

using namespace std;

float average(int n1, int n2, int n3)
{
	return (n1 + n2 + n3) / 3.0f; /*returns the quotient of the sum of the parenthesized numbers over 3 (the quantity of numbers)... additionally, these were initially labled as i1-i3 instead of n1-n3*/
}

float sumRecall(int n1, int n2, int n3, int& sum) {//I added this function as a verification for the numbers being averaged
	sum = n1 + n2 + n3;
	return sum;
}

int main()
{
	int n1 = 0, n2 = 0, n3 = 0;

	cout << "This program calculates the average of three numbers." << endl;
	cout << "First number: "; cin >> n1;
	cout << "Second number: "; cin >> n2;
	cout << "Third number: "; cin >> n3;//I fixed this... this was originally labled as n2

	float a = average(n1, n2, n3);
	int sum = sumRecall(n1, n2, n3, sum);

	cout << setprecision(1) << fixed << "The sum is " << sum << endl;//for verification that the program works as intended
	cout << setprecision(1) << fixed << "The average is " << a << endl << endl;

	system("pause");//while system commands are often bad-practice, but I added this here to pause the terminal when the program finishes executing
	return 0;
}

