#pragma once
// Memasukan library yang digunakan
#include <iostream>

#include <string>

#include "Vehicle.cpp"


// Deklarasi namespace
using namespace std;

// Inheritance dengan file Vehicle
class Car : public Vehicle
{
private:
   // Atribut Privat
    string jumlahKursi;
    string jumlahPintu;
public:
     // Constructor
    Car()
    {

    }

    //Constructor dengan Parameter
    Car(string jumlahKursi, string jumlahPintu)
    {
        this->jumlahKursi = jumlahKursi;
        this->jumlahPintu = jumlahPintu;

    }

    // Setter dan Getter
    void setJumlahKursi(string jumlahKursi)
    {
        this->jumlahKursi = jumlahKursi;
    }

    void setJumlahPintu(string jumlahPintu)
    {
        this->jumlahPintu = jumlahPintu;
    }

    string getjumlahKursi()
    {
        return this->jumlahKursi;
    }

    string getJumlahPintu()
    {
        return this->jumlahPintu;
    }

    // Destructor
    ~Car()
    {

    }
};

// Car::Car(/* args */)
// {
// }

// Car::~Car()
// {
// }
