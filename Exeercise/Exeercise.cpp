

#include <iostream>
#include <string>

using namespace std;
class clsPerson {
private:
    int _ID = 0;
    string _FirstName;
    string _LastName;
    string _Email;
    string   _Phone;
public:
   
    clsPerson(string FName , string LName , string EMail , string Phone)
    {
        _ID++;
        _FirstName = FName;
        _LastName = LName;
        _Email = EMail;
        _Phone = Phone;

    }
    int GetID() {
        return _ID;
    }
    void SetFirstName(string FName) {
        _FirstName = FName;
    }
    string GetFirstName() {
        return _FirstName;
    }
    void SetLastName(string LName) {
        _LastName = LName;
    }
    string GetLastName() {
        return _LastName;
    }
    void SetEmail(string EMail) {
        _Email = EMail;
    }
    string GetEmail() {
        return _Email;
    }
    void SetPhone(string PHone) {
        _Phone = PHone;
    }
    string GetPhone() {
        return _Phone ;
    }
    void PrintInfo() {
        cout << "Info of Person(" << _ID << ")" << endl;
        cout << "___________________________________________" << endl;
        cout << "ID:\t" << _ID << endl;
        cout << "First Name:\t" << _FirstName << endl;
        cout << "Last Name:\t" << _LastName << endl;
        cout << "Full Name:\t" << _FirstName + " " + _LastName << endl;
        cout << "Phone Number:\t" << _Phone << endl;
        cout << "E-Mail Address:\t" << _Email << endl;
        cout << "___________________________________________" << endl;
    }
    void SendEmail(string Subject, string Body) {
        cout << "your E-Mail Hase been sent Succesfuly to E-mail:" << _Email << endl;
        cout << "Subject: " << Subject << endl;
        cout << "Body: " << Body << endl;
    }
    void SendMessage(string Message) {
        cout << "your Message Hase been sent Succesfuly to Phone Number:" << _Phone << endl;
        cout << "Message: " << Message << endl;
       
    }
};

class clsemploye :public clsPerson 
{
private:
    string _Title;
    string _Department;
    float _Salary;
public:
    clsemploye(string FName, string LName, string EMail, string Phone, string Title, string Depatment, float  Salary) : clsPerson(FName, LName, EMail, Phone)
    {
        _Title = Title;
        _Department = Depatment;
        _Salary = Salary;
    }
    //Property Set
    void setTitle(string Title)
    {
        _Title = Title;
    }
    //Property Get
    string Title()
    {
        return _Title;
    }
    //Property Set
    void setDepartment(string Department)
    {
        _Department = Department;
    }
    //Property Get
    string Department()
    {
        return _Department;
    }
    //Property Set
    void setSalary(float Salary)
    {
        _Salary = Salary;
    }
    //Property Get
    float Salary()
    {
        return _Salary;
    }
    void PrintInfo() {
        cout << "Info of Employe(" << GetID() << ")" << endl;
        cout << "___________________________________________" << endl;
        
        cout << "First Name:\t" << GetFirstName() << endl;
        cout << "Last Name:\t" << GetLastName() << endl;
        cout << "Full Name:\t" << GetFirstName() + " " + GetLastName() << endl;
        cout << "Phone Number:\t" << GetPhone() << endl;
        cout << "E-Mail Address:\t" << GetEmail() << endl;
        cout << Title() << endl;
        cout << Department() << endl;
        cout << Salary() << endl;
        cout << "___________________________________________" << endl;
    }
};
class clsprogrammers : public clsemploye
{
private:
    string _MainProgLan;

public:
    clsprogrammers(string FName, string LName, string EMail, string Phone, string Title, string Depatment, float  Salary, string MainProgLan)
        :clsemploye( FName,  LName,  EMail,  Phone,  Title,  Depatment,   Salary)
    {
        _MainProgLan = MainProgLan;
    }
    void SetMainProgLang(string MainProgLan)
    {
        _MainProgLan = MainProgLan;
    }
    string GetMainProgLang() {
        return _MainProgLan;
    }
    void PrintInfo() {
        cout << "Info of Devlopers(" << GetID() << ")" << endl;
        cout << "___________________________________________" << endl;

        cout << "First Name:\t" << GetFirstName() << endl;
        cout << "Last Name:\t" << GetLastName() << endl;
        cout << "Full Name:\t" << GetFirstName() + " " + GetLastName() << endl;
        cout << "Phone Number:\t" << GetPhone() << endl;
        cout << "E-Mail Address:\t" << GetEmail() << endl;
        cout << Title() << endl;
        cout << Department() << endl;
        
        cout << Salary() << endl;
        cout << "Main Programming Languge:\t" << GetMainProgLang() << endl;
        cout << "___________________________________________" << endl;
    }
};
int main()
{
    clsPerson Person1("Mohamed", "Khaled", "mkabohasha@gmail.com", "20.1050507740");
    Person1.PrintInfo();
    //Person1.SendEmail("Fisrt Person added", "Person1 adedd succefuly");
    //Person1.SendMessage("Welcome to our Company");*/
   // clsemploye employe1("Mohamed", "Khaled", "mkabohasha@gmail.com", "20.1050507740");
    clsemploye employe1("Mohamed", "Khaled", "mkabohasha@gmail.com", "201050507740","Comm Engineer","R&D",10.900);
            employe1.PrintInfo();
  clsprogrammers Programmer1("Mohamed", "Khaled", "mkabohasha@gmail.com", "201050507740", "Comm Engineer", "R&D", 10.900,"CLang");
  Programmer1.PrintInfo();
}

