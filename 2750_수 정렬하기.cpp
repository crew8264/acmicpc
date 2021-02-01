using namespace std;
#include <iostream>

void bubblesort(int arr[], int len) {
	int tmp = 0;

	for (int i = len - 1; i > 0; i--) {
		for (int j = 0; j < i; j++) {
			if (arr[j] > arr[j + 1]) {
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				//printf("%dÈ¸Â÷\n", i);
			}
		}
	}
}

int main() {

	int num = 0;
	scanf("%d", &num);
	//printf("num : %d\n", num);

	int arr[num];
	for (int i = 0; i < num; i++) {
		scanf("%d", arr + i);
		//printf("arr[%d] : %d\n", i, arr[i]);
	}

	bubblesort(arr, num);
	for (int i = 0; i < num; i++) {
		printf("%d\n", arr[i]);
	}


	return 0;
}
