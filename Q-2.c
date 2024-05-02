#include <stdio.h>

main() {
    int a[10], n, i;
    int b;

    printf("Enter the array size: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

   
    b = a[0];

    for (i = 1; i < n; i++) {
        if (a[i] < b) {
            b = a[i];
        }
    }

    printf("The smallest element in the array is: %d\n", b);
}
