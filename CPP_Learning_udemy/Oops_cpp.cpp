#include<iostream>

using std::string;

class AbstractEmployee{
 virtual void AskForPromotion()=0;

};

class Employee:AbstractEmployee
{
    private:
     
        string Company;
        int Age;
    protected:
        string Name;
    public:
        void setName(string name)  //setter
        {
            Name = name;
        }
        string getName() //getter
        {
            return Name;
        }
        void setCompnay(string company)
        {
            Company = company;
        }
        string getCompany()
        {
            return Company;
        }
        void setAge(int age){
            if(age >= 18){
                Age = age;
            }
                
        }
        int getAge(){
            return Age;
        }
        void IntroduceYourSelf()
        {
            std::cout << "Name - " << Name << std::endl;
            std::cout << "Comapny- " << Company << std::endl;
            std::cout << "Age-"<< Age << std::endl;

        }
        Employee(string name, string company, int age){

            Name = name;
            Company = company;
            Age = age;

        }
        void AskForPromotion(){
            if(Age > 30)
               std::cout << Name << " got promoted!" << std::endl;
            else
                std::cout << Name << "Sorry! No Promotion"<< std::endl;
        }
        virtual void Work()
        {
            std::cout << Name << " is checking email, task backlog, performaing tasks..." << std::endl;

        }
  
};

class Developer:public Employee{
    public:
      string FavProgrammingLanguage;
      Developer(string name, string company, int age, string favProgrammingLanguage):
             Employee(name, company, age)
      {
            FavProgrammingLanguage = favProgrammingLanguage;

      }
      void FixBug(){
       //td::cout << getName() << " fixed bug using "<< FavProgrammingLanguage << std::endl;
        std::cout << Name << " fixed bug using "<< FavProgrammingLanguage << std::endl;

      }
      void Work()
      {
            std::cout << Name << " is writing " << FavProgrammingLanguage << " code" << std::endl;

      }

  
};
class Teacher:public Employee{
public:
    string Subject;
    void PrapareLesson(){
        std::cout << Name << "is preparing " << Subject << " lesson" << std::endl;

    }
    Teacher(string name, string company, int age, string subject):Employee(name, company, age){
        Subject = subject;
    }
    void Work()
    {
            std::cout << Name << " is Teaching "<< Subject << std::endl;

    }
    
};

int main()
{
    
    Developer d = Developer("Saldina", "YT-Code", 25, "C++");
    Teacher t = Teacher("Jack", "Cool School", 35, "History");


    Employee *emp1 = &d;
    Employee *emp2 = &t;
   

    emp1->Work();
    emp2->Work();

    return 0;


}
