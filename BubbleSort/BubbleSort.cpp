#include <iostream>

int main()
{
	int *arr;
	const int arrsize = 10;
	arr = new int[arrsize];

	for (int i = 0; i < arrsize; i++) {
		std::cin >> arr[i];
	}

	int tmp;

	for (int j = 0; j < arrsize - 1; j++) {

		for (int k = 0; k < arrsize - j - 1; k++) {

			if (arr[k] > arr[k + 1]) {

				tmp = arr[k];
				arr[k] = arr[k + 1];
				arr[k + 1] = tmp;

			}

		}

	}

	std::cout << "\nArray sorted successfully! New array:" << std::endl;

	for (int l = 0; l < arrsize; l++) {
		std::cout << arr[l] << " ";
	}

	std::cout << std::endl;
	delete[] arr;

	return 0;

}