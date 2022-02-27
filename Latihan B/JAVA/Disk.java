public class Disk {

    private String type;
    private int capacity;
    private int price;

    // konsturktor
    public Disk(){

    }
    public Disk(String type, int capacity, int price) {
        this.type = type;
        this.capacity = capacity;
        this.price = price;
    }

    //set semua variable
    public void setType(String type) {
        this.type = type;
    }
    public void setCapacity(int capacity) {
        this.capacity = capacity;
    }
    public void setPrice(int price) {
        this.price = price;
    }

    // get semua variable
    public String getType() {
        return type;
    }
    public int getCapacity() {
        return capacity;
    }

    public int getPrice() {
        return price;
    }

    // tampil untuk Disk
    public void printDisk() {
        System.out.println("  Tipe Disk          : " + type);
        System.out.println("  Kapasitas Disk     : " + capacity);
        System.out.println("  Harga Disk         : " + price);
    }
}