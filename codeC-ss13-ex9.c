#include <stdio.h>

void nhapMang(int n, int m, int arr[n][m]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("Nhap phan tu [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
}
void inMang(int n, int m, int arr[n][m]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}
void inGoc(int n, int m, int arr[n][m]) {
    printf("%d %d\n%d %d\n", arr[0][0], arr[0][m - 1], arr[n - 1][0], arr[n - 1][m - 1]);
}
void inBien(int n, int m, int arr[n][m]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (i == 0 || i == n - 1 || j == 0 || j == m - 1) {
                printf("%d ", arr[i][j]);
            } else {
                printf("0 ");
            }
        }
        printf("\n");
    }
}
void inCheo(int n, int m, int arr[n][m]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (i == j || i + j == m - 1) {
                printf("%d ", arr[i][j]);
            } else {
                printf("0 ");
            }
        }
        printf("\n");
    }
}
int laSoNguyenTo(int x) {
    if (x < 2) return 0;
    for (int i = 2; i * i <= x; i++) {
        if (x % i == 0) return 0;
    }
    return 1;
}
void inSoNguyenTo(int n, int m, int arr[n][m]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (laSoNguyenTo(arr[i][j])) {
                printf("%d ", arr[i][j]);
            } else {
                printf("0 ");
            }
        }
        printf("\n");
    }
}
int main() {
    int n, m, choice;
    int arr[100][100]; 
    do {
        printf("\nMENU\n");
        printf("1. Nhap so hang, so cot va gia tri cac phan tu cua mang\n");
        printf("2. In gia tri cac phan tu cua mang theo ma tran\n");
        printf("3. In ra cac phan tu o goc theo ma tran\n");
        printf("4. In ra cac phan tu nam tren duong bien theo ma tran\n");
        printf("5. In ra cac phan tu nam tren duong cheo chinh va cheo phu theo ma tran\n");
        printf("6. In ra cac phan tu la so nguyen to theo ma tran\n");
        printf("7. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Nhap so hang: ");
                scanf("%d", &n);
                printf("Nhap so cot: ");
                scanf("%d", &m);
                nhapMang(n, m, arr); 
                break;
            case 2:
                inMang(n, m, arr);
                break;
            case 3:
                inGoc(n, m, arr);
                break;
            case 4:
                inBien(n, m, arr);
                break;
            case 5:
                inCheo(n, m, arr);
                break;
            case 6:
                inSoNguyenTo(n, m, arr);
                break;
            case 7:
                printf("Thoat chuong trinh.\n");
                break;
            default:
                printf("Lua chon khong hop le.\n");
        }
    } while (choice != 7);

    return 0;
}

