#include <iostream>
using namespace std;
int main() {
    int n, choice;
    do {
        cout << "Nhap vao mot so nguyen n: ";
        cin >> n;
        if (n < 2) {
            cout << "Vui long nhap n >= 2." << endl;
            continue;
        }
        cout << "MENU:" << endl;
        cout << "1. In day so chia het cho 2 va giam dan (n >= so >= 2)" << endl;
        cout << "2. In cac so nho hon n va tinh tong" << endl;
        cout << "3. In ra cac uoc so chan cua n" << endl;
        cout << "4. In ra cac uoc so le va so luong cac uoc le cua n" << endl;
        cout << "5. In ra uoc so le lon nhat cua n" << endl;
        cout << "6. Thoat" << endl;
        cout << "Lua chon cua ban: ";
        cin >> choice;
        switch (choice) {
            case 1: {
                cout << "Day so chia het cho 2 va giam dan: ";
                for (int i = n; i >= 2; i -= 2) {
                    cout << i << " ";
                }
                cout << endl;
                break;
            }
            case 2: {
                int sum = 0;
                cout << "Cac so nho hon n: ";
                for (int i = 1; i < n; ++i) {
                    cout << i << " ";
                    sum += i;
                }
                cout << "\nTong cac so nho hon n: " << sum << endl;
                break;
            }
            case 3: {
                cout << "Cac uoc so chan cua " << n << ": ";
                for (int i = 2; i <= n; i += 2) {
                    if (n % i == 0) {
                        cout << i << " ";
                    }
                }
                cout << endl;
                break;
            }
            case 4: {
                int countOddDivisors = 0;
                cout << "Cac uoc so le cua " << n << ": ";
                for (int i = 1; i <= n; i += 2) {
                    if (n % i == 0) {
                        cout << i << " ";
                        countOddDivisors++;
                    }
                }
                cout << "\nSo luong cac uoc so le cua " << n << ": " << countOddDivisors << endl;
                break;
            }
            case 5: {
                cout << "Uoc so le lon nhat cua " << n << ": ";
                for (int i = n; i >= 1; i -= 2) {
                    if (n % i == 0) {
                        cout << i << endl;
                        break;
                    }
                }
                break;
            }
            case 6: {
                cout << "Chuong trinh ket thuc. Tam biet!";
                break;
            }
            default:
                cout << "Lua chon khong hop le. Vui long chon lai." << endl;
        }
    } while (choice != 6);
}

