#include<iostream>
#include "bookShopManage.h"


//--------Member functions---------//

//books class

void books ::add()
{
    std::cout << "Enter the name of the book: \n";
    std::cin >> name;
    std::cout << "Enter the name of the author : \n";
    std::cin >> author;
    std::cout << "Enter the Price: \n";
    std::cin >> price;
    std::cout << "Enter the Qunatity received: \n";
    std::cin >> quantity;
    stmt.str("");
    stmt << "Insert into books(name,auth,price,quantity) values('" << name << "','" << author << "'," << price << "," << quantity << ");";
    query = stmt.str();
    q = query.c_str();
    mysql_query(conn,q);
    res_set = mysql_store_result(conn);
    if(!(res_set))
    {
        std::cout << "Book record inserted Successfuly" << "\n"; 
    }
    else
    {
        std::cout << " Entry Error!\t" << "Contact Technical Team\n";
    }


}
void books::update_price()
{
    char choice;
    std::cout << "Enter the id of the book for updating the price : ";
    std::cin >> id;
    stmt.str("");
    stmt << "Select name,price from books where id = " << id << ";";
    query = stmt.str();
    q = qury.c_str();
    mysql_query(conn,q);
    res_set = mysql_store_result(conn);
    if((row = mysql_fetch_row(res_set)) != NULL)
    {
        std::cout << "The name of the book is : " << row[0] << "\n";
        std::cout << "The current price of the book is : " << row[1] << endl;
        std::cout << "Do you want tot update the Price[Y/N] : ";
        std::cin >> choice;
        if(choice == 121 || choice ==89)
        {
            std::cout << "Enter the new price: ";
            std::cin >> price;
            stmt.str("");
            stmt << "Update books set price = " << price << "where id = " << id << "\n";
            if(!(res_set))
            {
                std::cout << "book price updated Successfully" << "\n";

            }
            else{
                std::cout << "Entry error!" << "Contact Technical Team!";
            }
        }
        else
        {
            std::cout << "no changes are made!"
        }

    }
    else
    {
        std::cout << "no book found\n";
    }
}
void books::search()
{

    std::cout << "Enter book id for details: ";
    std::cin >> id;
    stmt.str("");
    stmt << "Select * from books where id = " << id << ";";
    query = stmt.str();
    q = query.c_str();
    mysql_query(conn,q);
    res_set = mysql_store_result(conn);
    if((row = mysql_fetch_row(res_set)) != NULL)
    {
        std::cout << "The details of book Id " << row[0] << "\n";
        std::cout << "The name of the book is : " < row[1] << "\n";
        std::cout << "The author of the book is : " << row[2] << "\n";
        std::cout << "The price of the book is : " << row[3] << "\n";
        std::cout << "The inventory count is : " << row[4] << "\n"; 
    }
    else
    {
        std::cout << "No record found\n";
    }


}

void books::update()
{
   int book_id[100], quantity[100], i=0;max;
   stmt.ste("");
   stmt << "Select book_id, quantity from purchases where receives = 'T' and inv is NULL;" << "\n";
   query = stmt.str();
   q = query.c_str();
   mysql_query(conn, q);
   res_set = mysql_stmt_store_result(conn);
   stmt.str("");
   stmt << "Update purchases set inv = 1 where receives = 'T' and inv is NULL;";
   query = stmt.str();
   q= query.c_str();
   mysql_query(conn,q);
   while((row = mysql_fetch_row(res_set)) != NULL)
   {
      book_id[i] = (int) row[0];
      quantity[i] = (int) row[1];
      i++;
   }
   max = i;
   for(i = 0; i <= max; i++)
   {
        stmt.str("");
        stmt << "Update books set quantity = " << quantity[i] << "where id = " << book_id[i] << ";";
        query = stmt.str();
        q = query.c_str();
        mysql_query(conn, q);
   }
   std::cout << "The orders received have been updated\n";

}
void books::display()
{
  int i = 0;
  query = "Select * from books;";
  q = query.c_str();
  mysql_query(conn, q);
  res_set = mysql_store_result(conn);
  while((row = mysql_fetch_row(res_set)) != NULL)
  {
     std::cout << "name for book " << ++i ":" << row[1] << "\n";
     std::cout << "Name of Author : " << row[2] << "\n";
     std::cout << "Price : " << row[3] << "\n";
     std::cout << "Qunatity : " << row[4] << "\n";


  }
   

}

//---suppliers classes----//

