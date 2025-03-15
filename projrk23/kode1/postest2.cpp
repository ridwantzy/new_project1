// #include <iostream>
// #include <iomanip>
// #include <string>
// using namespace std;

// const int MAX_BARANG = 100;
// const int MAX_LOGIN_ATTEMPTS = 3;

// int main() {
//     string namaLogin = "user";
//     string nimLogin = "123456";
//     string barang[MAX_BARANG][3]; // Array multidimensi untuk menyimpan data barang [nama, jumlah, harga]
//     int jumlahBarang = 0;
//     bool running = true;

//     // Proses Login
//     int attempts = 0;
//     bool loginSuccess = false;
//     while (attempts < MAX_LOGIN_ATTEMPTS) {
//         string nama, nim;
//         cout << "Masukkan Nama: ";
//         cin >> nama;
//         cout << "Masukkan NIM: ";
//         cin >> nim;

//         if (nama == namaLogin && nim == nimLogin) {
//             cout << "Login berhasil!\n";
//             loginSuccess = true;
//             break;
//         } else {
//             attempts++;
//             cout << "Login gagal. Sisa percobaan: " << MAX_LOGIN_ATTEMPTS - attempts << "\n";
//         }
//     }

//     if (!loginSuccess) {
//         cout << "Anda telah melebihi batas percobaan login. Program berhenti.\n";
//         return 0;
//     }

//     // Program Utama
//     while (running) {
//         // Menampilkan Menu
//         cout << "\n=== MENU MANAJEMEN BARANG SEMBAKO ===\n";
//         cout << "1. Tambah Barang\n";
//         cout << "2. Lihat Barang\n";
//         cout << "3. Update Barang\n";
//         cout << "4. Hapus Barang\n";
//         cout << "5. Keluar\n";
//         cout << "Pilih menu: ";

//         int pilihan;
//         cin >> pilihan;

//         switch (pilihan) {
//             case 1: // Tambah Barang
//                 if (jumlahBarang < MAX_BARANG) {
//                     cout << "Masukkan Nama Barang: ";
//                     cin >> barang[jumlahBarang][0];
//                     cout << "Masukkan Jumlah Barang: ";
//                     cin >> barang[jumlahBarang][1];
//                     cout << "Masukkan Harga Barang: ";
//                     cin >> barang[jumlahBarang][2];
//                     jumlahBarang++;
//                     cout << "Barang berhasil ditambahkan!\n";
//                 } else {
//                     cout << "Kapasitas barang penuh!\n";
//                 }
//                 break;

//             case 2: // Lihat Barang
//                 if (jumlahBarang == 0) {
//                     cout << "Tidak ada barang yang tersedia.\n";
//                 } else {
//                     cout << "\n=== DAFTAR BARANG SEMBAKO ===\n";
//                     cout << setw(5) << "No" << setw(20) << "Nama Barang" << setw(10) << "Jumlah" << setw(10) << "Harga" << "\n";
//                     for (int i = 0; i < jumlahBarang; i++) {
//                         cout << setw(5) << i + 1 << setw(20) << barang[i][0] << setw(10) << barang[i][1] << setw(10) << barang[i][2] << "\n";
//                     }
//                 }
//                 break;

//             case 3: // Update Barang
//                 if (jumlahBarang > 0) {
//                     cout << "\n=== DAFTAR BARANG SEMBAKO ===\n";
//                     cout << setw(5) << "No" << setw(20) << "Nama Barang" << setw(10) << "Jumlah" << setw(10) << "Harga" << "\n";
//                     for (int i = 0; i < jumlahBarang; i++) {
//                         cout << setw(5) << i + 1 << setw(20) << barang[i][0] << setw(10) << barang[i][1] << setw(10) << barang[i][2] << "\n";
//                     }

//                     int index;
//                     cout << "Masukkan nomor barang yang ingin diupdate: ";
//                     cin >> index;
//                     if (index > 0 && index <= jumlahBarang) {
//                         cout << "Masukkan Nama Barang Baru: ";
//                         cin >> barang[index - 1][0];
//                         cout << "Masukkan Jumlah Barang Baru: ";
//                         cin >> barang[index - 1][1];
//                         cout << "Masukkan Harga Barang Baru: ";
//                         cin >> barang[index - 1][2];
//                         cout << "Barang berhasil diupdate!\n";
//                     } else {
//                         cout << "Nomor barang tidak valid.\n";
//                     }
//                 } else {
//                     cout << "Tidak ada barang yang tersedia.\n";
//                 }
//                 break;

