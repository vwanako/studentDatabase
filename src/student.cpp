#include <iostream>
#include <fstream>
#include <string>
#include <vector>

#include <student.h>

class student
{
private:
    std::string name, email, phone_number;
    int id, date_of_birth;
    std::fstream attendance;

public:
    student(const std::string &name, const std::string &email, const std::string &phone_number)
    {
    }

    void set_name(std::string name)
    {
        this->name = name;
    }
    void set_email(std::string email)
    {
        this->email = email;
    }
    void set_phone_number(std::string phone_number)
    {
        this->phone_number = phone_number;
    }
    void set_date_of_birth(int date_of_birth)
    {
        this->date_of_birth = date_of_birth;
    }
    void set_id(int id)
    {
        this->id = id;
    }

    std::string get_name()
    {
        return name;
    }
    std::string get_email()
    {
        return email;
    }
    std::string get_phone_number()
    {
        return phone_number;
    }
    int get_date_of_birth()
    {
        return date_of_birth;
    }
    int get_id()
    {
        return id;
    }
};