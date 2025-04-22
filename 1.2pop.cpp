#include <iostream>
using namespace std;

// Structure to store product details
struct inventory {
    int id;
    string name;
    int qty;
    float price;
};

// Function to add product details
void AddProduct(inventory &p) {
    cout << "Enter the name of the product: ";
    cin >> p.name;
    cout << "Enter the ID of the product: ";
    cin >> p.id;
    cout << "Enter the quantity of the product: ";
    cin >> p.qty;
    cout << "Enter the price of that product: ";
    cin >> p.price;
}

// Function to update quantity
void UpdateQty(inventory &p) {
    int q;
    cout << "Enter the number of products added: ";
    cin >> q;
    p.qty += q;
    cout << "The updated quantity is: " << p.qty << endl;
}

// Function to calculate total value
float TotalPrice(inventory &p) {
    return p.qty * p.price;
}

int main() {
    inventory p; // Create a product instance

    AddProduct(p); // Add product details
    UpdateQty(p);  // Update quantity
    cout << "The total price is: $" << TotalPrice(p) << endl; // Display total price

     cout<<"24CE118_chinmay";

    return 0;
}
