#pragma once
// Memasukan library yang digunakan
#include <iostream>

#include <string>


// Deklarasi namespace
using namespace std;

// Deklarasi kelas
class Vehicle
{
private: // Atribut Privat
    string platNomor;
    string merk;
    string tahunProduksi;
    string warna;

public:
    // Constructor
    Vehicle()
    {

    }
    //Constructor dengan Parameter
    Vehicle(string platNomor, string merk, string tahunProduksi, string warna)
    {
        this->platNomor = platNomor;
        this->merk = merk;
        this->tahunProduksi = tahunProduksi;
        this->warna = warna;
    }

    // Setter dan Getter
    void setPlatNomor(string platNomor)
    {
        this->platNomor = platNomor;
    }

    void setMerk(string merk)
    {
        this->merk = merk;
    }

    void setTahunProduksi(string tahunProduksi)
    {
        this->tahunProduksi = tahunProduksi;
    }

    void setWarna(string warna)
    {
        this->warna = warna;
    }

    string getPlatNomor()
    {
        return this->platNomor;
    }

    string getMerk()
    {
        return this->merk;
    }

    string getTahunProduksi()
    {
        return this->tahunProduksi;
    }

    string getWarna()
    {
        return this->warna;
    }

    // Destructor
    ~Vehicle()
    {

    }
};

// Vehicle::Vehicle(/* args */)
// {
// }

// Vehicle::~Vehicle()
// {
// }
