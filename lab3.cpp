#include <stdio.h>

int main() {
    int a[100], b[100], i, j, n, m;

    printf("Enter size of array A: ");
    scanf_s("%d", &n);

    printf("Enter %d elements in the array A : ", n);
    for (i = 0; i < n; i++) {
        scanf_s("%d", &a[i]);
    }

    printf("Enter size of array B : ");
    scanf_s("%d", &m);

    printf("Enter %d elements in the array B : ", m);
    for (j = 0; j < m; j++) {
        scanf_s("%d", &b[j]);
    }

    printf("Ñommon elements: ");

    for (i = 0; i < n; i++) {

        for (j = 0; j < m; j++) {

            if (a[i] == b[j]) {
                printf("%d ", a[i]);
            }
        }
    }
    return 0;
}