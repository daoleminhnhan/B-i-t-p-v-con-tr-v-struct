#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

void sapXepDiemVaTen(float* diem, string* ten, int soLuongDiem) {
    for (int i = 0; i < soLuongDiem - 1; ++i) {
        for (int j = i + 1; j < soLuongDiem; ++j) {
            if (*(diem + i) > *(diem + j)) {
        
                swap(*(diem + i), *(diem + j));
                swap(*(ten + i), *(ten + j));
            }
        }
    }
}

float tinhDiemTrungBinh(float* diem, int soLuongDiem) {
    float tong = 0.0;
    for (float* ptr = diem; ptr < diem + soLuongDiem; ++ptr) {
        tong += *ptr;
    }
    return tong / soLuongDiem;
}

int main() {
    int soLuongDiem;

    do {
        cout << "Nhập số lượng học sinh kiểm tra: ";
        cin >> soLuongDiem;
        if (soLuongDiem <= 0) {
            cout << "Số lượng học sinh phải lớn hơn 0. Vui lòng nhập lại." << endl;
        }
    } while (soLuongDiem <= 0);

    float* diem = new float[soLuongDiem];
    string* ten = new string[soLuongDiem];

    for (int i = 0; i < soLuongDiem; ++i) {
        cout << "Nhập tên học sinh thứ " << i + 1 << ": ";
        cin >> *(ten + i); 

        do {
            cout << "Nhập điểm kiểm tra của " << *(ten + i) << ": ";
            cin >> *(diem + i);  
            if (*(diem + i) < 0) {
                cout << "Điểm không được âm. Vui lòng nhập lại." << endl;
            }
        } while (*(diem + i) < 0); 
    }

    sapXepDiemVaTen(diem, ten, soLuongDiem);

    float diemTrungBinh = tinhDiemTrungBinh(diem, soLuongDiem);

    cout << "\nDanh sách học sinh và điểm đã sắp xếp theo thứ tự tăng dần:\n";
    for (int i = 0; i < soLuongDiem; ++i) {
        cout << *(ten + i) << ": " << *(diem + i) << endl;
    }

    cout << "\nĐiểm trung bình: " << diemTrungBinh << endl;

    delete[] diem;
    delete[] ten;
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

// Hàm sắp xếp điểm và tên học sinh theo thứ tự giảm dần của điểm
void sapXepDiemVaTenGiamDan(float* diem, string* ten, int soLuongDiem) {
    for (int i = 0; i < soLuongDiem - 1; ++i) {
        for (int j = i + 1; j < soLuongDiem; ++j) {
            if (*(diem + i) < *(diem + j)) {
                // Hoán đổi điểm
                swap(*(diem + i), *(diem + j));
                // Hoán đổi tên tương ứng
                swap(*(ten + i), *(ten + j));
            }
        }
    }
}

// Hàm tính điểm trung bình
float tinhDiemTrungBinh(float* diem, int soLuongDiem) {
    float tong = 0.0;
    for (float* ptr = diem; ptr < diem + soLuongDiem; ++ptr) {
        tong += *ptr;
    }
    return tong / soLuongDiem;
}

int main() {
    int soLuongDiem;

    // Nhập số lượng học sinh kiểm tra
    do {
        cout << "Nhập số lượng học sinh kiểm tra: ";
        cin >> soLuongDiem;
        if (soLuongDiem <= 0) {
            cout << "Số lượng học sinh phải lớn hơn 0. Vui lòng nhập lại." << endl;
        }
    } while (soLuongDiem <= 0);

    // Khởi tạo mảng động để chứa tên và điểm học sinh
    float* diem = new float[soLuongDiem];
    string* ten = new string[soLuongDiem];

    // Nhập tên và điểm của từng học sinh
    for (int i = 0; i < soLuongDiem; ++i) {
        cout << "Nhập tên học sinh thứ " << i + 1 << ": ";
        cin >> *(ten + i);  // Nhập tên học sinh

        do {
            cout << "Nhập điểm kiểm tra của " << *(ten + i) << ": ";
            cin >> *(diem + i);  // Nhập điểm của học sinh đó
            if (*(diem + i) < 0) {
                cout << "Điểm không được âm. Vui lòng nhập lại." << endl;
            }
        } while (*(diem + i) < 0); // Không chấp nhận điểm âm
    }

    // Sắp xếp điểm và tên theo thứ tự giảm dần của điểm
    sapXepDiemVaTenGiamDan(diem, ten, soLuongDiem);

    // Tính điểm trung bình
    float diemTrungBinh = tinhDiemTrungBinh(diem, soLuongDiem);

    // Hiển thị danh sách học sinh và điểm đã sắp xếp
    cout << "\nDanh sách học sinh và điểm đã sắp xếp theo thứ tự giảm dần:\n";
    for (int i = 0; i < soLuongDiem; ++i) {
        cout << *(ten + i) << ": " << *(diem + i) << endl;
    }

    // Hiển thị điểm trung bình
    cout << "\nĐiểm trung bình: " << diemTrungBinh << endl;

    // Giải phóng bộ nhớ đã cấp phát động
    delete[] diem;
    delete[] ten;

    return 0;
}
    return 0;
}
