#include <iostream>
#include <string>
using namespace std;

const int MAX_ITEMS = 3;

class InventoryItem {
private:
    string itemID;
    string name;
    double price;
    int quantity;

public:
    void setItem() {
        cout << "\nEnter Item ID: ";
        cin >> itemID;
        cout << "Enter Item Name: ";
        cin.ignore(); // clear newline from buffer
        getline(cin, name);
        cout << "Enter Price: ";
        cin >> price;
        cout << "Enter Quantity: ";
        cin >> quantity;
    }

    void addStock(int amount) {
        if (amount > 0) {
            quantity += amount;
            cout << "Added " << amount << " units to " << name << ". New quantity: " << quantity << endl;
        } else {
            cout << "Invalid amount to add.\n";
        }
    }

    void sellItem(int amount) {
        if (amount <= 0) {
            cout << "Invalid quantity to sell.\n";
        } else if (amount > quantity) {
            cout << "Insufficient stock for " << name << ". Available: " << quantity
                 << ", Attempted: " << amount << endl;
        } else {
            quantity -= amount;
            cout << "Sold " << amount << " units of " << name << ". Remaining quantity: " << quantity << endl;
        }
    }

    void display() const {
        cout << "Item ID: " << itemID
             << ", Name: " << name
             << ", Price: $" << price
             << ", Quantity: " << quantity << endl;
    }

    string getName() const {
        return name;
    }
};

int main() {
    InventoryItem inventory[MAX_ITEMS];

    // Step 1: Get item details from user
    cout << "Enter details for " << MAX_ITEMS << " inventory items:\n";
    for (int i = 0; i < MAX_ITEMS; i++) {
        cout << "\nItem " << (i + 1) << ":";
        inventory[i].setItem();
    }

    int choice, index, amount;
    do {
        cout << "\nInventory Operations Menu:\n";
        cout << "1. Add Stock\n";
        cout << "2. Sell Item\n";
        cout << "3. Display Inventory\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter item number (1 to " << MAX_ITEMS << "): ";
            cin >> index;
            if (index >= 1 && index <= MAX_ITEMS) {
                cout << "Enter quantity to add: ";
                cin >> amount;
                inventory[index - 1].addStock(amount);
            } else {
                cout << "Invalid item number.\n";
            }
            break;

        case 2:
            cout << "Enter item number (1 to " << MAX_ITEMS << "): ";
            cin >> index;
            if (index >= 1 && index <= MAX_ITEMS) {
                cout << "Enter quantity to sell: ";
                cin >> amount;
                inventory[index - 1].sellItem(amount);
            } else {
                cout << "Invalid item number.\n";
            }
            break;

        case 3:
            cout << "\nCurrent Inventory:\n";
            for (int i = 0; i < MAX_ITEMS; i++) {
                cout << "Item " << (i + 1) << ": ";
                inventory[i].display();
            }
            break;

        case 0:
            cout << "Exiting program.\n";
            break;

        default:
            cout << "Invalid choice. Try again.\n";
        }

    } while (choice != 0);
     cout<<"24CE118_chinmay";

    return 0;
}

