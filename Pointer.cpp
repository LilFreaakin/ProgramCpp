#include <iostream>
using namespace std;

int main() {
   int jumlahMahasiswa;
   cout << "Masukkan jumlah mahasiswa: ";
   cin >> jumlahMahasiswa;

   char** namaMahasiswa = new char*[jumlahMahasiswa];  // Membuat array pointer bertipe char

   cin.ignore();  // Membersihkan buffer
   for (int i = 0; i < jumlahMahasiswa; i++) {
      cout << "Masukkan nama mahasiswa ke-" << i+1 << ": ";
      string nama;
      getline(cin, nama);

      // Mengalokasikan memori untuk menyimpan nama mahasiswa dalam bentuk string C-style
      namaMahasiswa[i] = new char[nama.length() + 1];
      strcpy(namaMahasiswa[i], nama.c_str());
   }

   cout << endl << "Daftar nama mahasiswa:" << endl;
   for (int i = 0; i < jumlahMahasiswa; i++) {
      cout << "Mahasiswa ke-" << i+1 << ": " << namaMahasiswa[i] << endl;
   }

   // Mengehapus memori yang dialokasikan
   for (int i = 0; i < jumlahMahasiswa; i++) {
      delete[] namaMahasiswa[i];
   }
   delete[] namaMahasiswa;

   return 0;
}

