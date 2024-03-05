// Psrkinglot parkir;

#pragma once
// Memasukan library yang digunakan
#include <iostream>
#include <string>
#include "Parkinglot.cpp"

// Deklarasi namespace
using namespace std;

// Deklarasi kelas
class Garage
{
private:
    // Atribut Privat
    string nama;
    string luas;
    string daftar;
    // Composite dengan Parkinglot
    Parkinglot parkir;

public:
    // Constructor
    Garage()
    {

    }

    //Constructor dengan Parameter
    Garage(string nama, string luas, string daftar, Parkinglot parkir)
    {
        this->nama = nama;
        this->luas = luas;
        this->daftar = daftar;
        this->parkir = parkir;
    }

    // Setter dan Getter
    void setNama(string nama)
    {
        this->nama = nama;
    }

    void setLuas(string luas)
    {
        this->luas = luas;
    }

    void setDaftar(string daftar)
    {
        this->daftar = daftar;
    }

    void setParkir(Parkinglot parkir)
    {
        this->parkir = parkir;
    }

    string getNama()
    {
        return this->nama;
    }

    string getLuas()
    {
        return this->luas;
    }

    string getDaftar()
    {
        return this->daftar;
    }

    Parkinglot getParkir()
    {
        return  this->parkir;
    }

    // Destructor
    ~Garage()
    {

    }
};

// Garage::Garage(/* args */)
// {
// }

// Garage::~Garage()
// {
// }
