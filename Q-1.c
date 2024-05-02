#include <stdio.h>

main() {
    int a;

    printf("Enter a number: ");
    scanf("%d", &a);

    switch (a > 0) {
        case 1:
            printf("is a positive : %d \n", a);
            break;
        case 0:
            switch (a < 0) {
                case 1:
                    printf("is a negative : %d \n", a);
                    break;
                case 0:
                    printf("is a zero : %d \n", a);
                    break;
            }
            break;
    }
}
