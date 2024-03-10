## Saya Muhammad Rifky Afandi dengan NIM 2202346 mengerjakan LP2 dalam mata kuliah 
## Desain Pemorograman Berbasis Objek untuk keberkahanNya maka saya tidak 
## melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.

## Membuat class
class Garage:
    ## Atribut privat
    nama=""
    luas=""
    daftar=""
    parkir=None ## Composite
    
    ## Constructor
    ## Atribut Publik
    def __init__(self, nama="", luas="", daftar="", parkir=None):
        self.nama = nama
        self.luas = luas
        self.daftar = daftar
        self.parkir = parkir

    ## Getter dan Setter
    def setNama(self, nama):
        self.nama = nama

    def setLuas(self, luas):
        self.luas = luas

    def setDaftar(self, daftar):
        self.daftar = daftar

    def setParkir(self, parkir):
        self.parkir = parkir

    def getNama(self):
        return self.nama

    def getLuas(self):
        return self.luas

    def getDaftar(self):
        return self.daftar

    def getParkir(self):
        return self.parkir