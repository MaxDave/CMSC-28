#include <iostream>
#include <string>
using namespace std;

class Product{
    private:
    string name;
    string brand;
    string price;
    string description;
    float size;
    string color;
    int quantity;

    public:
    string getName(){return name; }
    void setName(string productname){name = productname;}

    string getBrand(){return brand;}
    void setBrand(string productbrand){brand = productbrand;}

    string getPrice(){return price;}
    void setPrice(string productprice){price = productprice;}

    string getDescription(){return description;}
    void setDescription(string productdesc){description = productdesc;}

    float getSize(){return size;}
    void setSize(float productsize){size = productsize;}

    string getColor(){return color;}
    void setColor(string productcolor){color = productcolor;}

    int getQuantity(){return quantity;}
    void setQuantity(float productquantity){quantity = productquantity;}
};

class Clothing: public Product{
    private:
    string material;

    public:
    string getMaterial(){return material;}
    void setMaterial(string productmaterial){material = productmaterial;}

};

class Electronics: public Product{
    private:
    string model;
    float warranty;
    string technicalSpecs;

    public:

    string getModel(){return model;}
    void setModel(string productmodel){model = productmodel;}

    float getWarranty(){return warranty;}
    void setWarranty(float productwarranty){
        this->warranty = productwarranty * 12;
    }

    string getTechnicalSpecs(){return technicalSpecs;}
    void setTechnicalSpecs(string producttechnicalspecs){technicalSpecs = producttechnicalspecs;}
};


