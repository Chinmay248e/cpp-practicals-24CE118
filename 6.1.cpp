#include <iostream>
using namespace std;

class DynamicArray {
private:
    int* data;
    int capacity;
    int size;

    void resize() {
        cout << "resize function is called" << endl;
        capacity *= 2;
        int* new_data = new int[capacity];
        for (int i = 0; i < size; i++) {
            new_data[i] = data[i];  // Corrected this line
        }
        delete[] data;
        data = new_data;
    }

public:
    // Constructor
    DynamicArray() {
        capacity = 4;
        size = 0;
        data = new int[capacity];
    }

    // Destructor
    ~DynamicArray() {
        delete[] data;
    }

    void insert(int value) {
        if (size == capacity) {
            resize();
        }
        data[size++] = value;
    }

    void remove(int index) {
        if (index < 0 || index >= size) {
            cout << "Invalid index" << endl;
            return;
        }
        for (int i = index; i < size - 1; i++) {
            data[i] = data[i + 1];
        }
        size--;  // Corrected placement (was inside the loop before)
    }

    int getindex(int index) const {
        if (index < 0 || index >= size) {
            cout << "Invalid index" << endl;
            return -1;
        } else {
            return data[index];
        }
    }

    int get_size() const {
        return size;
    }

    void pointArray() const {
        for (int i = 0; i < size; i++) {
            cout << data[i] << " ";
        }
        cout << endl;
    }
};

// Main function
int main() {
    DynamicArray arr;

    arr.insert(10);
    arr.insert(20);
    arr.insert(30);
    arr.insert(40);
    arr.insert(50);

    arr.pointArray();  // Output: 10 20 30 40 50

    arr.remove(2);     // Remove element at index 2 (30)
    arr.pointArray();  // Output: 10 20 40 50

    cout << "Element at index 1: " << arr.getindex(1) << endl;
    cout << "Size of array: " << arr.get_size() << endl;

    return 0;
}
