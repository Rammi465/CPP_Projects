#ifndef BOOKSHOP_MANAGE_H
#define BOOKSHOP_MANAGE_H

#include <windows.h>
#include<mysqlStubs.h>
#include <sstream>
#include <conio.h>
#include <iostream>
#define HOST "127.0.0.1"
#define USER "root"
#define PASSCODE "password" /* MYSQL password*/
#define DATABASE "Management"
#define PORT 3306
#define PASSWORD "a1b2c3d4"


//------Global variable-----//

MYSQL *conn;
MYSQL_RES *res_set;
MYSQl_ROW row;
stringstream stmt;
const char * q;
std::string quer;

typedef struct
{
    int date;
    int month;
    int year;
} date;

//-----Classes-----//
class books
{
    int id;  //primary key
    std::string name;
    std::string author;
    int price;
    int quantity;
  public:
  //methods
    void add();
    void update_price();
    void search();
    void update();
    void display();

};
class suppliers
{
    int id;
    std::string name;
    long int phone_num;
    std::string address_line1;
    std::string address_line2;
    std::string address_city;
    std::string address_state;
    int zipcode;
 public:
    void add_supplier();
    void remove_supplier();
    void search_id();
    

};

class purchases
{
    int order_id;
    int book_id;
    int supplier_id;
    int quantity;
    date order_date;
    int eta;
    char received;
    int inv;
public:
   void new_order();
   void view();
   void mark_cancel();
   void mark_receive();


};

class employees
{
    int id;
    std::string name;
    long int phone_num;
    std::string address_line1;
    std::string address_line2;
    std::string address_city;
    std::string address_state;
    int zipcode;
    date date_of_joining;
    long int salary;
    std::string mgr_status;
public:
  void add_emp();
  void serach_emp();
  void assign_mgr_status();
  void display();
  void update_sal();


};

class members
{
    int id;
    std::string name;
    long int phone_num;
    std::string address_line1;
    std::string address_line2;
    std::string address_city;
    std::string address_state;
    int zipcode;
    date begin_date;
    date end_date;
    std::string validity;
 public:
   void add_mem();
   void refresh();
   void search_mem();

};

class sales
{
   int invoice_id;  //primary key
   int member_id;
   int book_id;
   int quantity;
   int amount;
   data date_s;
public:
  void add();
  void find_total_sales();

};

//-----Function declarations------------//

void book_menu();
void supplier_menu();
void purchase_menu();
void employee_menu();
void members_menu();
void sales_menu();

void password();



























#endif