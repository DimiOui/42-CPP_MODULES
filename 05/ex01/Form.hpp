#ifndef FORM_HPP
#define FORM_HPP

#pragma once

#include "Bureaucrat.hpp"

#define KNRM "\x1B[0m"
#define KRED "\x1B[31m"
#define KGRN "\x1B[32m"
#define KYEL "\x1B[33m"
#define KBLU "\x1B[34m"
#define KMAG "\x1B[35m"
#define KCYN "\x1B[36m"
#define KWHT "\x1B[37m"

class Bureaucrat;

class Form
{
public:
    Form();
    Form(std::string const name, int gradeToSign, int gradeToExec);
    Form(Form const &obj);
    virtual ~Form();

    Form                &operator=(Form const &obj);
    std::string const   getName() const;
    int                 getSign() const;
    int                 getExec() const;
    bool                getSignStatus() const;
    bool                beSigned(const Bureaucrat &bureaucrat);

private:
    std::string const   _name;
    bool                _isSigned;
    int const           _gradeToSign;
    int const           _gradeToExec;

public:
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

    class ExecFormException : public std::exception
    {
    public:
        virtual const char* what() const throw()
        {
            return (KRED "Cannot execute Form...");
        }
    };
};

std::ostream    &operator<<(std::ostream &o, Form const &i);

#endif
