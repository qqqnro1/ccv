#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(static_cast<unsigned int>(time(0))); // Khoi tao seed cho viec tao so ngau nhien

    int money = 100000; // So tien ban dau cua nguoi choi
    int betAmount; // So tien cuoc
    char betType; // Lua chon cuoc (chan/le hoac tai/xiu)
    int number; // So ngau nhien tu 1 den 100

    cout << "Chao mung den voi tro choi dat cuoc!\n";

    while (money > 0) {
        cout << "Ban co " << money << " tien. Ban muon cuoc bao nhieu? ";
        cin >> betAmount;

        if (betAmount > money || betAmount <= 1000) {
            cout << "So tien cuoc khong hop le.\n";
            continue;
        }

        cout << "Ban muon dat cuoc cho chan (c), le (l) hay tai (t)/xiu (x)? ";
        cin >> betType;

        // Sinh so ngau nhien tu 1 den 100
        number = rand() % 100 + 1;

        // Kiem tra ket qua va xu ly cuoc
        if ((number % 2 == 0 && (betType == 'c' || betType == 'C')) ||
            (number % 2 != 0 && (betType == 'l' || betType == 'L')) ||
            (number <= 50 && (betType == 'x' || betType == 'X')) ||
            (number > 50 && (betType == 't' || betType == 'T'))) {
            cout << "So ngau nhien la: " << number << ". Ban da thang!\n";
            money += betAmount * 1.9; // Neu chon tai/xiu, nhan lai so tien cuoc va them 90% so tien cuoc
        } else {
            cout << "So ngau nhien la: " << number << ". Ban da thua!\n";
            money -= betAmount; // Tru so tien cuoc neu khong doan dung
        }
    }

    cout << "Ban da het tien. Ket thuc tro choi!\n";
    git init
git add .
git commit -m "Initial commit"
git remote add origin <https://github.com/qqqnro1/ccc.git>
git push -u origin master


    return 0;
}