void suppliers::add_supplier()
{

   std::cout << "Enter the supplier Name: ";
   std::cin >> name;
   std::cout << "Enter phone number : ";
   std:cout >> phone_num;
   std::cout << "Enter the address(4 lines) : ";
   std::cin >> address_line1;
   std::cin >> address_line2;
   std::cin >> address_city;
   std::cin >> zipcode;
   std::cout << "Enter State: ";
   std::cin >> address_state;

   stmt.str("");
   stmt << "Insert into suppliers(name, phone_no, address1, address2, address_city, address_state) values('"<< name << "'," << phone_num << ", '" << address_line1 << "','" << address_line2 << "','" << address_city << "','" << zipcode << "','" << address_state << " ');";
   query = stmt.str();
   q = query.c_str();
   mysql_query(conn, q);
   res_set = mysql_store_result(conn);
   if(!(res_set))
   {
      std::cout << "Supplier record inserted succesfully" << "\n";
   }
   else
   {
      std::cout << "Entry Error!" << "Contact Technical support" << "\n";
   }

}

void suppliers::remove_supplier()
{
    std::cout << "Enter the supplier id to remove the suplier: ";
    std::cin >> id;
    stmt.str("");
    stmt << "Delete from suppliers where id = " << id << ";";
    query = stmt.str();
    q = query.c_str();
    mysql_query(conn, q);
    std::cout << "Supplier removed\n";
}

void suppliers::search_id()
{

   std::cout << "Enter the supplier id to find the supplier details: ";
   std::cin >> id;
   stmt << "Select * from supplieras where id = " << id << ";";
   query = stmt.str();
   q = query.c_str();
   mysql_query(conn, q);
   res_set = mysql_store_result(conn);
   if((row = mysql_fetch_row(row_set)) != NULL)
   {
      cout << "Details of supplier id: " << row[0] << "\n";
      cout << "Name: " << row[1] << "\n";
      cout << "Phone number: " << row[2] << "\n";
      cout << "Address Line 1: " << row[3] << "\n";
      cout << "Address Line 2: " << row[4] << "\n";
      cout << "City: " << row[5] << "\n";
      cout << "State : " << row[6] << "\n";
      cout << "Zipcode : " << row[7] << "\n";    

   }
   else
   {
       std::cout << "No suuplier found!!\n";
   }
}

//--Purchase classes---///


void purchases::new_order()
{

   std::cout << "Enter the book Id: ";
   std::cin >> book_id;
   std::cout << "Enter Supplier Id: ";
   std::cin >> supplier_id;
   std::cout << "Enter the Qunatity : ";
   std::cin >> quantity;
   std::cout << "Estimated expected Delivery(in days) : ";
   std::cin >> eta;
   stmt.str("");
   stmt << "Insert into purchases(book_id, sup_id, quantity,date_order, eta) values ( " << book_id << "," << supplier_id << "," << quantity << ", curdate(), Date_add(curddate(), INTERVAL " << eta << " DAY)" << ";";
   query = stmt.str();
   q = query.c_str();
   mysql_query(conn, q);
   std::cout << "New order Added!!\n";

}

void purchases::mark_receive()
{
  std::cout << "Enter the order id for order received : ";
  std::cin >> order_id;
  stmt.str("");
  stmt << "Update purchases set receeived = 'T' where ord_id = " << order_id << ";";
  query = stmt.str();
  q = query.c_str();
  mysql_query(conn, q);
  std::cout << "Received marked successfully\n";

}

void purchases::mark_cancel()
{
    std::cout << "Enter the order id for cancelled : ";
    std::cin >> order_id;
    stmt.str("");
    stmt << "Update purchases set received = 'C' where ord_id = " << order_id << ";";
    query = stmt.str();
    q = query.c_str();
    mysql_query(conn, q);
    std::cout << "Cancelled marked successfully\n";
}

