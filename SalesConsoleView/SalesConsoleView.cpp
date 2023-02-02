#include "pch.h"

using namespace System;
using namespace SalesController;
using namespace SalesModel;
using namespace System::Collections::Generic;

int main(array<System::String ^> ^args)
{
	// Make objects and build them
	Product^ product1 = gcnew Product();
	Product^ product2 = gcnew Product();

	// Put on values

	// Product1
	product1->setId(1);
	product1->Name = "Jabón Caimán";
	product1->Description = "Jabón familiar, barato y comodo para todos";
	product1->PriceMin = 5.26;
	product1->PriceMaj = 5.00;
	product1->Stock = 50;
	product1->Status = 'B';


	// Product2
	product2->setId(2);
	product2->Name = "Jabón Bolivar";
	product2->Description = "Jabón recontrabarato y comodo para todos";
	product2->PriceMin = 3.26;
	product2->PriceMaj = 3.00;
	product2->Stock = 30;
	product2->Status = 'A';

	// Add Product to List
	Controller::AddProduct(product1);	Controller::AddProduct(product2);	// That's the reason of STATIC

	// Make the list
	List<Product^>^ myPL = Controller::ReadAllProudcts();

	for (int i = 0; i < myPL->Count; i++)
		Console::WriteLine(" Product " + myPL[i]->getId() + " "
			+ myPL[i]->Name + " "
			+ myPL[i]->Description + " ");
	return 0;
}
