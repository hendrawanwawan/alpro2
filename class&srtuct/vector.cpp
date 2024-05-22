#include <iostream>
#include <vector>
using namespace std;

class Barang {
public:
    string nama;
    double harga;
    int stok;

    Barang(string nama, double harga, int stok) {
        this->nama = nama;
        this->harga = harga;
        this->stok = stok;
    }
};

class Toko {
private:
    vector<Barang> barangList;

public:
    void tambahBarang(string nama, double harga, int stok) {
        Barang barangBaru(nama, harga, stok);
        barangList.push_back(barangBaru);
        cout << "Barang '" << nama << "' telah ditambahkan.\n";
    }

    void hapusBarang(string nama) {
        for (auto it = barangList.begin(); it != barangList.end(); ++it) {
            if (it->nama == nama) {
                barangList.erase(it);
                cout << "Barang '" << nama << "' telah dihapus.\n";
                return;
            }
        }
        cout << "Barang '" << nama << "' tidak ditemukan.\n";
    }

    void beliBarang(string nama, int jumlah) {
        for (auto &barang : barangList) {
            if (barang.nama == nama) {
                if (barang.stok >= jumlah) {
                    barang.stok -= jumlah;
                    cout << "Anda telah membeli " << jumlah << " " << nama << ".\n";
                } else {
                    cout << "Stok barang '" << nama << "' tidak mencukupi.\n";
                }
                return;
            }
        }
        cout << "Barang '" << nama << "' tidak ditemukan.\n";
    }

    void tampilkanBarang() {
        if (barangList.empty()) {
            cout << "Tidak ada barang di toko.\n";
            return;
        }
        cout << "Daftar barang di toko:\n";
        for (const auto &barang : barangList) {
            cout << "Nama: " << barang.nama << ", Harga: " << barang.harga
                 << ", Stok: " << barang.stok << endl;
        }
    }
};

int main() {
    Toko toko;
    int pilihan;
    string nama;
    double harga;
    int stok, jumlah;

    do {
        cout << "\n1. Tambah Barang\n";
        cout << "2. Hapus Barang\n";
        cout << "3. Beli Barang\n";
        cout << "4. Tampilkan Daftar Barang\n";
        cout << "5. Selesai\n";
        cout << "Pilih menu: ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                cout << "Masukkan nama barang: ";
                cin >> nama;
                cout << "Masukkan harga barang: ";
                cin >> harga;
                cout << "Masukkan jumlah stok barang: ";
                cin >> stok;
                toko.tambahBarang(nama, harga, stok);
                break;
            case 2:
                cout << "Masukkan nama barang yang ingin dihapus: ";
                cin >> nama;
                toko.hapusBarang(nama);
                break;
            case 3:
                cout << "Masukkan nama barang yang ingin dibeli: ";
                cin >> nama;
                cout << "Masukkan jumlah barang yang ingin dibeli: ";
                cin >> jumlah;
                toko.beliBarang(nama, jumlah);
                break;
            case 4:
                toko.tampilkanBarang();
                break;
            case 5:
                cout << "Keluar dari program.\n";
                break;
            default:
                cout << "Pilihan tidak valid. Coba lagi.\n";
        }
    } while (pilihan != 5);

    return 0;
}


/*1. Class
Pengertian:
Class adalah tipe data buatan pengguna (user-defined) yang digunakan dalam pemrograman berorientasi objek (Object-Oriented Programming - OOP). Class berfungsi sebagai cetak biru (blueprint) atau template untuk membuat objek.

Struktur:
Class mendefinisikan atribut (data members) dan metode (member functions) yang dapat digunakan oleh objek yang dibuat dari class tersebut.
Fungsi:
Class digunakan untuk menyusun dan mengorganisasi kode dengan cara yang modular dan reusable. Ini mempermudah pengelolaan kode, pemeliharaan, dan pengembangan aplikasi yang lebih kompleks.

 2. Struct
Pengertian:
Struct adalah tipe data buatan pengguna yang mirip dengan class. Perbedaan utamanya adalah pada aksesibilitas default dari anggota-anggota struct yang bersifat public, sedangkan pada class bersifat private.

Struktur:
Struct biasanya digunakan untuk mengelompokkan beberapa variabel yang terkait menjadi satu unit.
 Fungsi:
Struct umumnya digunakan untuk tipe data sederhana yang tidak memerlukan enkapsulasi atau fungsi anggota yang kompleks. Struct sangat berguna untuk membuat tipe data yang hanya berisi data tanpa logika atau perilaku.

3. Pointer
Pengertian:
Pointer adalah variabel yang menyimpan alamat memori dari variabel lain. Dalam C++, pointer ditandai dengan tanda bintang (*) saat deklarasi.
 Fungsi:
Pointer memiliki berbagai kegunaan, termasuk:

Mengakses dan memanipulasi variabel di alamat memori tertentu.
Mengalokasikan memori secara dinamis dengan new dan delete.
Mengimplementasikan struktur data seperti linked list, stack, dan queue.
Mengirimkan argumen ke fungsi dengan cara referensi untuk efisiensi memori.
 Kesimpulan
Class adalah template untuk membuat objek dalam pemrograman berorientasi objek dan berisi atribut dan metode.
Struct mirip dengan class tetapi umumnya digunakan untuk tipe data sederhana dan memiliki anggota yang secara default public.
Pointer adalah variabel yang menyimpan alamat memori dari variabel lain, memungkinkan manipulasi langsung terhadap data dalam memori dan penggunaan memori dinamis.

 */