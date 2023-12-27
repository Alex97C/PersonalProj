#include <iostream>

class Animal{
 private:
    virtual int RunningSpeed() = 0;
};

class Dog : public Animal
{
public:
    int RunningSpeed()
    {
        speed = 5;
        return speed;
    }



private:
    int speed;
};
int main()
{
    Dog dogo;
    std::cout<<dogo.RunningSpeed();
    return 0;
}