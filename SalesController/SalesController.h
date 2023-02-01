// Description: SalesController : Event Manager c:with business operations

#pragma once
using namespace System;	// Fro String
using namespace System::Collections::Generic;		// For List
using namespace SalesModel;

namespace SalesController {
	public ref class Controller
	{
		private: 
			static List<Product^>^ productList;							// STATIC means that's initializated just once :O
																		// List is a new variable type similar to ARRAY without a defined space of memory :=O
			// CRUD operations: C (Create), R(Read), U(Update/Refresh), D(Delete) 

		public:
			static int AddProduct(Product^ product);
			static Product^ ReadProductById(int productId);			// Just one
			static List<Product^>^ ReadAllProudcts();				// All of them
	};
}
