#include <iostream>
#include <string>
#include <cassert>

using namespace std;

//Tori Thompson
//Specification for base class product

class Product
{
public:
	Product();
	Product(int/*barcode*/, string/*product name*/);
	virtual ~Product();
	virtual void show(ostream&/*file or output*/) const;
	int getBarCode() const { return barCode; }
	string getProductName() const { return *productName; }
protected:
	int barCode;
	string* productName;
};

//Specification for derived class prepacked foods
//Tori Thompson

class PrePackedFood : public Product
{
public:
	PrePackedFood();
	PrePackedFood(int/*bar code*/, string/*name*/, double/*unitprice*/);
	void show(ostream&/*file or output*/) const;
	double getUnitPrice() const { return unitPrice; }
private:
	double unitPrice;
};

//Specification for derived class fresh food
//Tori Thompson

class FreshFood : public Product
{
public:
	FreshFood();
	FreshFood(int/*barCode*/, string/*product name*/, double/*unitPrice*/, double/*weight*/);
	void show(ostream&/*file or output*/) const;
	double getUnitPrice() const { return unitPrice; }
	double getWeight() const { return weight; }
private:
	double unitPrice;
	double weight;
};