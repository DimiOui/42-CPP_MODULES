#ifndef INTERN_HPP
#define INTERN_HPP

#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

#define KNRM "\x1B[0m"
#define KRED "\x1B[31m"
#define KGRN "\x1B[32m"
#define KYEL "\x1B[33m"
#define KBLU "\x1B[34m"
#define KMAG "\x1B[35m"
#define KCYN "\x1B[36m"
#define KWHT "\x1B[37m"

#pragma once

class Intern
{
public:
    Intern();
    Intern(const Intern &obj);
    ~Intern();

    Intern  &operator=(const Intern &obj);
    Form    *makeForm(const std::string formName, const std::string target) const;
private:
    typedef struct s_forms
    {
        std::string formName;
        Form        *formType;
    }   t_forms;

public:
    class WrongForm : public std::exception
    {
        public:
            virtual const char* what() const throw();
    };
};

std::ostream    &operator<<(std::ostream &o, Intern const &i);

#endif
