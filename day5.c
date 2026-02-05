#include <stdio.h>

int main() {
    int p, q;
    int a[100], b[100], merged[200];
    int i = 0, j = 0, k = 0;

    // Read size and elements of server log 1
    scanf("%d", &p);
    for (int i = 0; i < p; i++) {
        scanf("%d", &a[i]);
    }

    // Read size and elements of server log 2
    scanf("%d", &q);
    for (int i = 0; i < q; i++) {
        scanf("%d", &b[i]);
    }

    // Merge the two sorted arrays
    while (i < p && j < q) {
        if (a[i] <= b[j]) {
            merged[k++] = a[i++];
        } else {
            merged[k++] = b[j++];
        }
    }

    // Copy remaining elements
    while (i < p) {
        merged[k++] = a[i++];
    }

    while (j < q) {
        merged[k++] = b[j++];
    }

    // Print merged chronological log
    for (int i = 0; i < p + q; i++) {
        printf("%d ", merged[i]);
    }

    return 0;
}
