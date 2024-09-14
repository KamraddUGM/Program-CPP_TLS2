# Program-CPP_TLS2

## Deskripsi Singkat
Program ini merupakan implementasi sederhana untuk melakukan enkripsi dan dekripsi teks dengan cara menggeser bit ASCII setiap karakter. Setiap karakter pada input akan dienkripsi dengan cara menggeser nilai bit ASCII-nya sebanyak satu posisi ke kanan (+1), dan dekripsi dilakukan dengan menggeser bit ASCII satu posisi ke kiri (-1). Program ini berbasis teks dan menerima input melalui file teks, lalu menghasilkan output ke file teks lain.

## Fitur
- **Enkripsi**: Menggeser bit ASCII karakter sebanyak +1.
- **Dekripsi**: Mengembalikan bit ASCII karakter dengan shift -1.
- Input dan output dilakukan melalui file `.txt`.
- Program memiliki satu **conditional statement** untuk memilih antara mode enkripsi dan dekripsi.

## Cara Kerja
1. Program menerima file teks berisi pesan untuk dienkripsi atau didekripsi.
2. Pengguna dapat memilih mode **enkripsi** atau **dekripsi**.
3. Hasilnya akan disimpan ke dalam file teks keluaran.

## Cara Menjalankan
1. Clone repository ini.
2. Buka project menggunakan IDE atau compiler C++ favoritmu.
3. Kompilasi program, kemudian jalankan.
4. Program akan meminta nama file input dan output.
5. Pilih mode enkripsi atau dekripsi.
6. Lihat hasil enkripsi atau dekripsi di file output yang ditentukan.

## Contoh Penggunaan
- Input File (`input.txt`):
  ```
  Halo Dunia!
  ```
- Mode Enkripsi akan menghasilkan:
  ```
  Ibmp!Evnjo"
  ```
- Mode Dekripsi akan mengembalikan teks asli.

## Manfaat Program
- Program ini berguna untuk melatih pemahaman dasar mengenai operasi bit dalam C++.
- Membantu memahami konsep enkripsi sederhana untuk pemrosesan teks berbasis ASCII.
  
## Struktur Repository
- **main.cpp**: File utama yang berisi kode sumber program.
- **README.md**: Deskripsi dan panduan penggunaan program.

## Kontributor
- Gede Kertya Pramana
- Kelompok: Orsted



Pastikan kamu menyesuaikan dengan informasi aktual seperti nama dan kelompok di bagian kontributor, serta detail lainnya jika perlu.
