class Disk:

    __type = ""
    __capacity = ""
    __price = 0

    # konstruktor
    def __init__(self, type = "", capacity = "", price = 0):
        self.__type = type
        self.__capacity = capacity
        self.__price = price

    # set untuk semua variable
    def setType(self, type):
        self.__type = type

    def setCapacity(self, capacity):
        self.__capacity = capacity

    def setPrice(self, price):
        self.__price = price

    # get untuk semua variable
    def getType(self):
        return self.__type

    def getCapacity(self):
        return self.__capacity

    def getPrice(self):
        return self.__price
    
    # tampilan untuk disk
    def printDisk(self):
        print("  Tipe Disk          : " + str(self.getType()))
        print("  Kapasitas Disk     : " + str(self.getCapacity()))
        print("  Harga Disk         : " + str(self.getPrice()))