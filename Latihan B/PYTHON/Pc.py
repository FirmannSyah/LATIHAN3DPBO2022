from Processor import Processor
from Disk import Disk
from Ram import Ram

class Pc:
    
    __pr = Processor()
    __dk = Disk()
    __rm = Ram()
    __totalPrice = 0

    # konstruktor
    def __init__(self, pr = Processor, dk = Disk, rm = Ram):
        self.__pr = pr
        self.__dk = dk
        self.__rm = rm
        self.__totalPrice = pr.getPrice() + dk.getPrice() + rm.getPrice()

    # set semua variable
    def setProc(self, pr):
        self.__pr = pr

    def setDisk(self, dk):
        self.__dk = dk

    def setRam(self, rm):
        self.__rm = rm

    def setTPrice(self, pr = Processor, dk = Disk, rm = Ram):
        self.__totalPrice = pr.getPrice() + dk.getPrice() + rm.getPrice()

    # get untuk semua variable
    def getProc(self):
        return self.__pr
    def getDisk(self):
        return self.__dk
    def getRam(self):
        return self.__rm
    def getTPrice(self):
        return self.__totalPrice
    

    # tampilan untuk pc
    def printPC(self):

        print(" +PROCESSOR")
        self.__pr.printProc()
        print(" +DISK")
        self.__dk.printDisk()
        print(" +RAM")
        self.__rm.printRam()
       


