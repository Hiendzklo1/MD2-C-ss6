#include <stdio.h>
int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
float divide(int a, int b);
int findRemainder(int a, int b);
int findGCD(int a, int b);
int findLCM(int a, int b);
int main() {
    int num1, num2, choice;
    printf("nhap so nguyen dau tien: ");
    scanf("%d", &num1);

    printf("nhap so nguyen tiep theo: ");
    scanf("%d", &num2);
    do {
        printf("\nMENU May Tinh\n");
        printf("1. Tong\n");
        printf("2. Hieu\n");
        printf("3. Tich\n");
        printf("4. Thuong\n");
        printf("5. So du trong phep chia 2 so\n");
        printf("6. Uoc chung lon nhat\n");
        printf("7. Boi chung nho nhat\n");
        printf("8. Thoat\n");
        printf("lua chon: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Tong cua 2 so: %d\n", add(num1, num2));
                break;
            case 2:
                printf("Hieu cua 2 so: %d\n", subtract(num1, num2));
                break;
            case 3:
                printf("Tich cua 2 so: %d\n", multiply(num1, num2));
                break;
            case 4:
                printf("Thuong cua 2 so: %.2f\n", divide(num1, num2));
                break;
            case 5:
                printf("So du trong phep chia 2 so: %d\n", findRemainder(num1, num2));
                break;
            case 6:
                printf("Uoc chung lon nhat: %d\n", findGCD(num1, num2));
                break;
            case 7:
                printf("Boi chung nho nhat: %d\n", findLCM(num1, num2));
                break;
            case 8:
                printf("Thoat khoi chuong trinh.\n");
                break;
            default:
                printf("Loi he thong vui long chon tu 1 den 8.\n");
        }
    } while (choice != 8);
}
int add(int a, int b) {
    return a + b;
}
int subtract(int a, int b) {
    return a - b;
}
int multiply(int a, int b) {
    return a * b;
}
float divide(int a, int b) {
    if (b != 0) {
        return (float)a / b;
    } else {
        printf("Loi:chia cho 0.\n");
        return 0;
    }
}
int findRemainder(int a, int b) {
    if (b != 0) {
        return a % b;
    } else {
        printf("Loi:chia cho 0.\n");
        return 0;
    }
}
int findGCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int findLCM(int a, int b) {
    return (a * b) / findGCD(a, b);
}

