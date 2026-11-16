#include <iostream>
using namespace std;

int main()
{
    float mang[100];
    float *contro;
    int n,i;
    
    contro = mang;
    cout << "Nhap so phan tu mang:";
    cin >> n;
    for (i=1; i<=n; i++) {
        cout << "Nhap phan tu so " << i << ": ";
        cin >> contro[i];
    };

    for (i=1; i<=n; i++) {
        cout << "\nPhan tu so " << i << " cua mang la " << contro[i];
    }
}