/*
Vincent Fealy
Cosc 220
At first i tried doing this in multipe files but had some trouble
so i did it like this.
*/
#include <iostream>
#include <string>

using namespace std;

class Employee{
private:
    string firstName;
    string lastName;
    string jobTitle;
    double salary;

public:
Employee()
{ 
    lastName = " ";
    firstName = " ";
    salary = 0;
    jobTitle = " ";
}

Employee(string _lastName, string _firstName, double _salary, string _jobTitle)
{
    lastName = _lastName;
    firstName = _firstName;
    salary = _salary;
    jobTitle = _jobTitle;
}

virtual void calculateSalary() = 0;
void displayFirstLastName()
{
    cout << "First Name: " << firstName << "\n";
    cout << "Last Name: " << lastName << "\n";
}

void displayBaseSalary()
{
    cout << "Salary: " << salary << "\n";
}

void displayJobTitle()
{
    cout << "Job Title: " << jobTitle << "\n";}
        virtual void displayInformation()
    {
        cout << "First Name: " << firstName << "\n";
        cout << "Last Name: " << lastName << "\n";
        cout << "Salary: " << salary << "\n";
        cout << "Job Title: " << jobTitle << "\n";
    }
};

class Manager : public Employee
{
protected:
double bonusPayment;

private:
    string firstName;
    string lastName;
    string jobTitle;
    double salary;

public:
Manager()
{
    lastName = " ";
    firstName = " ";
    salary = 0;
    jobTitle = " ";
    bonusPayment = 0;
}
Manager(string _lastName, string _firstName, double _salary, string _jobTitle, double _bonus):Employee(_lastName, _firstName, _salary, _jobTitle)
{
     bonusPayment = _bonus;
}
void calculateSalary(){
    salary += bonusPayment;
}

void displayBonusPayment(){
    cout << "Bonus Payment: " << bonusPayment << "\n";
}

void displayInformation(){
    calculateSalary();
    Employee::displayInformation();
    cout << "Bonus Payment: " << bonusPayment << "\n";
}
};

class Executive : public Manager
{
protected:
double stockOption;


private:
    string firstName;
    string lastName;
    string jobTitle;
    double salary;

public:
Executive(string _lastName, string _firstName, double _salary, string _jobTitle, double _bonus, double _stockOption):Manager(_lastName, _firstName, _salary, _jobTitle, _bonus)
{
     stockOption = _stockOption;
}

void calculateSalary(){
    salary += bonusPayment + stockOption;
}
void displayStockOption(){
    cout << "Stock Option: " << stockOption << "\n";
}

void displayInformation(){
   calculateSalary();
    Employee::displayInformation();
    cout << "Bonus Payment: " << bonusPayment << "\n";
    cout << "Stock Option: " << stockOption << "\n";
}
};

class TechnicalStaff : public Employee
{
protected:
double profitSharing;

private:
    string firstName;
    string lastName;
    string jobTitle;
    double salary;

public:
TechnicalStaff()
{
    lastName = "";
    firstName = "";
    salary = 0;
    jobTitle = "";
    profitSharing = 0;
}

TechnicalStaff(string _lastName, string _firstName, double _salary, string _jobTitle, double _profit):Employee(_lastName, _firstName, _salary, _jobTitle)
{
    profitSharing = _profit;
}

void calculateSalary(){
    salary += profitSharing;
}

void displayProfitSharing(){
        cout << "Profit Sharing: " << profitSharing << "\n";
}

void displayInformation(){
    calculateSalary();
    Employee::displayInformation();
    cout << "Profit Sharing: " << profitSharing << "\n";
}
};

class SoftwareEngineer : public TechnicalStaff
{
    private:
    string firstName;
    string lastName;
    string jobTitle;
    double salary;

protected:
double overtimePay;

public:
SoftwareEngineer(string _lastName, string _firstName, double _salary, string _jobTitle, double _profit, double _overtimePay):TechnicalStaff(_lastName, _firstName, _salary, _jobTitle, _profit)
{
     profitSharing = _profit;
     overtimePay = _overtimePay;
}
void calculateSalary(){
    salary += overtimePay;
}

void displayOvertimePayment(){
    cout << "Overtime Payment: " << overtimePay << "\n";
}

void displayInformation()
{
   calculateSalary();
    Employee::displayInformation();
    cout << "Profit Sharing: " << profitSharing << "\n";
    cout << "Overtime Payment: " << overtimePay << "\n";
}
};

class TestEngineer : public TechnicalStaff
{
    private:
    string firstName;
    string lastName;
    string jobTitle;
    double salary;

public:

TestEngineer(string _lastName, string _firstName, double _salary, string _jobTitle, double _profit):TechnicalStaff(_lastName, _firstName, _salary, _jobTitle, _profit)
{
     profitSharing = _profit;
}
};

// This here is the driver function for this Employee program
int main()
{
    Employee *emp[3];

    Executive emp0 ("John", "Doe", 100000.00, "VP", 1000000.00, 2000.00);

    SoftwareEngineer emp1("Dylan", "Bob", 35000, "Software Engineer", 1500, 1000);

    TestEngineer emp2("Shmo", "Joe", 25000, "Test Engineer", 1500);

emp[0] = &emp0;
emp[1] = &emp1;
emp[2] = &emp2;

for (int i = 0; i < 3; i++)
{
    emp[i]->displayInformation();
    cout << "-------------------\n";
}
    return 0;
}

/*
when discussing binding this is dynamic usuing the differnt classes and inputing the info from parent function
*/