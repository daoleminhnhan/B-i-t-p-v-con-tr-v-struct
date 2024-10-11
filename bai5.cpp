#include <iostream>
#include <algorithm> 
using namespace std;

void sapXepDongGopTangDan(float* dongGop, int soLuong) {
    sort(dongGop, dongGop + soLuong); 
}

float tinhGiaTriTrungBinh(float* dongGop, int soLuong) {
    float tong = 0.0;
    for (float* ptr = dongGop; ptr < dongGop + soLuong; ++ptr) {
        tong += *ptr; 
    }
    return tong / soLuong;
}

int main() {
    int soLuong;

    do {
        cout << "Nhập số lượng đóng góp: ";
        cin >> soLuong;
        if (soLuong <= 0) {
            cout << "Số lượng đóng góp phải lớn hơn 0. Vui lòng nhập lại." << endl;
        }
    } while (soLuong <= 0);

    float* dongGop = new float[soLuong];

    for (int i = 0; i < soLuong; ++i) {
        do {
            cout << "Nhập giá trị đóng góp thứ " << i + 1 << ": ";
            cin >> *(dongGop + i); 
            if (*(dongGop + i) < 0) {
                cout << "Giá trị đóng góp không được âm. Vui lòng nhập lại." << endl;
            }
        } while (*(dongGop + i) < 0); 
    }

    sapXepDongGopTangDan(dongGop, soLuong);

    float giaTriTrungBinh = tinhGiaTriTrungBinh(dongGop, soLuong);

    cout << "\nDanh sách giá trị đóng góp đã sắp xếp theo thứ tự tăng dần:\n";
    for (float* ptr = dongGop; ptr < dongGop + soLuong; ++ptr) {
        cout << *ptr << " ";
    }
    cout << endl;

    cout << "Giá trị trung bình của các đóng góp: " << giaTriTrungBinh << endl;

    delete[] dongGop;

    return 0;
}
