#include <iostream>
#include <fstream>
#include <string>
#include <vector>

#include <student.h>

student::student(const std::string &name, const std::string &email, const std::string &phone_number)
{
}

student::void set_name(std::string name)
{
    this->name = name;
}
student::void set_email(std::string email)
{
    this->email = email;
}
student::void set_phone_number(std::string phone_number)
{
    this->phone_number = phone_number;
}
student::void set_date_of_birth(int date_of_birth)
{
    this->date_of_birth = date_of_birth;
}
student::void set_id(int id)
{
    this->id = id;
}

student::std::string get_name()
{
    return name;
}
student::std::string get_email()
{
    return email;
}
student::std::string get_phone_number()
{
    return phone_number;
}
student::int get_date_of_birth()
{
    return date_of_birth;
}
student::int get_id()
{
    return id;
}