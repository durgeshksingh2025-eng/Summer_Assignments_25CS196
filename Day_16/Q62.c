#include <stdio.h>

int main() {
    int arr[100], n, i, j;
    int maxFreq = 0, maxElement;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++) {
        int freq = 1;

        for(j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) {
                freq++;
            }
        }

        if(freq > maxFreq) {
            maxFreq = freq;
            maxElement = arr[i];
        }
    }

    printf("Maximum frequency element = %d\n", maxElement);
    printf("Frequency = %d\n", maxFreq);

    return 0;
}