#include "Form.hpp"

Form::Form() : GradeExecute(0), GradeSign(0)
{
    std::cout << "Form : Default Constructor called\n";
    this->siGned = false;
}

Form::Form(std::string n, int gS, int gE) : name(n), GradeExecute(gE), GradeSign(gS)
{
    if (this->GradeExecute > 150 || this->GradeSign > 150)
        throw(GradeTooLowException());
    if (this->GradeExecute < 0 || this->GradeSign < 0)
        throw(GradeTooHighException());
    this->siGned = false;
    std::cout << "Form : " << this->name << " Create a " << this->GradeExecute << " GradeExecute and " << this->GradeSign << " GradeSign\n";
}

Form::Form(const Form &c) : name(c.name), GradeExecute(c.GradeExecute), GradeSign(c.GradeSign)
{
    std::cout << "Form : Copy Constructor called\n";
    *this = c;
}

Form &Form::operator=(const Form &c)
{
    std::cout << "Form : Copy assignment operator called\n";
    if (this == &c)
        return (*this);
    this->siGned = c.siGned;
    return (*this);
}

std::string Form::getName() const
{
    return (this->name);
}
int Form::getGradeExecute() const
{
    return (this->GradeExecute);
}
int Form::getGradeSign() const
{
    return (this->GradeSign);
}
bool Form::getsiGned() const
{
    return (this->siGned);
}

void Form::beSigned(Bureaucrat b)
{
    if (b.getGrade() > GradeSign)
        throw(Form::GradeTooLowException());
    this->siGned = true;
    std::cout << "Form : is signed\n";
}

Form::~Form()
{
    std::cout << "Form : Destructor called\n";
}

std::ostream &operator<<(std::ostream &out, const Form &obj)
{
    out << obj.getName();
    out << " , The Grade required to signe it is ";
    out << obj.getGradeSign();
    out << ", Grade required to exucte it is ";
    out << obj.getGradeExecute();
    if (obj.getsiGned() == true)
        out << ", it is signed.\n";
    else
        out << ", it is not signed.\n";
    return (out);
}