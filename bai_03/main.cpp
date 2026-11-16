#include <iostream>
using namespace std;

typedef struct {
    char ten[50];
    int ma;
    int diem1;
    int diem2;
    int diem3;
} sv;

int main() {
    int n,i;
    sv ds[100];
    cout << "Nhap so sinh vien: ";
    cin >> n;

    for (i=1; i<=n; i++) {
        cout << "Nhap ten sinh vien so " << i << ": ";
        cin.ignore();
        cin.get(ds[i].ten, 50);
        cout << "Nhap ma sinh vien so " << i << ": ";
        cin >> ds[i].ma;
        cout << "Nhap diem 1 sinh vien so " << i << ": ";
        cin >> ds[i].diem1;
        cout << "Nhap diem 2 sinh vien so " << i << ": ";
        cin >> ds[i].diem2;
        cout << "Nhap diem 3 sinh vien so " << i << ": ";
        cin >> ds[i].diem3;
    }

    for (i=1; i<=n; i++) {
        cout << "\nTen sinh vien so " << i << " la: " << ds[i].ten;
        cout << "\nMa sinh vien so " << i << " la: " << ds[i].ma;
        cout << "\nDiem 1 sinh vien so " << i << " la: " << ds[i].diem1;
        cout << "\nDiem 2 sinh vien so " << i << " la: " << ds[i].diem2;
        cout << "\nDiem 3 sinh vien so " << i << " la: " << ds[i].diem3;
    }
}
