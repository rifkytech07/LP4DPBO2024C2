## Saya Muhammad Rifky Afandi dengan NIM 2202346 mengerjakan LP2 dalam mata kuliah 
## Desain Pemorograman Berbasis Objek untuk keberkahanNya maka saya tidak 
## melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.

# Mengimport file
from Vehicle import Vehicle
from Car import Car
from Motorcycle import Motorcycle
from ParkingLot import Parkinglot
from Garage import Garage

# Inisialisasi kendaraan
kendaraan = Vehicle("D 4554 CIE", "HONDA NSX", "2018", "SILVER")
mobil = Car("2 Kursi", "2 Pintu")
parkir = Parkinglot("1000", "3", kendaraan)
garasi = Garage("Parkiran DT", "180 m^2", "Ke-1", parkir)

kendaraan2 = Vehicle("D 4554 BAM", "YAMAHA YZF R1", "2022", "BLUE")
motor = Motorcycle("Superbike", "1000 cc")
parkir2 = Parkinglot("1000", "3", kendaraan2)
garasi2 = Garage("Parkiran UPI", "300 m^2", "Ke-2", parkir2)

# Menampilkan informasi garasi
print("Daftar Kendaraan", garasi.getDaftar())
print("Merk Mobil:", garasi.getParkir().getKendaraan().getMerk())
print("Plat Nomor:", garasi.getParkir().getKendaraan().getPlatNomor())
print("Tahun Produksi:", garasi.getParkir().getKendaraan().getTahunProduksi())
print("Warna:", garasi.getParkir().getKendaraan().getWarna())
print("Jumlah Kursi:", mobil.getJumlahKursi())
print("Jumlah Pintu:", mobil.getJumlahPintu())
print("Lokasi Parkir:", garasi.getNama())
print("Luas Parkir:", garasi.getLuas())
print("Kapasitas parkir:", garasi.getParkir().getKapasitas())
print("Jumlah Kendaraan Saat ini:", garasi.getParkir().getJumlahSaatIni())

# Menampilkan informasi garasi 2
print("\nDaftar Kendaraan", garasi2.getDaftar())
print("Merk Mobil:", garasi2.getParkir().getKendaraan().getMerk())
print("Plat Nomor:", garasi2.getParkir().getKendaraan().getPlatNomor())
print("Tahun Produksi:", garasi2.getParkir().getKendaraan().getTahunProduksi())
print("Warna:", garasi2.getParkir().getKendaraan().getWarna())
print("Jenis Motor:", motor.getJenisMotor())
print("Kapasitas Tangki Bensin:", motor.getKapasitasTangki())
print("Lokasi Parkir:", garasi2.getNama())
print("Luas Parkir:", garasi2.getLuas())
print("Kapasitas parkir:", garasi2.getParkir().getKapasitas())
print("Jumlah Kendaraan Saat ini:", garasi2.getParkir().getJumlahSaatIni())