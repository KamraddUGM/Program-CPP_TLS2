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

int main() {
    string teksAsli, teksEnkripsi;
    
    // Input teks dari user
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
    
    return 0;
}

