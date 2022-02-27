
class Disk{
    private:
        int price, capacity;
        string type;
    public:

        Disk(){

        }
        Disk(int price, int capacity, string type){
            this->price = price;
            this->type = type;
            this->capacity = capacity;
        }

        //set semua variaber
        void setPriced(int price){
            this->price = price;
        }

        void setTyped(string type){
            this->type = type;
        }

        void setCapacityd(int capacity){
            this->capacity = capacity;
        }

        //get semua variabel    
        int getPriced(){
            return this->price;
        }

        string getTyped(){
            return this->type;
        }

        int getCapacityd(){
            return this->capacity;
        }

        //tampilan untuk disk
        void printDisk(){
            cout <<"  Tipe Disk          : " << this->type << endl;
            cout <<"  Kapasitas Disk     : " << this->capacity << endl;
            cout <<"  Harga Disk         : " << this->price << endl;
        }
        ~Disk(){
            
        }
};

