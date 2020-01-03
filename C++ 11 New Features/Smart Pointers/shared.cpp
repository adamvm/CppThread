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
        std::shared_ptr<Entity> sharedEntity = std::make_shared<Entity>();
//      std::shared_ptr<Entity> entity(new Entity());

// The above initialization is BAD as the reference count will be 2 from the very beginning!

//      std::shared_ptr<Entity> = entity;                               // CANNOT do that!

        sharedEntity->printSomething();
    }

    return 0;
}