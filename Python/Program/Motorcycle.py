## Saya Muhammad Rifky Afandi dengan NIM 2202346 mengerjakan LP2 dalam mata kuliah 
## Desain Pemorograman Berbasis Objek untuk keberkahanNya maka saya tidak 
## melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.

## Mengimpor file
from Vehicle import Vehicle

## Membuat class dan inheritance dengan Vehicle
class Motorcycle(Vehicle):
    ## Atribut privat
    jenisMotor=""
    kapasitasTangki=""
    
    ## Constructor
    ## Atribut Publik
    def __init__(self, jenisMotor="", kapasitasTangki=""):
        super().__init__()
        self.jenisMotor = jenisMotor
        self.kapasitasTangki = kapasitasTangki

    ## Getter dan Setter
    def setJenisMotor(self, jenisMotor):
        self.jenisMotor = jenisMotor

    def setKapasitasTangki(self, kapasitasTangki):
        self.kapasitasTangki = kapasitasTangki

    def getJenisMotor(self):
        return self.jenisMotor

    def getKapasitasTangki(self):
        return self.kapasitasTangki
