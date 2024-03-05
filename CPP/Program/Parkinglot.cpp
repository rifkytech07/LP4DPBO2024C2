#pragma once
// Memasukan library yang digunakan
#include <iostream>
#include <string>
#include "Vehicle.cpp"

// Deklarasi namespace
using namespace std;

// Deklarasi kelas
class Parkinglot
{
private:
    // Atribut Privat
    string kapasitas;
    string jumlahSaatIni;
    // Composite dengan Vehicle
    Vehicle kendaraan;
public:
    // Constructor
    Parkinglot()
    {

    }

    //Constructor dengan Parameter
    Parkinglot(string kapasitas, string jumlahSaatIni, Vehicle kendaraan)
    {
        this->kapasitas = kapasitas;
        this->jumlahSaatIni = jumlahSaatIni;
        this->kendaraan = kendaraan;
    }

    // Setter dan Getter
    void setKapasitas(string kapasitas)
    {
         this->kapasitas = kapasitas;
    }

    void setJumlahSaatIni(string jumlahSaatIni)
    {
        this->jumlahSaatIni = jumlahSaatIni;
    }

    void setKendaraan(Vehicle kendaraan)
    {
        this->kendaraan = kendaraan;   
    }

    string getKapasitas()
    {
        return this->kapasitas;
    }

    string getjumlahSaatIni()
    {
        return this->jumlahSaatIni;
    }
    
    Vehicle getKendaraan()
    {
        return this->kendaraan;
    }

    // Destructor
    ~Parkinglot()
    {

    }
};

// Parkinglot::Parkinglot(/* args */)
// {
// }

// Parkinglot::~Parkinglot()
// {
// }
