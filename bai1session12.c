#include <stdio.h>

// khai bao ham tinh tong 
int tinhTong(int a, int b) {
    return a + b;
}

int main() {
    int so1, so2, tong;

    // Cho nguoi dung nhap vao 2 so
    printf("Nhap so thu nhat: \n");
    scanf("%d", &so1);

    printf("Nhap so thu hai:\n ");
    scanf("%d", &so2);

    // Goi ham tinh tong 
    tong = tinhTong(so1, so2);

    // in ra ket qua
    printf("Tong cua %d va %d la: %d\n", so1, so2, tong);

    return 0;
}
