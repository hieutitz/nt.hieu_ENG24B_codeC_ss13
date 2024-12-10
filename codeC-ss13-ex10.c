#include <stdio.h>

void addItem(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
}
void showItem(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }
}
void addItemAtPosition(int arr[], int *size, int value, int pos) {
    for (int i = *size; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = value;
    (*size)++;
}
void editItemAtPosition(int arr[], int size, int pos, int value) {
    if (pos >= 0 && pos < size) {
        arr[pos] = value;
        printf("Phan tu tai vi tri %d da duoc sua thanh %d.\n", pos, value);
    } else {
        printf("Vi tri khong hop le.\n");
    }
}
int main() {
    int arr[100];
    int size = 0;
    int choose;
    do {
        printf("\nMENU\n");
        printf("1. Nhap so phan tu va gia tri cac phan tu\n");
        printf("2. In ra gia tri cac phan tu dang quan ly\n");
        printf("3. Them mot phan tu vao vi tri chi dinh\n");
        printf("4. Sua mot phan tu o vi tri chi dinh\n");
        printf("5. Xoa mot phan tu o vi tri chi dinh\n");
        printf("6. Sap xep cac phan tu\n");
        printf("7. Tim kiem phan tu nhap vao\n");
        printf("8. Thoat\n");
        printf("Nhap lua chon: ");
        scanf("%d", &choose);
        switch (choose) {
            case 1:
                printf("Moi ban nhap so luong phan tu: ");
                scanf("%d", &size);
                addItem(arr, size);
                break;
            case 2:
                showItem(arr, size);
                break;
            case 3:
                {
                    int value, pos;
                    printf("Nhap vi tri can them phan tu (0 den %d): ", size);
                    scanf("%d", &pos);
                    printf("Nhap gia tri phan tu: ");
                    scanf("%d", &value);
                    addItemAtPosition(arr, &size, value, pos);
                    printf("Phan tu %d da duoc them vao vi tri %d.\n", value, pos);
                }
                break;
            case 4:
                {
                    int pos, value;
                    printf("Nhap vi tri can sua (0 den %d): ", size - 1);
                    scanf("%d", &pos);
                    printf("Nhap gia tri moi: ");
                    scanf("%d", &value);
                    editItemAtPosition(arr, size, pos, value);
                }
                break;
            case 5:
                break;
            case 6:
                break;
            case 7:
                break;
            case 8:
                printf("Thoat chuong trinh.\n");
                break;
            default:
                printf("Lua chon khong hop le.\n");
        }
    } while (choose != 8);

    return 0;
}

