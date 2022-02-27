class Processor:

    # private atribut
    __name = ""
    __price = 0

    # konsturktor
    def __init__(self, name="", price=0):
        self.__name = name
        self.__price = price

    # set semua variable
    def setName(self, name):
        self.__name = name
    def setPrice(self, price):
        self.__price = price

    # get semua variabel
    def getName(self):
        return self.__name
    def getPrice(self):
        return self.__price
    
    # tampilan untuk Processor
    def printProc(self):
        print("  Nama Processor     : " + str(self.getName()))
        print("  Harga Processor    : " + str(self.getPrice()))