#pragma once
// Memasukan library yang digunakan
#include <iostream>

#include <string>

#include "Vehicle.cpp"

// Deklarasi namespace
using namespace std;

// Inheritance dengan file Vehicle
class Motorcycle : public Vehicle
{
private:
    // Atribut Privat
    string jenisMotor;
    string kapasitasTangki;
public:
    // Constructor
    Motorcycle()
    {

    }
    //Constructor dengan Parameter
    Motorcycle(string jenisMotor, string kapasitasTangki)
    {
        this->jenisMotor = jenisMotor;
        this->kapasitasTangki = kapasitasTangki;
    }

    // Setter dan Getter
    void setJenisMotor(string jenisMotor)
    {
        this->jenisMotor = jenisMotor;
    }

    void setKapasitasTangki()
    {
        this->kapasitasTangki = kapasitasTangki;
    }

    string getJenisMotor()
    {
        return this->jenisMotor;
    }

    string getKapasitasTangki()
    {
        return this->kapasitasTangki;
    }

    // Destructor
    ~Motorcycle()
    {

    }
};

// Motorcycle::Motorcycle(/* args */)
// {
// }

// Motorcycle::~Motorcycle()
// {
// }
