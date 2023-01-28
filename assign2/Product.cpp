#include "Product.h"

//Tori Thompson
//Implementation for product class

Product::Product(int newBarCode, string newProductName)
{
	barCode = (newBarCode > 0) ? newBarCode : 0;
	productName = new string((newProductName != "") ? newProductName : "No name");
	assert(productName);
}
Product::Product()
{
	cout << "What is the bar code?" << endl;
	cin >> barCode;
	while (barCode < 0 || cin.fail())
	{
		cin.clear();
		cin.ignore(100, '\n');
		cout << "Invalid bar code. Please enter a positive number." << endl;
		cin >> barCode;
	}
	cin.ignore(80, '\n');
	cout << "What is the product name?" << endl;
	productName = new string();
	assert(productName);
	getline(cin, *productName);
	while (*productName == "")
	{
		cout << "Invalid product name. Please enter a name." << endl;
		getline(cin, *productName);
	}
}
Product::~Product()
{
	delete productName;
}
PrePackedFood::PrePackedFood()
{
	cout << "What is the unit price?" << endl;
	cin >> unitPrice;
	while (unitPrice < 0.0 || cin.fail())
	{
		cin.clear();
		cin.ignore(100, '\n');
		cout << "Invalid unit price. Please enter a positive number." << endl;
		cin >> unitPrice;
	}
}
PrePackedFood::PrePackedFood(int newBarCode, string newProductName, double newUnitPrice) : Product(newBarCode, newProductName)
{
	unitPrice = (newUnitPrice > 0.0) ? newUnitPrice : 0.0;
}
FreshFood::FreshFood()
{
	cout << "What is the unit price?" << endl;
	cin >> unitPrice;
	while (unitPrice < 0 || cin.fail())
	{
		cin.clear();
		cin.ignore(100, '\n');
		cout << "Invalid unit price. Please enter a positive number." << endl;
		cin >> unitPrice;
	}
	cout << "What is the weight?" << endl;
	cin >> weight;
	while (weight < 0 || cin.fail())
	{
		cin.clear();
		cin.ignore(100, '\n');
		cout << "Invalid weight. Please enter a positive number." << endl;
		cin >> weight;
	}
}
FreshFood::FreshFood(int newBarCode, string newProductName, double newUnitPrice, double newWeight) : Product(newBarCode, newProductName)
{
	unitPrice = (newUnitPrice > 0.0) ? newUnitPrice : 0.0;
	weight = (newWeight > 0.0) ? newWeight : 0.0;
}

void Product::show(ostream& out) const
{
	out << "Bar code: " << barCode << endl;
	out << "Product name: " << *productName << endl;
}

void PrePackedFood::show(ostream& out) const
{
	Product::show(out);
	out << "Unit price: " << unitPrice << endl;
}

void FreshFood::show(ostream& out) const
{
	Product::show(out);
	out << "Unit price: " << unitPrice << endl;
	out << "Weight: " << weight << endl;
	out << "Total Price: " << unitPrice * weight << endl;
}