//             case 4: // Hapus Barang
//                 if (jumlahBarang > 0) {
//                     cout << "\n=== DAFTAR BARANG SEMBAKO ===\n";
//                     cout << setw(5) << "No" << setw(20) << "Nama Barang" << setw(10) << "Jumlah" << setw(10) << "Harga" << "\n";
//                     for (int i = 0; i < jumlahBarang; i++) {
//                         cout << setw(5) << i + 1 << setw(20) << barang[i][0] << setw(10) << barang[i][1] << setw(10) << barang[i][2] << "\n";
//                     }

//                     int index;
//                     cout << "Masukkan nomor barang yang ingin dihapus: ";
//                     cin >> index;
//                     if (index > 0 && index <= jumlahBarang) {
//                         for (int i = index - 1; i < jumlahBarang - 1; i++) {
//                             barang[i][0] = barang[i + 1][0];
//                             barang[i][1] = barang[i + 1][1];
//                             barang[i][2] = barang[i + 1][2];
//                         }
//                         jumlahBarang--;
//                         cout << "Barang berhasil dihapus!\n";
//                     } else {
//                         cout << "Nomor barang tidak valid.\n";
//                     }
//                 } else {
//                     cout << "Tidak ada barang yang tersedia.\n";
//                 }
//                 break;

//             case 5: // Keluar
//                 running = false;
//                 cout << "Terima kasih telah menggunakan program.\n";
//                 break;

//             default:
//                 cout << "Pilihan tidak valid. Silakan coba lagi.\n";
//         }
//     }

//     return 0;
// }



#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

const int MAX_BARANG = 100;
int jumlahBarang = 0;

