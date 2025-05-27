#include <iostream>

struct mahasiswa {
  std::string nim;
  std::string nama;
  std::string alamat;
  float ipk;
};

int main() 
{
  mahasiswa helmi;
  helmi.nim = "c030324037";
  helmi.nama = "Muhammad Helmi";
  helmi.alamat = "Sungai Miai";
  helmi.ipk = 2.30;

  std::cout << helmi.nim << "\n";
  std::cout << helmi.nama << "\n";
  std::cout << helmi.alamat << "\n";
  std::cout << helmi.ipk << "\n";
  
  return 0;
}
