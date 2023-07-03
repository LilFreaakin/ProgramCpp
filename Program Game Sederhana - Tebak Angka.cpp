#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    int secretNumber, guess;
    char playAgain;

    std::cout << "Selamat datang di permainan Tebak Angka!" << std::endl;

    do {
        // Menghasilkan angka acak antara 1 hingga 10
        srand(time(0)); // Menginisialisasi seed untuk angka acak berdasarkan waktu saat ini
        secretNumber = rand() % 10 + 1;

        std::cout << "Silahkan Pilih Angka 1 Sampai 10. Coba tebak angkanya!" << std::endl;

        int tries = 0;
        bool guessed = false;

        while (!guessed) {
            std::cout << "Masukkan tebakan Anda: ";
            std::cin >> guess;

            tries++;

            if (guess == secretNumber) {
                std::cout << "Selamat! Anda berhasil menebak angka tersebut dengan benar dalam " << tries << " tebakan." << std::endl;
                guessed = true;
            } else if (guess < secretNumber) {
                std::cout << "Tebakan Anda terlalu rendah. Coba lagi!" << std::endl;
            } else {
                std::cout << "Tebakan Anda terlalu tinggi. Coba lagi!" << std::endl;
            }
        }

        std::cout << "Apakah Anda ingin bermain lagi? (y/n): ";
        std::cin >> playAgain;

    } while (playAgain == 'y' || playAgain == 'Y');

    std::cout << "Terima kasih telah bermain!" << std::endl;

    return 0;
}

