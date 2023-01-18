#include "AForm.hpp"

AForm::AForm() : GradeExecute(0), GradeSign(0)
{
    std::cout << "AForm : Default Constructor called\n";
    this->siGned = false;
}

AForm::AForm(std::string n, int gS, int gE) : name(n), GradeExecute(gE), GradeSign(gS)
{
    if (this->GradeExecute > 150 || this->GradeSign > 150)
        throw(GradeTooLowException());
    if (this->GradeExecute < 0 || this->GradeSign < 0)
        throw(GradeTooHighException());
    this->siGned = false;
    std::cout << "AForm : " << this->name << " Create a " << this->GradeExecute << " GradeExecute and " << this->GradeSign << " GradeSign\n";
}

AForm::AForm(const AForm &c) : name(c.name), GradeExecute(c.GradeExecute), GradeSign(c.GradeSign)
{
    std::cout << "AForm : Copy Constructor called\n";
    *this = c;
}

AForm &AForm::operator=(const AForm &c)
{
    std::cout << "AForm : Copy assignment operator called\n";
    if (this == &c)
        return (*this);
    this->siGned = c.siGned;
    return (*this);
}

std::string AForm::getName() const
{
    return (this->name);
}
int AForm::getGradeExecute() const
{
    return (this->GradeExecute);
}
int AForm::getGradeSign() const
{
    return (this->GradeSign);
}
bool AForm::getsiGned() const
{
    return (this->siGned);
}

void AForm::beSigned(Bureaucrat b)
{
    if (b.getGrade() > GradeSign)
        throw(AForm::GradeTooLowException());
    this->siGned = true;
    std::cout << "AForm : is signed\n";
}

AForm::~AForm()
{
    std::cout << "AForm : Destructor called\n";
}

std::ostream &operator<<(std::ostream &out, const AForm &obj)
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