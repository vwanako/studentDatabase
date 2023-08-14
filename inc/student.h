#ifndef STUDENT_H
#define STUDENT_H

class student
{
protected:
    std::string name, email, phone_number;
    int id, date_of_birth;
    std::fstream attendance;

public:
    student(const std::string &name, const std::string &email, const std::string &phone_number);

    // setters
    void set_name(std::string name);
    void set_email(std::string email);
    void set_phone_number(std::string phone_number);
    void set_date_of_birth(int date_of_birth);
    void set_id(int id);

    // getters
    std::string get_name();
    std::string get_email();
    std::string get_phone_number();
    int get_date_of_birth();
    int get_id();

    // methods

    void save_to_files();
};

#endif // STUDENT_H