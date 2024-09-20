#include<iostream>
#include <vector>

class List{
    //only the class itself
     private:

  //Inherits or belongs to class
     protected:

//anything including class
     public:
      //Constructor
       List(){

       }
       //Destructor
       ~List(){

       }

      std::vector<std::string> list;
      std::string name;
        void print_menu();
        void print_list();
        void add_item();
        void delete_item();

};