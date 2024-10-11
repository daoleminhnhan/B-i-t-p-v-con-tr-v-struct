#include <iostream>
#include <algorithm>  // Thư viện hỗ trợ hàm sort
#include <iomanip>    // Thư viện để định dạng đầu ra

using namespace std;

// Hàm sắp xếp mảng điểm theo thứ tự tăng dần
void sapXepDiem(double *diem, int soLuong) {
    // Sử dụng std::sort với con trỏ bắt đầu và kết thúc của mảng
    sort(diem, diem + soLuong);
}

// Hàm tính toán và hiển thị điểm trung bình
void tinhDiemTrungBinh(double *diem, int soLuong) {
    double tong = 0;
    for (double *p = diem; p < diem + soLuong; ++p) {
        tong += *p;
    }
    double trungBinh = tong / soLuong;
    cout << "Diem trung binh: " << fixed << setprecision(2) << trungBinh << endl;
}

int main() {
    int soLuong;
    
    // Nhập số lượng điểm kiểm tra
    cout << "Nhap so luong diem kiem tra: ";
    cin >> soLuong;
    
    // Phân bổ động một mảng chứa số lượng điểm kiểm tra (số thực)
    double *diem = new double[soLuong];
    
    // Nhập điểm kiểm tra (số thực)
    for (int i = 0; i < soLuong; i++) {
        cout << "Nhap diem thu " << i + 1 << ": ";
        cin >> *(diem + i);
    }
    
    // Gọi hàm sắp xếp điểm
    sapXepDiem(diem, soLuong);
    
    // Gọi hàm tính và hiển thị điểm trung bình
    tinhDiemTrungBinh(diem, soLuong);
    
    // Hiển thị danh sách điểm đã sắp xếp
    cout << "Danh sach diem da sap xep: ";
    for (double *p = diem; p < diem + soLuong; ++p) {
        cout << *p << " ";
    }
    cout << endl;
    
    // Giải phóng bộ nhớ đã cấp phát
    delete[] diem;
    
    return 0;
}
