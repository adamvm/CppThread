#include <iostream>
#include <memory>

class Entity
{
public:
    Entity()
    {
        std::cout << "Created Entity!" << std::endl;
    }
    ~Entity()
    {
        std::cout << "Deleted Entity!" << std::endl;
    }
    void printSomething() { }
};

int main()
{
    {
        std::unique_ptr<Entity> entity = std::make_unique<Entity>();    // preffered way (safer way due to exceptions handling)
//      std::unique_ptr<Entity> entity(new Entity());                   // alternative way
//      std::unique_ptr<Entity> entity = new Entity();                  // this will NOT work!

//      std::unique_ptr<Entity> = entity;                               // CANNOT do that!

        entity->printSomething();
    }

    return 0;
}