void purchases::view()
{
   int c;
   std::cout << "Select an Option" << "\n";
   std::cout << "1. View orders not Receive" << "\n";
   std::cout << "2. View orders Cancelled" << "\n";
   std::cout << "3. View orders Received" << "\n";
   std::cout << "Enter your choice : ";
   std::cin >> c;
   if(c == 1)
   {
        received = 'F';
   }
   else if(c == 2)
        received = 'C';
   else if(c == 3)
        received = 'T';
    else 
        return;

    stmt.str("");
    stmt << "Select * from purchases where received = '" << received << "';";
    query = stmt.str();
    q = query.c_str();
    mysql_query(conn, q);
    res_set = mysql_store_result(conn);
    if(c == 1)
    {
        std::cout << "Orders not received are : " << "\n";

    }
    else if(c == 2)
    {
        std::cout << "Orders cancelled are : "<< "\n";
    }
    else if(c == 3)
    {
        std::cout << "Orders received are : " << "\n";
    }
    while((row = mysql_fetch_row(res_set)) != NULL)
    {
          std::cout << "\n";
          std::cout << "Order Id: " << row[0] << "\n";
          std::cout << "Book Id: " << row[1] << "\n";
          std::cout << "Supplier Id: " << row[2] << "\n";
          std::cout << "Quantity: " << row[3] << "\n";
          std::cout << "Date Ordered: " << row[4] << "\n";
          std::cout << "Estimate Delivery Date: " << row[5] << "\n";
          std::cout << "\n";

    }
    std::cout << "\n";

}

//----Employee class-----//
void employees::add_emp()
{
    std::cout << "Enter your Id for your verification: ";
    std::cin >> id;
    stmt.str("");
    stmt << "Select mgr_start from employees where id = " << id << ";";
    query = stmt.str();
    q = query.c_str();
    mysql_query(conn, q);
    res_set = mysql_store_result(conn);
    if((row = mysql_fetch_row(res_set)) == NULL)
    {
         std::cout << "Employees not found!!" << "\n";
         return;
    }
    else
    {
        mgr_status = (char *) row[0];
        if(mgr_status == "T")
        {
            std::cout << "You do not hav Manager rights!!\n";
            return;
        }
    }

    std::cout << "Enter the details of new employees!!";
    std::cout << "Enter the name of the employess : ";
    std::cin >> name;
    std::cout << "Enter the Address(in 3 lines) : " << "\n";
    std::cin >> address_line1;
    std::cin >> address_line2;
    std::cin >> address_city;
    std::cin >> zipcode;
    std::cout << "Enter State: ";
    std::cin >> address_state;
    std::cout << "Enter phone number : ";
    std::cin >> phone_num;
    std::cout << "Enter the Salary : ";
    std::cin >> salary;
    stmt.str("");
    stmt << "Insert into employees(name, add1, addr2, addr_city, zipcode, addr_stat, phone_num, doj, slalry) values('" << name << "','" << address_line1 << "','" << address_line2 << "','" << address_city << "','" << zipcode << "','" << address_state << "','" << phone_num << ",curdate()," << salary << ");";
    query = stmt.str();
    q = query.c_str();
    mysql_quey(conn, q);
    std::cout << "Employee added Successfully!" << "\n";
}

void employees::assign_mgr_status()
{ 
    std::cout << "Enter your Id for verification: ";
    std::cin >> id;
    stmt.str("");
    stmt << "Select mgr_stat from employess where id = " << id << ";";
    query = stmt.str();
    q = query.c_str();
    mysql_query(conn, q);
    res_set = mysql_store_result(conn);
    if((row = mysql_fetch_row(res_set)) == NULL)
    {
           std::cout << "Employess not found!!" << "\n";
           return;
    }
    else
    {
         mgr_status = (char *) row[0];
         if(mgr_status == "T")
         {
              std::cout << "You do not have Manager righs!!\n";
              return;
         }
    }

    std::cout << "Enter the employee id to grant manager status: ";
    std::cin >> id;
    stmt.str("");
    stmt << "update employess set mgr_stat = 'T' where id = " << id << ";";
    query = stmt.str();
    q = query.c_str();
    mysql_query(conn, q);
    std::cout << "\n";
    std::cout << "Manager Status ganted";
    std::cout << "\n";

}

void employees::serach_emp()
{
    std::cout << "Enter your Id for searching an employee: ";
    std::cin >> id;
    stmt.str("");
    stmt << "Select mgr_stat from employess where id = " << id << ";";
    query = stmt.str();
    q = query.c_str();
    mysql_query(conn, q);
    res_set = mysql_store_result(conn);
    if((row = mysql_fetch_row(res_set)) == NULL)
    {
            std::cout << "Employess Datails" << "\n";
            std::cout << "Name : " << row[1] << "\n";
            std::cout << "Address:  " << row[2] << "\n" << row[3] << "\n" << row[4] << "\n";
            std::cout << "State: " << row[5] << "\n";
            std::cout << "Zip code: " << row[6] <, "\n";
            std::cout << "Contact no: " << row[7] << "\n";
            std::cout << "Date of joining" << row[8] << "\n";
            std::cout  << "Salary : " << row[9] << "\n";
    }
    else
    {
        std::cout << "No Employes found!!\n";
    }

}

