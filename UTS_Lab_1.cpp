/*Judul : Program Mengubah Inputan Integer menjadi String (Soal No.1)
  Nama  : Ivanny Putri Marianto
  NIM   : 221401101
  Lab   : Algoritma dan Pemrograman 6*/

#include <iostream>
using namespace std;

int main() {
  system("CLS");
  int angka, angka1, jumlah;

  cout << "Masukkan angka pertama : ";
  cin >> angka;
  
  cout << "Masukkan angka kedua   : ";
  cin >> angka1;

  jumlah = angka+angka1;

  string str_angka = to_string(angka);
  string str_angka1 = to_string(angka1);

  string penggabungan_str = str_angka + str_angka1;
  cout << "Jumlah kedua angka (dalam integer) : " << jumlah << endl;
  cout << "Nilai  kedua angka (dalam string)  : " << penggabungan_str << endl;
}