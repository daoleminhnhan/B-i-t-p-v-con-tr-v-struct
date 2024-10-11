#include <iostream>
#include <algorithm> 
using namespace std;

void sapXepDiemTangDan(float* diem, int soLuongDiem) {
    sort(diem, diem + soLuongDiem); 
}

float tinhDiemTrungBinh(float* diem, int soLuongDiem) {
    float tong = 0.0;
 
    for (float* ptr = diem + 1; ptr < diem + soLuongDiem; ++ptr) {
        tong += *ptr;
    }

    return tong / (soLuongDiem - 1);
}

int main() {
    int soLuongDiem;

    do {
        cout << "Nhập số lượng điểm kiểm tra: ";
        cin >> soLuongDiem;
        if (soLuongDiem <= 1) {
            cout << "Số lượng điểm phải lớn hơn 1 để loại bỏ điểm thấp nhất. Vui lòng nhập lại." << endl;
        }
    } while (soLuongDiem <= 1);  
    

    float* diem = new float[soLuongDiem];

    for (int i = 0; i < soLuongDiem; ++i) {
        do {
            cout << "Nhập điểm kiểm tra thứ " << i + 1 << ": ";
            cin >> *(diem + i); 
            if (*(diem + i) < 0) {
                cout << "Điểm không được âm. Vui lòng nhập lại." << endl;
            }
        } while (*(diem + i) < 0); 
    }

    sapXepDiemTangDan(diem, soLuongDiem);
 
    float diemTrungBinh = tinhDiemTrungBinh(diem, soLuongDiem);

    cout << "\nDanh sách điểm đã sắp xếp theo thứ tự tăng dần (điểm thấp nhất sẽ bị loại bỏ):\n";
    for (float* ptr = diem; ptr < diem + soLuongDiem; ++ptr) {
        cout << *ptr << " ";
    }
    cout << endl;

    cout << "Điểm trung bình (sau khi loại bỏ điểm thấp nhất): " << diemTrungBinh << endl;

    delete[] diem;
    
    return 0;
}
