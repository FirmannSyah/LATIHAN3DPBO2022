public class Processor {
    private String name;
    private int price;

    // konsturktor
    public Processor(){}
    public Processor(String name, int price) {
        this.name = name;
        this.price = price;
    }

    // set untuk semua variable
    public void setName(String name) {
        this.name = name;
    }
    public void setPrice(int price) {
        this.price = price;
    }

    // get untuk semua variable
    public String getName() {
        return name;
    }
    public int getPrice() {
        return price;
    }

    // tampil untuk processor
    public void printProc() {
        System.out.println("  Nama Processor     : " + name);
        System.out.println("  Harga Processor    : " + price);
    }
}