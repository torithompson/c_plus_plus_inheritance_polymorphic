#include "Product.h"
//Tori Thompson
//Client code provided
//This code creates a product, a prepacked food and a fresh food using both the 
// default constructor and the non default constructor
//and then displays the information for each of them using the show function 
//and the polymorphic show function


void show(const Product* productPtr)
{
	productPtr->show(cout);
}
int main()
{
	//Main written by professor

	cout << "1a) Create dynamic Product (non default): " << endl;
	Product* phone = new Product(90, "Android cell");
	assert(phone);
	cout << "Name= " << phone->getProductName() << endl;
	cout << "Bar code=" << phone->getBarCode() << endl << endl;
	phone->show(cout);
	cout << "Call polymorphic function:\n ";
	show(phone); // calling polymorphic function


	cout << endl << endl;
	delete phone;

	cout << "1b) Create dynamic Product (default): " << endl;
	Product* item = new Product;
	assert(item);
	cout << "Name= " << item->getProductName() << endl;
	cout << "Bar code=" << item->getBarCode() << endl << endl;
	item->show(cout);
	cout << "Call polymorphic function:\n ";
	show(item); // calling polymorphic function


	cout << endl << endl;
	delete item;


	cout << "2a) Create dynamic PrePackedFood (non default): " << endl;
	PrePackedFood* pasta = new PrePackedFood(40, "spaghetti", -.67);
	assert(pasta);
	cout << "Name= " << pasta->getProductName() << endl;
	cout << "Bar code=" << pasta->getBarCode() << endl << endl;
	cout << "Unit Price=" << pasta->getUnitPrice() << endl << endl;
	pasta->show(cout);
	cout << "Call polymorphic function:\n ";
	show(pasta); // calling polymorphic function


	cout << endl << endl;
	delete pasta;


	cout << "2b) Create dynamic Prepacked (default): " << endl;
	PrePackedFood* food = new PrePackedFood;
	assert(food);
	cout << "Name= " << food->getProductName() << endl;
	cout << "Bar code=" << food->getBarCode() << endl << endl;
	cout << "Unit Price=" << food->getUnitPrice() << endl << endl;
	food->show(cout);
	cout << "Call polymorphic function:\n ";
	show(food); // calling polymorphic function


	cout << endl << endl;
	delete food;


	cout << "3a) Create dynamic FreshFood (non default): " << endl;
	FreshFood* apples = new FreshFood(-6, "Delicious", 1.1, .67);
	assert(apples);
	cout << "Name= " << apples->getProductName() << endl;
	cout << "Bar code=" << apples->getBarCode() << endl << endl;
	cout << "Weight=" << apples->getWeight() << endl << endl;
	cout << "Price=" << apples->getUnitPrice() << endl << endl;
	apples->show(cout);
	cout << "Call polymorphic function:\n ";
	show(apples); // calling polymorphic function


	cout << endl << endl;
	delete apples;

	cout << "3b) Create dynamic FreshFood (default): " << endl;
	FreshFood* freshPtr = new FreshFood;
	assert(freshPtr);
	cout << "Name= " << freshPtr->getProductName() << endl;
	cout << "Bar code=" << freshPtr->getBarCode() << endl << endl;
	cout << "Weight=" << freshPtr->getWeight() << endl << endl;
	cout << "Price=" << freshPtr->getUnitPrice() << endl << endl;
	freshPtr->show(cout);
	cout << "Call polymorphic function:\n ";
	show(freshPtr); // calling polymorphic function


	cout << endl << endl;
	delete freshPtr;

	system("pause");
}