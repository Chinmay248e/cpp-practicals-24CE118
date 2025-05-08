#include<iostream>
using namespace std;
class Point
{
    int x,y;
public:
    Point(int x=0,int y=0)
    {
        this->x=x;
        this->y=y;
    }
    Point* move(int &dx,int &dy)
    {
        x+=dx;
        y+=dy;
        return this;
    }
    void display() const
    {
        cout << "Point (" << x << ", " << y << ")" << endl;
    }

};
int main()
{
     int x, y;

    cout << "Enter initial x and y coordinates: ";
    cin >> x >> y;
    Point*p=new Point(x,y);
    cout<<"initial position";
    p->display();
    int dx1,dy1,dx2,dy2;
    cout<<"enteer dx1 and dy1";
    cin>>dx1>>dy1;
     cout<<"enteer dx2 and dy2";
    cin>>dx2>>dy2;

    p->move(dx1,dy1)->move(dx2,dy2);

     cout << "Final position after movements: ";
    p->display();

    delete p;
    return 0;


}
