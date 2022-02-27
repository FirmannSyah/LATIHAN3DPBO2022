#include <iostream>

class Processor{
    private:
        int price;
        string name;
    public:

        Processor(){}
        Processor(int price, string name){
            this->price = price;
            this->name = name;
        }

        //set semua variaber
        void setPricep(int price){
            this->price = price;
        }
        void setNamep(string name){
            this->name = name;
        }

        //get semua variabel
        int getPricep(){
            return this->price;
        }

        string getNamep(){
            return this->name;
        }

        //tampilan untuk prosesor
        void printProc(){
            cout <<"  Nama Processor     : " << this->name << endl;
            cout <<"  Harga Processor    : " << this->price << endl;
        }
        ~Processor(){
            
        }
};

