#include<iostream>

class Account
{
private:
    int balance; // Instance member variable
    static float roi; // Static Member Variable or Class Variable
    // roi => rate of interest //
public:
    void setBalance(int b)
    {
        balance = b;
    }
    static void setRoi(float r) // Static member function
    {
        roi = r;
    }
};
// Static member definition //
float Account::roi;
// :: => Scope Resolution Operator

int main()
{
    Account a1;
    Account::setRoi(3.5);
    return 0;
}
