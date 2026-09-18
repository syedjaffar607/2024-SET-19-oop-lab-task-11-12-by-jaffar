#include <iostream>
using namespace std;

class HospitalStaff
{
protected:
    string staffName;

public:
    
    HospitalStaff(string name)
    {
        staffName = name;
    }

    virtual void performDuty() = 0;
};

class Doctor : public HospitalStaff
{
public:
    Doctor(string name) : HospitalStaff(name) {}

    void performDuty()
    {
        cout << staffName << " is treating patients." << endl;
    }
};


class Nurse : public HospitalStaff
{
public:
    Nurse(string name) : HospitalStaff(name) {}

    void performDuty()
    {
        cout << staffName << " is taking care of patients." << endl;
    }
};

class Receptionist : public HospitalStaff
{
public:
    Receptionist(string name) : HospitalStaff(name) {}

    void performDuty()
    {
        cout << staffName << " is managing appointments." << endl;
    }
};

int main()
{
    Doctor d1("faizan");
    Nurse n1("hammad");
    Receptionist r1("ali");

    d1.performDuty();
    n1.performDuty();
    r1.performDuty();

    return 0;
}