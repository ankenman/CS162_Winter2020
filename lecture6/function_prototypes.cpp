#include <iostream>

using namespace std;

double computeAverage(int[], int);
double computeAverage(double[], int);

int main() {
	int array[] = {3, 4, 5};
	cout << "Arithmentic mean: " << computeAverage(array, 3) << endl;
	double dArray[] = {3.0, 4.0, 5.0};
	cout << computeAverage(dArray, 3) << endl;
	return 0;
}

double computeAverage(double array[], int size) {
	double mean = 0;
	for (int i = 0; i < size; ++i) {
		mean += array[i];
	}
	return mean / size;
}

double computeAverage(int array[], int size) {
	double mean = 0;
	for (int i = 0; i < size; ++i) {
		mean += array[i];
	}
	return mean / size;
}
