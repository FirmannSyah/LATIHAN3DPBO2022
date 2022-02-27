
class Pc{
    private:
        int Totalprice;
        Processor pr;
        Disk dk;
        Ram rm;
    public:

        Pc(){

        }
        Pc(Processor p, Disk d, Ram r, int Totalprice){
            this->pr = p;
            this->rm = r;
            this->dk = d;
            this->Totalprice = Totalprice;
           
        }
        //set semua variaber
        void setTPrice(Processor p, Disk d, Ram r){
            this->Totalprice = p.getPricep() + d.getPriced() + r.getPricer();
        }

        void setProc(Processor p){
            this->pr = p;
        }

        void setDisk(Disk d){
            this->dk = d;
        }

        void setRam(Ram r){
            this->rm = r;
        }


        //get semua variabel
        int getTprice(){
            return this->Totalprice;
        }

        Processor getProc(){
           return this->pr;
        }

        Disk getDisk(){
            return this->dk;
        }

        Ram getRam(){
            return this->rm;
        }


        //tampilan untuk mengeluarkan semua item 
        void printPC(){
             cout << " +PROCESSOR" << endl;
             this->pr.printProc();
             cout << " +DISK" << endl;
             this->dk.printDisk();
             cout << " +RAM" << endl;
             this->rm.printRam();
        }
        
        ~Pc(){
            
        }
};

