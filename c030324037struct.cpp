#include <iostream>
#include <memory>


// data mahasiswa
struct mahasiswa {
  std::string nim;
  std::string nama;
  std::string alamat;
  float ipk;
};


int main() 
{
  // Inisialisasi mahasiswa menggunakan smart pointer
  std::unique_ptr<mahasiswa> ptrMahasiswa = std::make_unique<mahasiswa>();

  // Assign data mahasiswa
  ptrMahasiswa -> nim = "C030324037";
  ptrMahasiswa -> nama = "Muhammad Helmi";
  ptrMahasiswa -> alamat = "Sungai Miai";
  ptrMahasiswa -> ipk = 2.3;

  // Menampilkan Value dari data mahasiswa
  std::cout << ptrMahasiswa -> nama << std::endl;
  std::cout << ptrMahasiswa -> nim << std::endl;
  std::cout << ptrMahasiswa -> alamat << std::endl;
  std::cout << ptrMahasiswa -> ipk << std::endl;

  return 0;
}
