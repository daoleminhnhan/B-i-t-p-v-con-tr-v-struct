#include <iostream>
using namespace std;

int main() {
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    // Hiển thị kích thước phần tử
        cout << "Kích thước của mảng: " << sizeof(arr) << " byte" << endl;
    // Hiển thị tưfng phần tử và địa chị từng phần tử trong mảng
    for (int i = 0; i < 10;i++ ) {
        cout << "Phần tử arr[" << i << "] = " << arr[i] << " có địa chỉ: " << &arr[i] << endl;
    }
    return 0;
}