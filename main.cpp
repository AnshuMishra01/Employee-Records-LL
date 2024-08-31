#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <iomanip>
#include <filesystem>

class Employees {
public:
    int employeeId;
    std::string firstName;
    std::string lastName;
    std::string phoneNumber;
    std::string emailAddress;
    double salary;

    // Constructor 
    Employees(int id, std::string fname, std::string lname, std::string phone, std::string email, double sal) {
        employeeId = id;
        firstName = fname;
        lastName = lname;
        phoneNumber = phone;
        emailAddress = email;
        salary = sal;
    }

    // Method to display employee data
    void DescribeTheEmployee() const {
        std::cout << "Employee ID: " << employeeId << std::endl;
        std::cout << "First Name: " << firstName << std::endl;
        std::cout << "Last Name: " << lastName << std::endl;
        std::cout << "Phone Number: " << phoneNumber << std::endl;
        std::cout << "Email Address: " << emailAddress << std::endl;
        std::cout << "Salary: $ " << std::fixed << std::setprecision(2) << salary << std::endl;
        std::cout << "------------------------" << std::endl;
    }
};

class Node {
public:
    Employees data;
    Node* next;

    Node(Employees emp) : data(emp), next(nullptr) {}
};

class LinkedList {
private:
    Node* head;

public:
    LinkedList() : head(nullptr) {}
    ~LinkedList();
    void insert(Employees emp);
    void display() const;
};

LinkedList::~LinkedList() {
    Node* current = head;
    while (current != nullptr) {
        Node* nextNode = current->next;
        delete current;
        current = nextNode;
    }
}

void LinkedList::insert(Employees emp) {
    Node* newNode = new Node(emp);
    Node** current = &head;

    while (*current != nullptr && (*current)->data.employeeId < emp.employeeId) {
        current = &(*current)->next;
    }

    newNode->next = *current;
    *current = newNode;
}

void LinkedList::display() const {
    Node* current = head;
    while (current != nullptr) {
        current->data.DescribeTheEmployee();
        current = current->next;
    }
}

int main() {
    LinkedList employeeList;

    std::string fileName = "data.txt";  // Update this to match your actual file name
    std::ifstream file(fileName);
    if (!file) {
      std::cerr << "Error opening file: " << fileName << std::endl;
      std::cerr << "Make sure '" << fileName << "' is in the same directory as the program." << std::endl;
    return 1;
    }
    std::string line;
    while (std::getline(file, line)) {
        std::istringstream iss(line);
        int id;
        std::string fname, lname, phone, email;
        double sal;

        if (iss >> id >> fname >> lname >> phone >> email >> sal) {
            Employees emp(id, fname, lname, phone, email, sal);
            employeeList.insert(emp);
        }
    }

    file.close();

    std::cout << "Displaying all employees:" << std::endl;
    employeeList.display();

    return 0;
}