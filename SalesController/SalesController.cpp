#include "pch.h"

#include "SalesController.h"

int SalesController::Controller::AddProduct(Product^ product)
{
    productList->Add(product);
    
    return product->getId();
}

Product^ SalesController::Controller::ReadProductById(int productId)
{
    for (int i = 0; i < productList->Count; i++) // productList->Count shows amount of products
        if (productList[i]->getId() == productId)   return productList[i];

    // Instead
    return nullptr;  // Return that means there's no it
}

List<Product^>^ SalesController::Controller::ReadAllProudcts()
{
    return productList;
}
