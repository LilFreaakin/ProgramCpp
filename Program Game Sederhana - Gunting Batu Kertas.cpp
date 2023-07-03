#include <iostream>
#include <cstdlib>
#include <ctime>

// Fungsi untuk menghasilkan pilihan komputer secara acak
int generateComputerChoice() {
    // Menghasilkan angka acak antara 0 hingga 2
    return rand() % 3;
}

int main() {
    std::string choices[] = { "Gunting", "Batu", "Kertas" };
    int playerChoice, computerChoice;
    char playAgain;
    
    std::cout << "Selamat datang di permainan Gunting, Batu, Kertas!" << std::endl;
    
    do {
        std::cout << "Pilih tanganmu: " << std::endl;
        std::cout << "0. Gunting" << std::endl;
        std::cout << "1. Batu" << std::endl;
        std::cout << "2. Kertas" << std::endl;
        std::cout << "Masukkan pilihan (0-2): ";
        std::cin >> playerChoice;
        
        // Validasi input pemain
        if (playerChoice < 0 || playerChoice > 2) {
            std::cout << "Input tidak valid. Silakan coba lagi." << std::endl;
            continue;
        }
        
        // Menghasilkan pilihan komputer
        srand(time(0)); // Menginisialisasi seed untuk angka acak berdasarkan waktu saat ini
        computerChoice = generateComputerChoice();
        
        std::cout << "Pemain memilih: " << choices[playerChoice] << std::endl;
        std::cout << "Komputer memilih: " << choices[computerChoice] << std::endl;
        
        // Menentukan pemenang
        if (playerChoice == computerChoice) {
            std::cout << "Hasil: Seri!" << std::endl;
        } else if ((playerChoice == 0 && computerChoice == 2) ||
                   (playerChoice == 1 && computerChoice == 0) ||
                   (playerChoice == 2 && computerChoice == 1)) {
            std::cout << "Hasil: Kamu Menang!" << std::endl;
        } else {
            std::cout << "Hasil: Kamu Kalah!" << std::endl;
        }
        
        std::cout << "Apakah Anda ingin bermain lagi? (y/n): ";
        std::cin >> playAgain;
        
    } while (playAgain == 'y' || playAgain == 'Y');
    
    std::cout << "Terima kasih telah bermain!" << std::endl;
    
    return 0;
}

