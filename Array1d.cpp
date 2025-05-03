#include <iostream>

using namespace std;

int main() {
	const int SIZE = 20;
	int array[SIZE];

	srand(time(NULL));

	for (int i = 0; i < SIZE; i++) {
		array[i] = -20 + rand() % (20 - (-20)) + 1;
		cout << array[i] << "\t";
	}
	cout << endl << endl;

	{
		for (int i = 0;i < SIZE; i++) {
			if (array[i] % 2 == 0 || array[i] == 0) {
				cout << array[i] << "\t";
			}
		}
		cout << endl << endl;
	}

	{
		for (int i = 0;i < SIZE; i++) {
			if (array[i] < 0) {
				cout << array[i] << "\t";
			}
		}
		cout << endl << endl;
	}
	{
		int sum = 0;

		for (int i = 0;i < SIZE; i++) {
			sum += array[i];
		}
		cout << "The sum of all of the numbers in the array is:" << sum;
		cout << endl << endl;
	}
	{
		int sum_average = 0;
		int num_pos = 0;

		for (int i = 0;i < SIZE; i++) {
			sum_average += array[i];
			num_pos += 1;
		}
		cout << "The average of all of the numbers in the array is:" << int(double(sum_average) / num_pos);
		cout << endl << endl;
	}
	{
		int number;

		cout << "Enter a number: " << endl;
		cin >> number;
		int i = 0;
		while (array[i] != number) {
			if (i == SIZE) {
				break;
			}
			i += 1;
		}
		if (array[i] == number) {
			cout << "The index of the number in the list is: " << i << endl;
		}
		else {
			cout << "That nubmer does not exist here" << endl;
		}
		
	}

	{
		int compare = 0;

		for (int i = 0; i < SIZE; i++) {
			if (compare < array[i]) {
				compare = array[i];
			}
		}

		cout << "The biggest number in this array is: " << compare << endl;

		for (int n = 0; n < SIZE; n++) {
			if (compare > array[n]) {
				compare = array[n];
			}
		}
		cout << "The smallest number in this array is: " << compare << endl;

	}

	{
		array[0] = 0;
		array[1] = 1;

		for (int i = 2; i < SIZE; i++) {
			array[i] = array[i - 2] + array[i - 1];
			cout << array[i] << "\t";
		}
		cout << endl << endl;
	}
	{
		for (int j = SIZE - 1; j >= 0; j--) {
			cout << array[j] << "\t";
		}
	}

}