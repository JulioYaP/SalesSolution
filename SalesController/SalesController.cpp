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

int SalesController::Controller::UpdateProduct(Product^ product)
{
    for (int i=0;i<productList->Count;i++)
        if (productList[i]->getId() == product->getId()) {
            // Refresh
            productList[i] = product;
            return productList[i]->getId();
        }
    return 0;
}

int SalesController::Controller::DeleteProduct(int productId)
{
    for (int i = 0; i < productList->Count; i++)
        if (productList[i]->getId() == productId) {
            productList->RemoveAt(i);   // Remove product at i position :v
            return productId;
        }
    return 0;
}
