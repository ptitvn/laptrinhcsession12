#include <stdio.h>

int timSoLonNhat(int mang[], int kichThuoc) {
    if (kichThuoc <= 0) {
        printf("Mang khong hop le!\n");
        return -1; 
    }

    int max = mang[0]; 
    for (int i = 1; i < kichThuoc; i++) {
        if (mang[i] > max) {
            max = mang[i]; 
        }
    }
    return max;
}

int main() {
    int mang[] = {3, 7, 2, 8, 5}; 
    int kichThuoc = sizeof(mang) / sizeof(mang[0]); 

    int soLonNhat = timSoLonNhat(mang, kichThuoc);

    if (soLonNhat != -1) {
        printf("So lon nhat trong mang la: %d\n", soLonNhat);
    }

    return 0;
}
