#include <iostream>
#include <queue>
using namespace std;

class fuel {
protected:
    string FuelType;
public:
    fuel(string f) {
        FuelType = f;
    }
    void displayFuel() const {
        cout << "Fuel Type: " << FuelType << endl;
    }
};

class Brand {
protected:
    string BrandName;
public:
    Brand(string b) {
        BrandName = b;
    }
    void displayBrand() const {
        cout << "Brand: " << BrandName << endl;
    }
};

class car : public fuel, public Brand {
protected:
    string model;
public:
    car(string fuelType, string brand, string mdl)
        : fuel(fuelType), Brand(brand), model(mdl) {}

    void displayCarDetails() const {
        displayFuel();
        displayBrand();
        cout << "Model Name: " << model << endl;
    }
};

int main() {
    queue<car> carQueue;
    int n;
    string f, b, m;

    cout << "Enter the number of vehicles: ";
    cin >> n;
    cin.ignore();

    for (int i = 0; i < n; i++) {
        cout << "\nFor vehicle " << i + 1 << ":\n";

        cout << "Enter fuel type: ";
        getline(cin, f);

        cout << "Enter brand name: ";
        getline(cin, b);

        cout << "Enter model: ";
        getline(cin, m);

        carQueue.push(car(f, b, m));
    }

    cout << "\n--- Vehicle Details ---\n";
    while (!carQueue.empty()) {
        carQueue.front().displayCarDetails();
        cout << "----------------------------" << endl;
        carQueue.pop();
    }

    return 0;
}

