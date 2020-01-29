#include <iostream>

class Entity
{
public:
    int id;

    Entity() { id = 55; }
    Entity (int a) : id(a) {}
    ~Entity() {}
};

void operator<<(std::ostream & out, Entity const & entity)
{
    out << entity.id;
}

int main()
{
    Entity entity1;
    Entity entity2(5733);
    Entity entity3(1);

    std::cout << entity1;

    return 0;
}