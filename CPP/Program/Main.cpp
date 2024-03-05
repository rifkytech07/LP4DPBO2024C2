/*Saya Muhammad Rifky Afandi dengan NIM 2202346 mengerjakan LP4 dalam mata kuliah 
Desain Pemrograman Berbasis Objek untuk keberkahanNya maka saya tidak 
melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/


// Memasukan library yang digunakan ke dalam fungsi main (program utama)
#include <bits/stdc++.h>
#include "Car.cpp"
#include "Motorcycle.cpp"
#include "Vehicle.cpp"
#include "Parkinglot.cpp"
#include "Garage.cpp"

// Deklarasi namespace
using namespace std;

int main()
{

    ios::sync_with_stdio(0); // Sinkronisasi Library C++, dan juga bisa Librarry C
    cin.tie();
   
    /* Lakukan Inisiasi */
    Vehicle kendaraan("D 4554 CIE", "HONDA NSX", "2018", "SILVER");
    Car mobil("2 Kursi", "2 Pintu");
    Parkinglot parkir("1000", "3", kendaraan);
    Garage garasi("Parkiran DT", "180 m^2", "Ke-1", parkir);


    Vehicle kendaraan2("D 4554 BAM", "YAMAHA YZF R1", "2022", "BLUE");
    Motorcycle motor("Superbike", "600 cc");
    Parkinglot parkir2("1000", "3", kendaraan2);
    Garage garasi2("Parkiran UPI", "300 m^2", "Ke-2", parkir2);

   
    // Menampilkan Informasi Garasi
    cout << "Daftar Kendaraan " << garasi.getDaftar() << "\n\n";
    cout << "Merk Mobil: " << garasi.getParkir().getKendaraan().getMerk() << endl;
    cout << "Plat Nomor: " << garasi.getParkir().getKendaraan().getPlatNomor() << endl;
    cout << "Tahun Produksi: " << garasi.getParkir().getKendaraan().getTahunProduksi() << endl;
    cout << "Warna: " << garasi.getParkir().getKendaraan().getWarna() << endl;
    cout << "Jumlah Kursi: " << mobil.getjumlahKursi() << endl;
    cout << "Jumlah Pintu: " << mobil.getJumlahPintu() << endl;
    cout << "Lokasi Parkir: " << garasi.getNama() << endl;
    cout << "Luas Parkir: " << garasi.getLuas() << endl;
    cout << "Kapasitas parkir: " << garasi.getParkir().getKapasitas() << endl;
    cout << "Jumlah Kendaraan Saat ini: " << garasi.getParkir().getjumlahSaatIni() <<"\n\n";
    cout << "\n" << endl;
    // Menampilkan Informasi Garasi
    cout << "Daftar Kendaraan " << garasi2.getDaftar() << "\n\n";
    cout << "Merk Mobil: " << garasi2.getParkir().getKendaraan().getMerk() << endl;
    cout << "Plat Nomor: " << garasi2.getParkir().getKendaraan().getPlatNomor() << endl;
    cout << "Tahun Produksi: " << garasi2.getParkir().getKendaraan().getTahunProduksi() << endl;
    cout << "Warna: " << garasi2.getParkir().getKendaraan().getWarna() << endl;
    cout << "Jenis Motor: " << motor.getJenisMotor() << endl;
    cout << "Kapasitas Tangki Bensin: " << motor.getKapasitasTangki() << endl;
    cout << "Lokasi Parkir: " << garasi2.getNama() << endl;
    cout << "Luas Parkir: " << garasi2.getLuas() << endl;
    cout << "Kapasitas parkir: " << garasi2.getParkir().getKapasitas() << endl;
    cout << "Jumlah Kendaraan Saat ini: " << garasi2.getParkir().getjumlahSaatIni() <<"\n";

    

    
    return 0;
}