#include<iostream>
using namespace std;

//creating class
class Room{
    public:
      double length;
      double breadth;
      double height;

      double caluculate_area()
      {
        return length * breadth;

      }
      double caluculate_volume()
      {
        return length * breadth * height;

      }



};

int main()
{
  Room room1, room2;

  //assign values to data memebers

  room1.length = 42.5;
  room1.breadth = 34.5;
  room1.height = 19.2;
 
  room2.length = 45.7;
  room2.breadth = 34.5;
  room2.height = 23.4;


  //Caluculate the area & volume

  cout << "Area of the room = " << room1.caluculate_area() << endl;
  cout << "Volume of the room: " << room1.caluculate_volume() << endl;

  cout << "Area of the room = " << room2.caluculate_volume() << endl;
  cout << "Volume of the room: " << room2.caluculate_volume() << endl;

  return 0;






}