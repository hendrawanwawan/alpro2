#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Barang {
private:
    string nama;
    double harga;
    int stok;

public:
    Barang(string _nama, double _harga, int _stok) : nama(_nama), harga(_harga), stok(_stok) {}

    string getNama() const { return nama; }
    double getHarga() const { return harga; }
    int getStok() const { return stok; }

    void kurangiStok(int jumlah) {
        if (jumlah <= stok)
            stok -= jumlah;
        else
            cout << "Stok tidak mencukupi!" << endl;
    }
};

class Toko {
private:
    vector<Barang> daftarBarang;

public:
    void tambahBarang(const Barang& barang) {
        daftarBarang.push_back(barang);
    }

    void hapusBarang(const string& nama) {
        for (auto it = daftarBarang.begin(); it != daftarBarang.end(); ++it) {
            if (it->getNama() == nama) {
                daftarBarang.erase(it);
                cout << "Barang " << nama << " telah dihapus." << endl;
                return;
            }
        }
        cout << "Barang tidak ditemukan." << endl;
    }

    void beliBarang(const string& nama, int jumlah) {
        for (auto& barang : daftarBarang) {
            if (barang.getNama() == nama) {
                barang.kurangiStok(jumlah);
                return;
            }
        }
        cout << "Barang tidak ditemukan." << endl;
    }

    void tampilkanDaftarBarang() {
        cout << "Daftar Barang:" << endl;
        for (const auto& barang : daftarBarang) {
            cout << "Nama: " << barang.getNama() << ", Harga: " << barang.getHarga() << ", Stok: " << barang.getStok() << endl;
        }
    }
};

int main() {
    Toko toko;

    // Menambahkan beberapa barang ke toko
    toko.tambahBarang(Barang("Pensil", 2000, 50));
    toko.tambahBarang(Barang("Buku", 5000, 30));
    toko.tambahBarang(Barang("Penghapus", 1000, 20));

    // Menampilkan daftar barang
    toko.tampilkanDaftarBarang();

    // Membeli beberapa barang
    toko.beliBarang("Pensil", 10);
    toko.beliBarang("Buku", 5);

    // Menampilkan daftar barang setelah pembelian
    toko.tampilkanDaftarBarang();

    return 0;
}
