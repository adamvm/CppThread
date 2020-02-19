#include <iostream>

class Entity
{
public:
    int id;
    std::string name;

    Entity() { id = 555; }
    Entity(int a, std::string name) : id(a), name(name) {}
    ~Entity() {}
};

std::ostream & operator<<(std::ostream & out, Entity const & entity)
{
    return out << entity.id << entity.name;
}

int main()
{
    Entity entity1;
    Entity entity2(56, "Bob");
    Entity entity3;

    std::cout << entity1 << " " << entity2 << " " << entity3;

    return 0;
}