#include <iostream> // Library untuk input & output
using namespace std; // supaya tidak menulis std: setiap kali

int main() { // fungsi utama program, program di mulai dari sini
    string nama; // Variabel untuk menyimpan nama karyawan
    int golongan, anak, gajipokok, tunjangan = 0, pajak, gajitotal; // Variabel untuk menyimpan golongan, jumlah anak, gaji pokok, tunjangan, pajak, dan gaji total

    cout << "Masukkan nama Anda: "; // Meminta input nama karyawan
    getline(cin, nama); // Menggunakan getline untuk membaca nama lengkap yang mungkin mengandung spasi

    cout << "Masukkan golongan (1, 2, 3): "; // Meminta input golongan karyawan
    cin >> golongan; // Membaca golongan yang dimasukkan oleh usernya 

    if (golongan == 1) { // 3 ini untuk menentukan gaji pokoknya
        gajipokok = 5000000;
    } else if (golongan == 2) {
        gajipokok = 3000000;
    } else if (golongan == 3) {
        gajipokok = 2500000;
    } else {
        cout << "Golongan tidak valid!" << endl; // Kalau tidak sesuai nanti bakal menampilkan ini
        return 0;
    }

    cout << "Masukkan jumlah anak: "; // Ini 2 untuk mengetahui jumlah anak yang dimiliki karyawan
    cin >> anak;

    if (anak == 1 || anak == 2) { // bagian ini untuk menentukan tunjangan berdasarkan jumlah anak
        tunjangan = anak * 500000;
    } else if (anak > 2) {
        tunjangan = 750000;
    }

    pajak = 0.05 * gajipokok; // Menghitung pajak sebesar 5% dari gaji pokok

    gajitotal = (gajipokok - pajak) + tunjangan; // Menghitung gaji total dengan mengurangi pajak dari gaji pokok dan menambahkan tunjangan

    cout << "Gaji Total: Rp. " << gajitotal << ",-" << endl; // Menampilkan gaji total yang telah dihitung kepada user

    return 0; // program selesai
}