#include <stdio.h>


#include <stdio.h>

void findMaxAndRecord(int arr[], int n, int result[], int* resultIndex) {
    int maxIndex = 0;

    for (int i = 1; i < n; i++) {
        if (arr[i] > arr[maxIndex]) {
            maxIndex = i;
        }
    }

    result[(*resultIndex)++] = arr[maxIndex];


    for (int i = maxIndex; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n;

    printf("Enter the size of the array: ");
    scanf("%d", &n);


    int arr[n];
    int result[n];
    int resultIndex = 0;


    printf("Enter %d elements of the array:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }


    printf("Original Array: ");
    printArray(arr, n);


    for (int i = 0; i < n; i++) {
        findMaxAndRecord(arr, n - i, result, &resultIndex);
    }

    // Print the sorted array with maximum elements
    printf("Sorted Array: ");
    printArray(result, n);

    return 0;
}