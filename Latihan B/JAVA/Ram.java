public class Ram 
{
    private int capacity;
    private int price;

    // konstruktor
    public Ram(){}
    public Ram(int capacity, int price) {
        this.capacity = capacity;
        this.price = price;
    }

    // set untuk semua variable
    public void setCapacity(int capacity) {
        this.capacity = capacity;
    }
    public void setPrice(int price) {
        this.price = price;
    }

    // get untuk semua variable
    public int getCapacity() {
        return capacity;
    }
    public int getPrice() {
        return price;
    }

    // tampil untuk Ram
    public void printRam() {
        System.out.println("  Kapasitas Ram      : " + capacity);
        System.out.println("  Harga Ram          : " + price);
    }
}