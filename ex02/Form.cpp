#include "Form.hpp"

Form::Form() : siGned(false) ,  GradeExecute(0),GradeSign(0)
{

}

Form::Form(std::string n, int gS,int gE) : name(n), siGned(false), GradeExecute(gE), GradeSign(gS)
{

}

Form::Form(const Form &c) : name(c.name), siGned(false), GradeExecute(c.GradeExecute), GradeSign(c.GradeSign)
{
    *this = c;
}

Form &Form::operator=(const Form &c)
{
    if (this == &c)
        return (*this);
    this->siGned = c.siGned;
    return (*this);
}

std::string Form::getName() const
{
    return (this->name);
}
int Form::getGradeExecute()const
{
    return (this->GradeExecute);
}
int Form::getGradeSign()const
{
    return (this->GradeSign);
}
bool Form::getsiGned()const
{
    return (this->siGned);
}

void Form::beSigned(Bureaucrat b)
{
    if (b.getGrade() > GradeSign)
        throw(Form::GradeTooLowException());
    this->siGned = true;
}

Form::~Form()
{
}

std::ostream &operator<<( std ::ostream& out, const Form &obj)
{
    out << obj.getName();
    out << " , the grade required to signe it is ";
    out << obj.getGradeSign();
    out << ", grade required to exucte it is ";
    out << obj.getGradeExecute();
    if (obj.getsiGned() == true)
        out << ", it is signed";
    else
        out << ", it is not signed";
    return out;

}