#include <stdio.h>

void taoMaTran(int hang, int cot, int arr[hang][cot]) {
    printf("Nhap cac phan tu cua ma tran (%d x %d):\n", hang, cot);
    for (int i = 0; i < hang; i++) {
        for (int j = 0; j < cot; j++) {
            printf("Phan tu [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
}

void inMaTran(int hang, int cot, int arr[hang][cot]) {
    printf("Ma tran vua nhap la:\n");
    for (int i = 0; i < hang; i++) {
        for (int j = 0; j < cot; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int hang, cot;
    printf("Nhap so hang: ");
    scanf("%d", &hang);
    printf("Nhap so cot: ");
    scanf("%d", &cot);
    int arr[hang][cot];
    taoMaTran(hang, cot, arr);
    inMaTran(hang, cot, arr);
    return 0;
}

