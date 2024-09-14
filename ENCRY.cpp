#include <iostream>
#include <fstream>  // Library untuk file handling
#include <string>   // Library untuk string

using namespace std;

// Fungsi enkripsi dengan shifting bit ASCII +1
string enkripsi(string teks) {
    string hasil = "";
    for (int i = 0; i < teks.length(); i++) {
        hasil += (char)(teks[i] + 1);  // Shift bit ASCII +1
    }
    return hasil;
}

// Fungsi dekripsi dengan shifting bit ASCII -1
string dekripsi(string teks) {
    string hasil = "";
    for (int i = 0; i < teks.length(); i++) {
        hasil += (char)(teks[i] - 1);  // Shift bit ASCII -1
    }
    return hasil;
}

int main() {
    string teksAsli, teksEnkripsi, teksDekripsi;
    int pilihan;
    
    // Pilihan mode: Enkripsi atau Dekripsi
    cout << "Pilih mode:\n1. Enkripsi\n2. Dekripsi\nMasukkan pilihan: ";
    cin >> pilihan;
    cin.ignore();  // Mengabaikan newline setelah input angka
    
    // Input teks dari user
    if (pilihan == 1) {
        cout << "Masukkan teks yang ingin dienkripsi: ";
        getline(cin, teksAsli);
        
        // Proses enkripsi
        teksEnkripsi = enkripsi(teksAsli);
        
        // Output hasil enkripsi ke terminal
        cout << "Teks terenkripsi: " << teksEnkripsi << endl;
        
        // Menyimpan hasil enkripsi ke dalam file
        ofstream outFile("hasil_enkripsi.txt");
        if (outFile.is_open()) {
            outFile << "Teks asli: " << teksAsli << endl;
            outFile << "Teks terenkripsi: " << teksEnkripsi << endl;
            outFile.close();
            cout << "Hasil enkripsi disimpan di file 'hasil_enkripsi.txt'" << endl;
        } else {
            cout << "Gagal membuka file untuk menulis." << endl;
        }
    } else if (pilihan == 2) {
        cout << "Masukkan teks yang ingin didekripsi: ";
        getline(cin, teksEnkripsi);
        
        // Proses dekripsi
        teksDekripsi = dekripsi(teksEnkripsi);
        
        // Output hasil dekripsi ke terminal
        cout << "Teks setelah dekripsi: " << teksDekripsi << endl;
        
        // Menyimpan hasil dekripsi ke dalam file
        ofstream outFile("hasil_dekripsi.txt");
        if (outFile.is_open()) {
            outFile << "Teks terenkripsi: " << teksEnkripsi << endl;
            outFile << "Teks setelah dekripsi: " << teksDekripsi << endl;
            outFile.close();
            cout << "Hasil dekripsi disimpan di file 'hasil_dekripsi.txt'" << endl;
        } else {
            cout << "Gagal membuka file untuk menulis." << endl;
        }
    } else {
        cout << "Pilihan tidak valid." << endl;
    }
    
    return 0;
}

