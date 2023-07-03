#include <iostream>
#include <cstring>

int main() {
    int jumlahMahasiswa;
    std::cout << "Input jumlah mahasiswa: ";
    std::cin >> jumlahMahasiswa;

    char** namaMahasiswa = new char*[jumlahMahasiswa];

    for (int i = 0; i < jumlahMahasiswa; i++) {
        char nama[100];
        std::cout << "Input nama mahasiswa " << i+1 << ": ";
        std::cin.ignore();
        std::cin.getline(nama, 100);

        namaMahasiswa[i] = new char[strlen(nama) + 1];
        strcpy(namaMahasiswa[i], nama);
    }

    std::cout << "\nData Mahasiswa:\n\n";
    for (int i = 0; i < jumlahMahasiswa; i++) {
        std::cout << i+1 << ". " << namaMahasiswa[i] << "\n";
    }

    // Dealokasi memori
    for (int i = 0; i < jumlahMahasiswa; i++) {
        delete[] namaMahasiswa[i];
    }
    delete[] namaMahasiswa;

    return 0;
}

// MUHAMMAD AFIIF YUNIARDHI - 22040700048