void employees::display()
{
    int i = 0;
    query = "Select * from employees;";
    q = query.c_str();
    mysql_query(conn, q);
    res_set = mysql_store_result(conn);
    if((row = mysql_fetch_row(res_set)) != NULL)
    {
        do
        {
            cout << "Employees Details of Emp no. " << ++i << endl;
            cout << "Name : " << row[1] << "\n";
            std::cout << "Address:  " << row[2] << "\n" << row[3] << "\n" << row[4] << "\n";
            std::cout << "State: " << row[5] << "\n";
            std::cout << "Zip code: " << row[6] <, "\n";
            std::cout << "Contact no: " << row[7] << "\n";
            std::cout << "Date of joining" << row[8] << "\n";
            std::cout  << "Salary : " << row[9] << "\n";
       }while((row = mysql_fetch_row(res_set)) != NULL);

       else
       {
           std::cout << "Employes Not found!\n";
       }

 }
}

void employees::update_sal()
{
    std::cout << "Enter the  id for updatingsalary of the employee : ";
    std::cin >> id;
    std::cout << "Enter the updated salary : ";
    std::cin >> salary;
    stmt.str("");
    stmt << "Update employees set salary = " << salary << " where id = " << id << ";";
    query = stmt.str();
    q = query.c_str();
    mysql_query(conn, q);
    std::cout << "Salary updated successfully\n";
}


//---Members Class ----//

vid members::add_mem()
{

    std::cout << "Enter the name of the member: ";
    std::cin >> name;
    std::cout << "Enter the Address(in 4 lines) : " << "\n";
    std::cin >> address_line1;
    std::cin >> address_line2;
    std::cin >> address_city;
    std::cout << "Enter State: ";
    std::cin >> address_state;
    std::cout << "Enter zip code : ";
    std::cin >> zipcode;
    std::cout << "Enter phone number : ";
    std::cin >> phone_num;
    stmt.str("");
    stmt << "Insert into members(name, add1, addr2, addr_city, addr_stat,zipcode, phone_num, doj, slalry) values('" << name << "','" << address_line1 << "','" << address_line2 << "','" << address_city << "','" << address_state << "','" << zipcode << "','" << phone_num << ",curdate()," << salary << ");";
    query = stmt.str();
    q = query.c_str();
    mysql_quey(conn, q);
    //Fetching member id....
    stmt.str("");
    stmt << "Slect id from memebrs where phone_no = " << phone_num << ";";
    query = stmt.str();
    q = query.c_str();
    mysql_query(conn,q);
    res_set = mysql_store_result(conn);
    row = mysql_fetch_row(res_set);
    std::cout << "Member added successfully" << "\n" << "Member Id: " << row[0];
    std::cout << "\n";


}

void members::refresh()
{
  query = "Update members set valid = 'invalid' where end_date <=curdate();";
  q = query.c_str();
  mysql_query(conn, q);

}
void members::search_mem()
{
    std::cout << "Enter member id : ";
    std::cin >> id;
    stmt.str("");
    stmt << "Select * from members where id = " << id << ";";
    query = stmt.str();
    q = query.c_str();
    mysql_query(conn, q);
    res_set = mysql_store_result(conn);
    if((row = mysql_fetch_row(res_set)) != NULL)
    {
        
            cout << "Member Details:" << endl;
            cout << "Name : " << row[1] << "\n";
            std::cout << "Address:  " << row[2] << "\n" << row[3] << "\n" << row[4] << "\n";
            std::cout << "State: " << row[5] << "\n";
            std::cout << "Zip code: " << row[6] <, "\n";
            std::cout << "Contact no: " << row[7] << "\n";
            std::cout << "membership begin date:" << row[8] << "\n";
            std::cout  << "membership begin date : " << row[9] << "\n";
            std::cout  << "membership status : " << row[9] << "\n";

       }
       else
       {
           std::cout << "Member Not found!\n";
       }

 }

//----Sales class---//

