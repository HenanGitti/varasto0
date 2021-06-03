
#include <iostream>
using namespace std;

int main() {
	int arr[14] = {};
	for (int i = 0; i < 7; i++)
		if (i % 2 == 0) {
			i = i + 1;
			cout << i << arr[i] << "\n";
			i = i - 1;
			cout << i << arr[i] << "\n";

			i = i + 2;
			cout << i << arr[i] << "\n";
			i = i - 1;
			cout << i << arr[i] << "\n";
		}
		

		return 0;
	}