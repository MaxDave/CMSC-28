#include <iostream>
#include <string>
#include "ProductInventory.h"

using namespace std;

int main(){
    string uname;
    string ubrand;
    string uprice;
    string udescription;

    float usize;
    string ucolor;
    string umaterial;
    string umodel;
    string utechnicalSpecs;
    float uwarranty;
    int uquantity;

    Product product;
    Clothing clothing;
    Electronics electronics;

    cout<<"Name of the product: ";
    getline(cin, uname);
    product.setName(uname);

    cout<<"Brand of the product: ";
    getline(cin, ubrand);
    product.setBrand(ubrand);

    cout<<"Price of the product: ";
    getline(cin, uprice);
    product.setPrice(uprice);

    cout<<"Description of the product: ";
    getline(cin, udescription);
    product.setDescription(udescription);

    cout<<"Size: ";
    cin>>usize;
    product.setSize(usize);
    cin.ignore(); 

    cout<<"Color: ";
    getline(cin, ucolor);
    product.setColor(ucolor);

    cout<<"Quantity: "; 
    cin>>uquantity;
    product.setQuantity(uquantity);
    cin.ignore(); 

    cout<<"Model: ";
    getline(cin, umodel);
    electronics.setModel(umodel);

    cout<<"Warranty(in years): ";
    cin>>uwarranty;
    electronics.setWarranty(uwarranty);
    cin.ignore(); 

    cout<<"Techincal Specifications: ";
    getline(cin, utechnicalSpecs);
    electronics.setTechnicalSpecs(utechnicalSpecs);

    cout<<"\nProduct Details: "<<endl;
    cout<<"Product Name: "<<product.getName()<<endl;
    cout<<"Product Brand: "<<product.getBrand()<<endl;
    cout<<"Product Price: "<<product.getPrice()<<endl;
    cout<<"Product Description: "<<product.getDescription()<<endl;
    cout<<"Product Size: "<<product.getSize()<<endl;
    cout<<"Product Color: "<<product.getColor()<<endl;
    cout<<"Product Quantity: "<<product.getQuantity()<<endl;
    cout<<"Product Model: "<<electronics.getModel()<<endl;
    cout<<"Warranty: There is a warranty that only lasts for " << electronics.getWarranty() << " months\n";
    cout<<"Product Specifications: " << electronics.getTechnicalSpecs()<<endl;

}
