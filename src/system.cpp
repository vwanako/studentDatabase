#include <iostream>
#include <string>
#include <fstream>

#include <system.h>
#include <student.h>

void create_student()
{
    std::string name, email, phone_number;
    int id, date_of_birth;

    std::cout << "\nStudent name: ";
    getline(std::cin, name);
    std::cout << "\nEmail: ";
    std::cin >> email;
    std::cout << "\nPhone number: ";
    std::cin >> phone_number;
    std::cout << "\nDate of birth: ";

    student new_student(name, email, phone_number, date_of_birth);
    new_student.save_to_files();

    std::cout << "\nStudent has been sucessfully created.";
}