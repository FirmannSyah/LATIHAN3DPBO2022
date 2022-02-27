import java.util.Scanner;

public class Main{

	public static void main(String[] args){

		int n = 0;

		Scanner masukan = new Scanner(System.in);

		System.out.print("Masukan banyaknya barang : ");
		n = masukan.nextInt();


		Pc item[] = new Pc[n];

        int priceP, priceR, priceD, capacityD, capacityR, Totalprice;
        String nameP, typeD;

		int i;

		System.out.print("\n");
		for(i = 0; i < n; i++){
			System.out.print("-------------------------\n");
            
			System.out.println(" Barang Ke - " + (i+1) + "\n");
			

            System.out.print("   +PROCESSOR+\n");
			System.out.print("Masukan Nama Processor  : ");
			nameP = masukan.next();

			System.out.print("Masukan Harga Processor : ");
			priceP = masukan.nextInt();

			System.out.print("\n   +DISK+\n");
			System.out.print("Masukan Jenis Disk     : ");
			typeD = masukan.next();

			System.out.print("Masukan Kapasitas Disk : ");
			capacityD = masukan.nextInt();

            System.out.print("Masukan Harga Disk     : ");
			priceD = masukan.nextInt();

            System.out.print("\n   +RAM+\n");
			System.out.print("Masukan Kapasitas Ram : ");
			capacityR = masukan.nextInt();

			System.out.print("Masukan Harga Ram     : ");
			priceR = masukan.nextInt();

			System.out.print("\n");

            Processor pr = new Processor(nameP, priceP);
            Disk ds = new Disk(typeD, capacityD, priceD);
            Ram rm = new Ram(capacityR, priceR);

            item[i] = new Pc(pr, ds, rm);

			

		}
		System.out.print("\n=========================");
		System.out.print("\n     DATA BARANG\n\n");
		for (i = 0; i < n; i++){

            System.out.println("== Barang Ke - " + (i+1));
            item[i].printPC();
            System.out.print("------------------------------- +\n");
            System.out.print(" TOTAL HARGA         : " + item[i].getTPrice());
            
        }  

        System.out.print("\n   Program Selesai");
        System.out.print("\n=========================");

	}
}