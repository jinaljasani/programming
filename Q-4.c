#include <stdio.h>

void squareElements(int *a, int n) {

    for (int i = 0; i < n; i++) {
        *(a + i) *= *(a + i);
    }
}

main() {
    int a[10], n;

    printf("Enter the array size: ");
    scanf("%d", &n);

    printf("Enter elements: %d\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    squareElements(a, n);

    printf("Squared elements of the array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    printf("\n");
}
