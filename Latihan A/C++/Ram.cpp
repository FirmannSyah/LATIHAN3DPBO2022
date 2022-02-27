
class Ram{
    private:
        int price, capacity;

    public:

        Ram(){

        }
        Ram(int price, int capacity){
            this->price = price;
            this->capacity = capacity;
        }

        //set semua variaber
        void setPricer(int price){
            this->price = price;
        }
        void setCapacityr(int capacity){
            this->capacity = capacity;
        }

        //get semua variabel
        int getPricer(){
            return this->price;
        }

        int getCapacityr(){
            return this->capacity;
        }
        //tampilan untuk ram
        void printRam(){
            cout <<"  Kapasitas Ram      : " << this->capacity << endl;
            cout <<"  Harga Ram          : " << this->price << endl;
        }
        ~Ram(){
            
        }
};

