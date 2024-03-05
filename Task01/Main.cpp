#include <iostream>

using namespace std;

int main() {
	int** classes;

	int n = 5;
	int m = 10;

	classes = new int* [n];
	for (int i = 0; i < n; i++)	{
		*(classes + i) = new int[m];
	}

	for (int i = 0; i < n; i++) {
		delete[] *(classes + i);
	}

	delete[] classes;

	return 0;
}