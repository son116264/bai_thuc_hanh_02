#include <iostream>
using namespace std;

int main()
{
    float **contro;
    int x,y,i,j;

    cout << "Nhap so hang va cot cua mang: ";
    cin >> x >> y;
    
    contro = (float**)malloc(sizeof(float *) * x);

    for(int i = 0; i < y; i++) {
        contro[i] = (float*)malloc(sizeof(float) * y); 
    }

    for (i=1; i<=x; i++) {
        for (j=1; j<=y; j++) {
            cout << "Nhap phan tu hang " << i << " cot " << j << ": ";
            cin >> contro[i][j];
        };
    };
    
    for (i=1; i<=x; i++) {
        for (j=1; j<=y; j++) {
            cout << contro[i][j] << " ";
        };
        cout << "\n";
    };
}