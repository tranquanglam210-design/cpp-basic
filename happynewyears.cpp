#include <iostream>
#include <windows.h> // Thư viện để dùng hàm Sleep
#include <cstdlib>   // Thư viện để dùng hàm system("cls")

using namespace std;

int main() {
    int seconds;

    cout << "Nhap so giay muon dem nguoc: ";
    cin >> seconds;

    while (seconds >= 0) {
        system("cls"); // Xóa màn hình để tạo hiệu ứng đếm tại chỗ

        int mins = seconds / 60;
        int secs = seconds % 60;


        cout << "    cung dem nguoc nhe !      " << endl;
        cout << "         " << (mins < 10 ? "0" : "") << mins << ":"
                        << (secs < 10 ? "0" : "") << secs << endl;


        Sleep(1000); // Tạm dừng chương trình trong 1000 miligiây (1 giây)
        seconds--;
    }

    if(seconds<0){
            system("cls");
            string text = "happy new year !";
            system("cls");
            for (size_t i = 0; i < text.length(); i++) {
        cout << text[i] << flush; // In từng ký tự và đẩy dữ liệu ra màn hình ngay lập tức
        Sleep(100); // Tạm dừng 100 miligiây (0.1 giây) trước khi in chữ tiếp theo
            }
    }
    return 0;
}