void sales::add()
{
    std::cout << "Enter member id : ";
    std::cin >> member_id;
    std::cout << "Enter book id : ";
    std::cin >> book_id;
    std::cout << "Enter quantity : ";
    std::cin >> quantity;
    stmt.str("");
    stmt = "Select price*" << quantity << "from books  where id = " << book_id << ";";
    query = stmt.str();
    q = query.c_str();
    mysql_query(conn, q);
    res_set = mysql_store_result(conn);
    if((row = mysql_fetch_row(res_set)) != NULL)
    {
        
            std::cout << "The bill amount :" << row[0] << "\n";
            

    }

    else
    {
           std::cout << "Book id invalid\n";
           getch();
           return;
    }
    stmt.str("");
    stmt = "insert into sales(mem_id,book_id, qty, amt, sales_date) values(" << member_id << "," << quantity << "," << amount << ", curdate());";
    query = stmt.str();
    q = query.c_str();
    mysql_query(conn, q);
    //Fetching invoice id
    stmt << "select inv_id from sales where mem_id = " << member_id << " AND book_id = " << book_id << " AND qty = " << quantity << " AND sales_date = curdate();";
    query = stmt.str();
    q = query.c_str();
    mysql_query(conn, q);
    res_set = mysql_store_result(conn);
    if((row = mysql_fetch_row(res_set)) != NULL)
    {
        
        std::cout << "The Invoice id for the bill is " << row[0] << "\n";
     
    }
    else
    {
        std::cout << "The entered details may be wrong. " << "\n" << "Please recheck and enter again\n";
    }

}

void sales::find_total_sales()
{
    query = "select sum(amt) from sales where year(sales_date) = year(curdate());";
    q = query.c_str();
    mysql_query(conn, q);
    res_set = mysql_store_result(conn);
    if((row = mysql_fetch_row(res_set)) != NULL)
    {
        
        std::cout << "Total sales of ths year :  " << row[0] << "\n";
     
    }
}

//-----Functions--------

int main_menu()
{

   int c;
   std::cout << "**********************************************" << "\n";
   std::cout << "------------BOOKSHOP MANAGEMENT SYSTEM-----------\n";
   std::cout << "**********************************************" << "\n";
   std::cout << "1. BOOKS\n";
   std::cout << "2. SUPPLIERS\n";
   std::cout << "3. PURCHASERS\n";
   std::cout << "4. EMPLOYEES\n";
   std::cout << "5. MEMBERS\n";
   std::cout << "6. SALES\n";
   std::cout << "7. EXIT\n";
   std::cout << "Enter your choice: ";
   std::cin >> c;
   swithc(c)
   {     
        case 1:
              system("cls");
              book_menu();
              getch();
              break;
        case 2:
              system("cls");
              supplier_menu();
              getch();
              break;
        case 3:
              system("cls");
              purchase_menu();
              getch();
              break;
        case 4:
              system("cls");
              employee_menu();
              getch();
              break;
        case 5:
              system("cls");
              members_menu();
              getch();
              break;
        case 6:
              system("cls");
              sales_menu();
              getch();
              break;
        case 7:
              exit(1);
        default:
              system("cls");
              std::cout << "Wrong Input " << "\n" << "Invalid input\n";
              getch();
              break;
   }
   return;


}



//Book menu
void book_menu()
{
    int c;
    books b;
    std::cout << "**********************************************" << "\n";
    std::cout << "------------BOOK MENU-----------\n";
    std::cout << "**********************************************" << "\n";
    std::cout << "1. ADD\n";
    std::cout << "2. UPDATE PRICE\n";
    std::cout << "3. SEARCH\n";
    std::cout << "4. UPDATE STATUS\n";
    std::cout << "5. DISPLAY ALL\n";
    std::cout << "6. RETURN TO MAIN MENU\n";
    std::cout << "Enter your choice: ";
    std::cin >> c;
    swithc(c)
   {     
        case 1:
              b.add();
              break;
        case 2:
              b.update_price();
              break;
        case 3:
              b.search();
              break;
        case 4:
              b.update();
              break;
        case 5:
              b.dispaly();
              break;
        case 6:
              return;
              break;
        default:
              std::cout << "Wrong Input " << "\n" << "Invalid input\n";
              break;
   }
   return;

}

