from dis import dis
from Processor import Processor
from Disk import Disk
from Ram import Ram
from Pc import Pc


n = int(input("Masukan banyaknya barang : "))

item = [Pc for i in range(n)]

i = 0
for i in range(n):

    processor = Processor
    disk = Disk
    ram = Ram

    print("-------------------------")
    print("  Barang Ke - ", i+1, "\n")
    print("   +PROCESSOR+")

    nameP = input("Masukan Nama Processor  : ")
    priceP = int(input("Masukan Harga Processor : "))

    print("\n   +DISK+")

    typeD = input("Masukan Jenis Disk     : ")
    capacityD = int(input("Masukan Kapasitas Disk : "))
    priceD = int(input("Masukan Harga Disk     : "))

    print("\n   +RAM+")

    capacityR = int(input("Masukan Kapasitas Ram : "))
    priceR = int(input("Masukan Harga Ram     : "))

    print("\n")
    
    processor = Processor(nameP, priceP)
    disk = Disk(typeD, capacityD, priceD)
    ram = Ram(capacityR, priceR)

    item[i] = Pc(processor, disk, ram)

print("\n=========================")
print("     DATA BARANG")

i = 0
for i in range(n):
    print("== Barang Ke - ", i+1, "\n")
    item[i].printPC()
    print("------------------------------- +")
    print(" TOTAL HARGA         : " + str(item[i].getTPrice()))

print("\n    PROGRAM SELESAI")
print("=========================")
