#include <iostream>

using namespace std;

int main() {
    string nama,pass;
    while (true) {
        // while loop berfungsi di kode ini untuk jika pengguna salah input, program ini masih berjalan.
        cout << "Masukan Nama: ";
        cin >> nama;

        cout << "Masukan Password: ";
        cin >> pass;

        if (nama == "udin" && pass == "udin123") { // tanda && untuk setiap user dan password, true && true => haslinya: true, btw
            cout << "Kamu masuk sebagai: " << nama << endl;
            break; // memberhentikan program jika login sudah benar
        } else if (nama == "maya" && pass == "/dev/sda/") {
            cout << "Kamu masuk sebagai admin: " << nama << endl;
            break;
        } else {
            cout << "Nama atau password salah." << endl;
        }
    }
    return 0;
}
