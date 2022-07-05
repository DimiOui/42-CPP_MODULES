#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <stdexcept>
#include <sstream>

#pragma once

#define KNRM "\x1B[0m"
#define KRED "\x1B[31m"
#define KGRN "\x1B[32m"
#define KYEL "\x1B[33m"
#define KBLU "\x1B[34m"
#define KMAG "\x1B[35m"
#define KCYN "\x1B[36m"
#define KWHT "\x1B[37m"

class Bureaucrat
{
public:
    Bureaucrat();
    Bureaucrat(int grade);
    Bureaucrat(const std::string name);
    Bureaucrat(const std::string name, int grade);
    Bureaucrat(Bureaucrat const &obj);
    virtual ~Bureaucrat();

    Bureaucrat          &operator=(Bureaucrat const &obj);
    const std::string   getName() const;
    int                 getGrade() const;

    void                upgrade();
    void                downgrade();

private:
    const std::string   _name;
    int                 _grade;
    static std::string  traineeCounter();

    class GradeTooHighException : public std::exception
    {
    public:
        virtual const char* what() const throw()
        {
            return (KRED "Grade too high...");
        }
    };

    class GradeTooLowException : public std::exception
    {
    public:
        virtual const char* what() const throw()
        {
            return (KRED "Grade too low...");
        }
    };
};

std::ostream    &operator<<(std::ostream &o, Bureaucrat const &i);

#endif
