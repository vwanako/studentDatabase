#include <iostream>
#include <fstream>
#include <string>
#include <vector>

#include <student.h>

student::student(const std::string &name, const std::string &email, const std::string &phone_number, const int &date_of_birth)
{
}

void student::set_name(std::string name)
{
    this->name = name;
}
void student::set_email(std::string email)
{
    this->email = email;
}
void student::set_phone_number(std::string phone_number)
{
    this->phone_number = phone_number;
}
void student::set_date_of_birth(int date_of_birth)
{
    this->date_of_birth = date_of_birth;
}
void student::set_id(int id)
{
    this->id = id;
}

std::string student::get_name()
{
    return name;
}
std::string student::get_email()
{
    return email;
}
std::string student::get_phone_number()
{
    return phone_number;
}
int student::get_date_of_birth()
{
    return date_of_birth;
}
int student::get_id()
{
    return id;
}