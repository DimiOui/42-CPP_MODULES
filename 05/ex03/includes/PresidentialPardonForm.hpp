#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"
#include "Bureaucrat.hpp"

#define KNRM "\x1B[0m"
#define KRED "\x1B[31m"
#define KGRN "\x1B[32m"
#define KYEL "\x1B[33m"
#define KBLU "\x1B[34m"
#define KMAG "\x1B[35m"
#define KCYN "\x1B[36m"
#define KWHT "\x1B[37m"

#pragma once

class PresidentialPardonForm : public Form
{
public:
    PresidentialPardonForm();
    PresidentialPardonForm(const std::string target);
    PresidentialPardonForm(PresidentialPardonForm const &obj);
    virtual ~PresidentialPardonForm();

    PresidentialPardonForm  &operator=(PresidentialPardonForm const &obj);
    void                    execute(const Bureaucrat &executor) const;
    std::string const       getTarget() const;

private:
    const std::string       _target;
};

#endif
