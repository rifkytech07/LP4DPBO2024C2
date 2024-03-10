## Saya Muhammad Rifky Afandi dengan NIM 2202346 mengerjakan LP2 dalam mata kuliah 
## Desain Pemorograman Berbasis Objek untuk keberkahanNya maka saya tidak 
## melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.

## Membuat class
class Parkinglot:
    ## Atribut privat
    kapasitas=""
    jumlahSaatIni=""
    kendaraan=None ## Composite
    
    ## Constructor
    ## Atribut Publik
    def __init__(self, kapasitas="", jumlahSaatIni="", kendaraan=None):
        self.kapasitas = kapasitas
        self.jumlahSaatIni = jumlahSaatIni
        self.kendaraan = kendaraan

    ## Getter dan Setter
    def setKapasitas(self, kapasitas):
        self.kapasitas = kapasitas

    def setJumlahSaatIni(self, jumlahSaatIni):
        self.jumlahSaatIni = jumlahSaatIni

    def setKendaraan(self, kendaraan):
        self.kendaraan = kendaraan

    def getKapasitas(self):
        return self.kapasitas

    def getJumlahSaatIni(self):
        return self.jumlahSaatIni

    def getKendaraan(self):
        return self.kendaraan