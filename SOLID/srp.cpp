//Single responsibility principle
//every class will do only a single tast here
//helps in code maintainability

#include<iostream>
using namespace std;

class Product{
    private:
    int productId;
    public:
    void saveProduct(){}
};
class ShoppingCart:public Product{
    private:
    int cartId;
    public:
    void saveCart(){}
};

class ShopppingCartInvoice:public ShoppingCart{
    private:
    int inId;
    public:
    void saveInvoice(){}
};

class ShoppingCartSavetoDB:public ShoppingCart{
    private:
    int sCsTDBif;
    public:
    void Savetodb(){}
};

int main(){
    return 0;
}