#include <iostream>
using namespace std;

class shape
{
protected:
    double radius;
public:
    shape(double r = 0.0) : radius(r) {}

    double getRadius() const
    {
        return radius;
    }

    void setRadius(double r)
    {
        radius = r;
    }
};

class Circle : public shape
{
public:
    Circle(double r = 0.0) : shape(r) {}

    double calculateArea() const
    {
        return 3.14 * radius * radius;
    }
};

int main()
   {
    int n;
    cout << "Enter the number of circles (max 100): ";
    cin >> n;

    if (n > 100)

    {
        cout << "Too many circles! Please enter up to 100." << endl;
        return 1;
    }

    Circle c[100];  // static array of Circle objects

    for (int i = 0; i < n; i++) {
        double rad;
        cout << "Enter radius for circle " << i + 1 << ": ";
        cin >> rad;
        c[i].setRadius(rad);
    }

    cout << "\nAreas of circles:\n";
    for (int i = 0; i < n; i++) {
        cout << "Circle " << i + 1
             << " - Radius: " << c[i].getRadius()
             << ", Area: " << c[i].calculateArea() << endl;
    }
    cout<<"24CE118_chinmay";

    return 0;
}
