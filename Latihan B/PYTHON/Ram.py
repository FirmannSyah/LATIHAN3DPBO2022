class Ram:
    
    __capacity = ""
    __price = 0

    # konstruktor
    def __init__(self, capacity="", price=0):
        self.__capacity = capacity
        self.__price = price

    # set untuk semua variable
    def setCapacity(self, capacity):
        self.__capacity = capacity

    def setPrice(self, price):
        self.__price = price

    # get untuk semua variable
    def getCapacity(self):
        return self.__capacity

    def getPrice(self):
        return self.__price
    
    # tampilan untuk ram
    def printRam(self):
        print("  Kapasitas Ram      : " + str(self.getCapacity()))
        print("  Harga Ram          : " + str(self.getPrice()))