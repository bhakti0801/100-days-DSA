#include <stdio.h>

int main() {
    int n;
    int a[100];
    int left, right, temp;

    // Read array size
    scanf("%d", &n);

    // Read array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Two-pointer approach
    left = 0;
    right = n - 1;

    while (left < right) {
        temp = a[left];
        a[left] = a[right];
        a[right] = temp;
        left++;
        right--;
    }

    // Print reversed array
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
