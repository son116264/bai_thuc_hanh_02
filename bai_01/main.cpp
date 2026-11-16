#include <iostream>
using namespace std;

int main()
{
    float *contro;
    int n,i;
    
    cout << "Nhap so phan tu mang: ";
    cin >> n;
    contro = (float*)malloc(sizeof(float) * n);
    for (i=1; i<=n; i++) {
        cout << "Nhap phan tu so " << i << ": ";
        cin >> contro[i];
    };

    for (i=1; i<=n; i++) {
        cout << contro[i] << " ";
    }
}