//Supplier menu
void supplier_menu()
{
    int c;
    suppliers s;
    std::cout << "**********************************************" << "\n";
    std::cout << "------------SUPPLIER MENU-----------\n";
    std::cout << "**********************************************" << "\n";
    std::cout << "1. ADD\n";
    std::cout << "2. REMOVE\n";
    std::cout << "3. SEARCH\n";
    std::cout << "4. RETURN TO MAIN MENU\n";
    std::cout << "Enter your choice: ";
    std::cin >> c;
    swithc(c)
   {     
        case 1:
              s.add_supplier();
              break;
        case 2:
              s.remove_supplier();
              break;
        case 3:
             s.search_id();
              break;
        case 4:
              return;
              break;
        default:
              std::cout << "Wrong Input " << "\n" << "Invalid input\n";
              break;
   }
  

}
//Purchaser menu
void purchase_menu()
{
    int c;
    purchases p;
    std::cout << "**********************************************" << "\n";
    std::cout << "------------PURCHASES MENU-----------\n";
    std::cout << "**********************************************" << "\n";
    std::cout << "1. New Order\n";
    std::cout << "2. View All\n";
    std::cout << "3. Cancel Order\n";
    std::cout << "4. Received order\n";
    std::cout << "5. RETURN TO MAIN MENU\n";
    std::cout << "Enter your choice: ";
    std::cin >> c;
    swithc(c)
   {     
        case 1:
              p.new_order();
              break;
        case 2:
              p.view();
              break;
        case 3:
             p.mark_cancel();
              break;
        case 4:
             p.mark_receive();
              break;
        case 5:
             return;
        default:
              std::cout << "Wrong Input " << "\n" << "Invalid input\n";
              break;
   }

}
//Employees menu
void employee_menu()
{
    int c;
    employees e;
    std::cout << "**********************************************" << "\n";
    std::cout << "------------EMPLOYEE MENU-----------\n";
    std::cout << "**********************************************" << "\n";
    std::cout << "1. New Employee\n";
    std::cout << "2. Search Employee All\n";
    std::cout << "3. Assign Manager\n";
    std::cout << "4. View All\n";
    std::cout << "4. Update Salary\n";
    std::cout << "5. RETURN TO MAIN MENU\n";
    std::cout << "Enter your choice: ";
    std::cin >> c;
    swithc(c)
   {     
        case 1:
              e.add_emp();
              break;
        case 2:
              e.search_emp();
              break;
        case 3:
             e.assign_mgr_status();
              break;
        case 4:
             e.display();
              break;
        case 5:
             e.update_sal();
             break;
        case 6:
             return;
        default:
              std::cout << "Wrong Input " << "\n" << "Invalid input\n";
              break;
   }


}

//members menu
void members_menu()
{
    int c;
    members m;
    m.refresh();
    std::cout << "**********************************************" << "\n";
    std::cout << "------------MEMBERS MENU-----------\n";
    std::cout << "**********************************************" << "\n";
    std::cout << "1. New Member\n";
    std::cout << "2. Search Member All\n";
    std::cout << "3. RETURN TO MAIN MENU\n";
    std::cout << "Enter your choice: ";
    std::cin >> c;
    swithc(c)
   {     
        case 1:
              m.add_mem();
              break;
        case 2:
              m.search_mem();
              break;
        case 3:
             return;
        default:
              std::cout << "Wrong Input " << "\n" << "Invalid input\n";
              break;
   }



}

//Sales Menu
void sales_menu()
{
    int c;
    sales s;
    std::cout << "**********************************************" << "\n";
    std::cout << "------------SALES MENU-----------\n";
    std::cout << "**********************************************" << "\n";
    std::cout << "1. Add New Bill\n";
    std::cout << "2. Total Sales of the Year\n";
    std::cout << "3. RETURN TO MAIN MENU\n";
    std::cout << "Enter your choice: ";
    std::cin >> c;
    swithc(c)
   {     
        case 1:
              s.add();
              break;
        case 2:
              s.find_total_sales();
              break;
        case 3:
             return;
        default:
              std::cout << "Wrong Input " << "\n" << "Invalid input\n";
              break;
   }

}

//Password function
void password()
{
    int num = 0;
    std::cout << "Enter password: ";
    for(int i=0; i < 4: i++)
    {
        num = num*10+(getch()-48);
        std::cout << "*";
    }
    if(num == PASSWORD)
    {
        std::cout << "Correct password" << "\n";
        std::cout << "Press any key...";
        getch();
    }
    else
    {
        std::cout << "InCorrect password" << "\n";
        std::cout << "Press any key...";
        getch();
        exit(1);
       
    }
    return;

}

int main()
{
    password();
    conn = mysql_init(0);
    conn = mysql_real_connect(conn, HOST, USER, PASSCODE, DATABASE, PORT, NULL,0);
    int choice;
    if(conn)
    {
        while(1)
        {
            system("cls");
            main_menu();
        }
    }
    else{
        system("cls");
        std::cout << "Erro while connecting to database" << "\n" << "Contact Technical Expert\n";
        getch();

    }
    return 0;
}