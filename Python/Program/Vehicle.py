## Saya Muhammad Rifky Afandi dengan NIM 2202346 mengerjakan LP2 dalam mata kuliah 
## Desain Pemorograman Berbasis Objek untuk keberkahanNya maka saya tidak 
## melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.

## Membuat class
class Vehicle:
    ## Atribut privat
    platNomor=""
    merk=""
    tahunProduksi=""
    warna=""
    
    ## Constructor
    ## Atribut Publik
    def __init__(self, platNomor="", merk="", tahunProduksi="", warna=""):
        self.platNomor = platNomor
        self.merk = merk
        self.tahunProduksi = tahunProduksi
        self.warna = warna

     ## Getter dan Setter
    def setPlatNomor(self, platNomor):
        self.platNomor = platNomor

    def setMerk(self, merk):
        self.merk = merk

    def setTahunProduksi(self, tahunProduksi):
        self.tahunProduksi = tahunProduksi

    def setWarna(self, warna):
        self.warna = warna

    def getPlatNomor(self):
        return self.platNomor

    def getMerk(self):
        return self.merk

    def getTahunProduksi(self):
        return self.tahunProduksi

    def getWarna(self):
        return self.warna
    