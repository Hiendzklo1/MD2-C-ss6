#include <stdio.h>
int main() {
    int num1, num2, num3, choice;    do {
        printf("Nhap so nguyen 1: ");
        scanf("%d", &num1);
        printf("Nhap so nguyen 2: ");
        scanf("%d", &num2);
        printf("Nhap so nguyen 3: ");
        scanf("%d", &num3);
        printf("\nCALCULATOR\n");
        printf("1. Tong 3 so nguyen\n");
        printf("2. Trung binh cong cua 3 so nguyen\n");
        printf("3. So lon nhat, nho nhat trong 3 so\n");
        printf("4. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);
        switch(choice) {
            case 1:
                printf("Tong 3 so nguyen la: %d\n", num1 + num2 + num3);
                break;
            case 2:
                printf("Trung binh cong cua 3 so nguyen la: %.2f\n", (float)(num1 + num2 + num3) / 3);
                break;
            case 3:
                if (num1 >= num2 && num1 >= num3)
                    printf("So lon nhat la: %d\n", num1);
                else if (num2 >= num1 && num2 >= num3)
                    printf("So lon nhat la: %d\n", num2);
                else
                    printf("So lon nhat la: %d\n", num3);
                if (num1 <= num2 && num1 <= num3)
                    printf("So nho nhat la: %d\n", num1);
                else if (num2 <= num1 && num2 <= num3)
                    printf("So nho nhat la: %d\n", num2);
                else
                    printf("So nho nhat la: %d\n", num3);
                break;
            case 4:
                printf("Ket thuc chuong trinh.\n");
                break;
            default:
                printf("Lua chon khong hop le. Vui long chon lai.\n");
        }

    } while (choice != 4);
}