int main() {
    string namaLogin = "user";
    string nimLogin = "123456";
    string barang[MAX_BARANG][3]; // Array multidimensi untuk menyimpan data barang [nama, jumlah, harga]
    int jumlahBarang = 0;
    bool running = true;

    // Menambahkan data default
    barang[jumlahBarang][0] = "Beras";
    barang[jumlahBarang][1] = "50";
    barang[jumlahBarang][2] = "12000";
    jumlahBarang++;

    barang[jumlahBarang][0] = "Minyak Goreng";
    barang[jumlahBarang][1] = "30";
    barang[jumlahBarang][2] = "25000";
    jumlahBarang++;

    barang[jumlahBarang][0] = "Gula";
    barang[jumlahBarang][1] = "40";
    barang[jumlahBarang][2] = "15000";
    jumlahBarang++;

    // Proses Login
    const string username = "Muhammad Ridwanansyah Rahman";
    const string password = "2409106073";
    const int max_kesempatan = 3;
    int kesempatan = 0;

    while (kesempatan < max_kesempatan) {
        string input_username, input_password;
        system("cls");
        cout << "\n======================================" << endl;
        cout << "             Login Program          " << endl;
        cout << "======================================" << endl;
        cout << "Username: ";
        getline(cin, input_username);
        cout << "Password: ";
        getline(cin, input_password);

        if (input_username == username && input_password == password) {
            system("cls");
            cout << "\n======================================" << endl;
            cout << "             Login Berhasil          " << endl;
            cout << "======================================" << endl;
            cout << "Selamat datang, " << username << "!" << endl;
            cout << "Anda telah berhasil login." << endl;
            cout << "======================================" << endl;
            cout << "Klik Enter untuk melanjutkan...";
            cin.ignore();
            cin.get();
            break;
            
        } else {
            kesempatan++;
            cout << "Login gagal. Sisa percobaan: " << max_kesempatan - kesempatan << "\n" << endl;
            cout << "Klik Enter...";
            cin.ignore();
            cin.get();
        }
    }

    if (kesempatan == max_kesempatan) {
        system("cls");
        cout << "\n======================================" << endl;
        cout << "             Login Gagal          " << endl;
        cout << "======================================" << endl;
        cout << "Anda telah mencoba login " << max_kesempatan << " kali." << endl;
        cout << "Program berhenti karena batas" << endl;
        cout << "percobaan telah tercapai " << endl;
        cout << "======================================" << endl;
        return 0;
    }

    // Program Utama
    while (running) {
        // Menampilkan Menu
        cout << "\n=== MENU MANAJEMEN BARANG SEMBAKO ===\n";
        cout << "1. Tambah Barang\n";
        cout << "2. Lihat Barang\n";
        cout << "3. Update Barang\n";
        cout << "4. Hapus Barang\n";
        cout << "5. Keluar\n";
        cout << "Pilih menu: ";

        int pilihan;
        cin >> pilihan;

        switch (pilihan) {
            case 1: // Tambah Barang
                if (jumlahBarang < MAX_BARANG) {
                    cout << "Masukkan Nama Barang: ";
                    cin >> barang[jumlahBarang][0];
                    cout << "Masukkan Jumlah Barang: ";
                    cin >> barang[jumlahBarang][1];
                    cout << "Masukkan Harga Barang: ";
                    cin >> barang[jumlahBarang][2];
                    jumlahBarang++;
                    cout << "Barang berhasil ditambahkan!\n";
                } else {
                    cout << "Kapasitas barang penuh!\n";
                }
                break;

            case 2: // Lihat Barang
                if (jumlahBarang == 0) {
                    cout << "Tidak ada barang yang tersedia.\n";
                } else {
                    cout << "\n=== DAFTAR BARANG SEMBAKO ===\n";
                    cout << setw(5) << "No" << setw(20) << "Nama Barang" << setw(10) << "Jumlah" << setw(10) << "Harga" << "\n";
                    for (int i = 0; i < jumlahBarang; i++) {
                        cout << setw(5) << i + 1 << setw(20) << barang[i][0] << setw(10) << barang[i][1] << setw(10) << barang[i][2] << "\n";
                    }
                }
                break;

            case 3: // Update Barang
                if (jumlahBarang > 0) {
                    cout << "\n=== DAFTAR BARANG SEMBAKO ===\n";
                    cout << setw(5) << "No" << setw(20) << "Nama Barang" << setw(10) << "Jumlah" << setw(10) << "Harga" << "\n";
                    for (int i = 0; i < jumlahBarang; i++) {
                        cout << setw(5) << i + 1 << setw(20) << barang[i][0] << setw(10) << barang[i][1] << setw(10) << barang[i][2] << "\n";
                    }

                    int index;
                    cout << "Masukkan nomor barang yang ingin diupdate: ";
                    cin >> index;
                    if (index > 0 && index <= jumlahBarang) {
                        cout << "Masukkan Nama Barang Baru: ";
                        cin >> barang[index - 1][0];
                        cout << "Masukkan Jumlah Barang Baru: ";
                        cin >> barang[index - 1][1];
                        cout << "Masukkan Harga Barang Baru: ";
                        cin >> barang[index - 1][2];
                        cout << "Barang berhasil diupdate!\n";
                    } else {
                        cout << "Nomor barang tidak valid.\n";
                    }
                } else {
                    cout << "Tidak ada barang yang tersedia.\n";
                }
                break;

            case 4: // Hapus Barang
                if (jumlahBarang > 0) {
                    cout << "\n=== DAFTAR BARANG SEMBAKO ===\n";
                    cout << setw(5) << "No" << setw(20) << "Nama Barang" << setw(10) << "Jumlah" << setw(10) << "Harga" << "\n";
                    for (int i = 0; i < jumlahBarang; i++) {
                        cout << setw(5) << i + 1 << setw(20) << barang[i][0] << setw(10) << barang[i][1] << setw(10) << barang[i][2] << "\n";
                    }

                    int index;
                    cout << "Masukkan nomor barang yang ingin dihapus: ";
                    cin >> index;
                    if (index > 0 && index <= jumlahBarang) {
                        for (int i = index - 1; i < jumlahBarang - 1; i++) {
                            barang[i][0] = barang[i + 1][0];
                            barang[i][1] = barang[i + 1][1];
                            barang[i][2] = barang[i + 1][2];
                        }
                        jumlahBarang--;
                        cout << "Barang berhasil dihapus!\n";
                    } else {
                        cout << "Nomor barang tidak valid.\n";
                    }
                } else {
                    cout << "Tidak ada barang yang tersedia.\n";
                }
                break;

            case 5: // Keluar
                running = false;
                cout << "Terima kasih telah menggunakan program.\n";
                break;

            default:
                cout << "Pilihan tidak valid. Silakan coba lagi.\n";
        }
    }

    return 0;
}