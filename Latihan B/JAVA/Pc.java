public class Pc {
	// Atribut
	private Processor pr;
	private Disk dk;
	private Ram rm;
	private int totalPrice;

	// Konstruktor
	public Pc(Processor pr, Disk dk, Ram rm) {
		this.pr = pr;
		this.dk = dk;
		this.rm = rm;
		this.totalPrice = pr.getPrice() + dk.getPrice() + rm.getPrice();
	}

	// set untuk semua variable
	
	public void setProc(Processor pr) {
		this.pr = pr;
	}
	public void setDisk(Disk dk) {
		this.dk = dk;
	}
	public void setRam(Ram rm) {
		this.rm = rm;
	}
	public void setTPrice(Processor pr, Disk dk, Ram rm) {
		this.totalPrice = pr.getPrice() + dk.getPrice() + rm.getPrice();
	}

    // get untuk semua variable

	public Processor getProc() {
		return pr;
	}
	public Disk getDisk() {
		return dk;
	}
	public Ram getRam() {
		return rm;
	}
	public int getTPrice() {
		return totalPrice;
	}

	// tampil untuk semua item pada pc
	public void printPC() {
        System.out.println(" +PROCESSOR");
		pr.printProc();
        System.out.println(" +DISK");
		dk.printDisk();
        System.out.println(" +RAM");
		rm.printRam();

	}
}