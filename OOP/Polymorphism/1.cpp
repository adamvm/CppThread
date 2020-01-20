#include <iostream>
#include <math.h>

class Ksztalt
{
public:
    virtual void obliczPole() { std::cout << "Hello"; };
};

class Kolo : public Ksztalt
{
private:
    float r;
public:
    virtual void obliczPole()
    {
        std::cout << "Pole kola: " << 3.14 * r * r << std::endl;
    }
    Kolo (float r) : r(r) { }
};

class Kwadrat : public Ksztalt
{
private:
    float a;
public:
    virtual void obliczPole()
    {
        std::cout << "Pole kwadratu: " << a * a << std::endl;
    }
    Kwadrat (float a) : a(a) { }
};

class Inny : public Ksztalt
{

};

int main()
{
    Ksztalt *obj = new Kolo(2.55);
    obj->obliczPole();

    Inny inny1;
    obj = &inny1;
    obj->obliczPole();

    return 0;
}