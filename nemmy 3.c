#include <stdio.h>
#include <stdlib.h>
//ABIEWU NEHIMIAH IFEHUKWUDENII
//D1009149

int main() {
    int arr[5];
    int i;

    // Insert 5 elements into the array
    for (i = 0; i < 5; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Print the elements of the array
    printf("The elements of the array are: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
