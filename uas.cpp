#include <iostream>
#include <string>
using namespace std;

const int JUMLAH_MENU = 5;

// Data menu restoran
string namaMenu[JUMLAH_MENU] = {
    "Nasi Goreng Spesial",
    "Ayam Geprek Sambal Ijo",
    "Mie Ayam Komplit",
    "Es Teh Manis",
    "Jus Alpukat"
};

int hargaMenu[JUMLAH_MENU] = {25000, 20000, 18000, 5000, 10000};
int jumlahPesanan[JUMLAH_MENU] = {0};
// =============================
//       FUNGSI-FUNGSI
// =============================

void tampilkanHeader() {
    cout << "=====================================\n";
    cout << "   SISTEM PEMESANAN RESTORAN - DineXpress\n";
    cout << "=====================================\n";
}

void tampilkanMenu() {
    cout << "\n=============================\n";
    cout << "     MENU RESTORAN DineXpress\n";
    cout << "=============================\n";
    for (int i = 0; i < JUMLAH_MENU; i++) {
        cout << i + 1 << ". " << namaMenu[i] << " - Rp " << hargaMenu[i] << endl;
    }
    cout << "=============================\n";
}
