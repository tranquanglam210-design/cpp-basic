#include <iostream>
#include <windows.h> // Thư viện để dùng hàm Sleep và system("cls")

using namespace std;

int main() {
    int h = 0, m = 0, s = 0;

    cout << "--- DONG HO BAM GIO ---" << endl;
    cout << "Nhan bat ky phim nao de bat dau..." << endl;
    system("pause > nul"); // Đợi người dùng nhấn phím

    while (true) {
        // Xóa màn hình cũ để cập nhật thời gian mới
        system("cls");

        // Hiển thị định dạng HH:MM:SS
        cout << "Thoi gian: ";
        if (h < 10) cout << "0"; cout << h << ":";
        if (m < 10) cout << "0"; cout << m << ":";
        if (s < 10) cout << "0"; cout << s << endl;

        // Tăng giây
        s++;

        // Xử lý khi đủ 60 giây/60 phút
        if (s == 60) {
            m++;
            s = 0;
        }
        if (m == 60) {
            h++;
            m = 0;
        }

        // Tạm dừng chương trình 1000 miligiây (1 giây)
        Sleep(1000);
    }

    return 0;
}
