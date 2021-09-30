//Write a class "product" which take input product id, product price and print it
#include<iostream>
using namespace std;

class Product{
    private:
        int prodId;
        float prodPrice;
    public:
        void setdata(int id1, float price1);
        void getdata(){
           cout<<"Product Id :"<<prodId<<endl;
           cout<<"Product Price :"<<prodPrice<<endl;
        }

};
void Product::setdata(int id1, float price1){
prodId=id1;
prodPrice=price1;
}

int main(){
    Product a;
    a.setdata(1,100);
    a.getdata();
    return 0;
}