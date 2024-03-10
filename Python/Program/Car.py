## Saya Muhammad Rifky Afandi dengan NIM 2202346 mengerjakan LP2 dalam mata kuliah 
## Desain Pemorograman Berbasis Objek untuk keberkahanNya maka saya tidak 
## melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.

## Mengimpor file
from Vehicle import Vehicle

## Membuat class dan inheritance dengan Vehicle
class Car(Vehicle):
    ## Atribut privat
    jumlahKursi=""
    jumlahPintu=""
    
    ## Constructor
    ## Atribut Publik
    def __init__(self, jumlahKursi="", jumlahPintu=""):
        super().__init__()
        self.jumlahKursi = jumlahKursi
        self.jumlahPintu = jumlahPintu

    ## Getter dan Setter
    def setJumlahKursi(self, jumlahKursi):
        self.jumlahKursi = jumlahKursi

    def setJumlahPintu(self, jumlahPintu):
        self.jumlahPintu = jumlahPintu

    def getJumlahKursi(self):
        return self.jumlahKursi

    def getJumlahPintu(self):
        return self.jumlahPintu