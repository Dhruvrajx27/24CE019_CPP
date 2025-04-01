#include <iostream>
#include <string>
using namespace std;

class Product {
private:
    int id;
    string name;
    int quantity;
    double price;

public:
    // Method to set product details
    void setProductDetails(int id, string name, int quantity, double price) {
        this->id = id;
        this->name = name;
        this->quantity = quantity;
        this->price = price;
    }

    // Method to update the quantity of the product
    void updateQuantity(int newQuantity) {
        quantity = newQuantity;
    }

    // Method to get the total value of the product (quantity * price)
    double getTotalValue() {
        return quantity * price;
    }

    // Method to display product details
    void displayProduct() {
        cout << "Product ID: " << id
             << ", Name: " << name
             << ", Quantity: " << quantity
             << ", Price: $" << price << endl;
    }

    // Getter methods for product details
    int getId() { return id; }
    string getName() { return name; }
};

class Inventory {
private:
    Product products[3];  // Array of Product objects (let's assume 3 products for simplicity)
    int productCount = 0;

public:
    // Method to add a product to the inventory
    void addProduct(int id, string name, int quantity, double price) {
        if (productCount < 3) {
            products[productCount].setProductDetails(id, name, quantity, price);
            productCount++;
        } else {
            cout << "Inventory full! Cannot add more products." << endl;
        }
    }

    // Method to update the quantity of a product by ID
    void updateProductQuantity(int id, int newQuantity) {
        for (int i = 0; i < productCount; ++i) {
            if (products[i].getId() == id) {
                products[i].updateQuantity(newQuantity);
                cout << "Updated quantity of " << products[i].getName() << " to " << newQuantity << endl;
                return;
            }
        }
        cout << "Product not found!" << endl;
    }

    // Method to calculate the total value of the inventory
    double calculateTotalValue() {
        double totalValue = 0;
        for (int i = 0; i < productCount; ++i) {
            totalValue += products[i].getTotalValue();
        }
        return totalValue;
    }

    // Method to display inventory details
    void displayInventory() {
        if (productCount == 0) {
            cout << "Inventory is empty!" << endl;
            return;
        }
        for (int i = 0; i < productCount; ++i) {
            products[i].displayProduct();
        }
    }
};

int main() {
    Inventory storeInventory;
    int id, quantity;
    double price;
    string name;

    // Adding products to the inventory with user input
    for (int i = 0; i < 3; ++i) {
        cout << "Enter details for Product " << i + 1 << endl;
        cout << "Enter Product ID: ";
        cin >> id;
        cin.ignore();  // to clear the buffer before getting the name
        cout << "Enter Product Name: ";
        getline(cin, name);
        cout << "Enter Product Quantity: ";
        cin >> quantity;
        cout << "Enter Product Price: ";
        cin >> price;

        // Add product to inventory
        storeInventory.addProduct(id, name, quantity, price);
    }


    cout << "\nEnter the ID of the product to update quantity: ";
    int updateId, newQuantity;
    cin >> updateId;
    cout << "Enter the new quantity: ";
    cin >> newQuantity;
    storeInventory.updateProductQuantity(updateId, newQuantity);

    double totalValue = storeInventory.calculateTotalValue();
    cout << "\nTotal inventory value: $" << totalValue << endl;


    cout << "\nInventory Details:\n";
    storeInventory.displayInventory();

    return 0;
}

