#include <stdio.h>

int main() {
    int n;
    printf("nhap so nguyen tu 1 den 9: ");
    scanf("%d", &n);
    if (n < 1 || n > 9) {
        printf("dau vao khong hop le. vui long nhap so tu 1 den 9.\n");
    } else {
        printf("Bang nhan cho so %d:\n", n);
        for (int i = 1; i <= 9; ++i) {
            printf("%d x %d = %d\n", n, i, n * i);
        }
    }
}

