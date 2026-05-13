#include<iostream>

using namespace std;

class Line{
public:
    void setLength(double len);
    double getLength(void);
   // Line(); //constructor wih out parameters
   Line(double len);///constructor with parameters

private:
   double length;
};
//Member functions definition including constructor
//Line::Line(void)
Line::Line(double len)
{
   cout << "Obeject is being created, length = " << len << endl;
   length = len;

}
void Line::setLength(double len)
{
    length = len;

}

double Line::getLength( void)
{
    return length;
}

int main()
{
    Line line1(10.0);

    cout << "Lenght of Line: " << line1.getLength() << endl;

    line1.setLength(6.0);

    cout << "Length of line1 : " << line1.getLength() << endl;

    return 0;
}
