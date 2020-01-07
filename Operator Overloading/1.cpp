#include <iostream>

class Entity
{
public:
    int id;

    Entity() { id = 555; }
    Entity(int a) : id(a) {}
    ~Entity() {}
};

std::ostream & operator<<(std::ostream & out, Entity const & entity)
{
    return out << entity.id;
}

int main()
{
    Entity entity1;
    Entity entity2(56);
    Entity entity3;

    std::cout << entity1 << " " << entity2 << " " << entity3;

    return 0;
}