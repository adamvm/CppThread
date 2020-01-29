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
};

int main()
{
    {
        std::shared_ptr<Entity> sharedEntity = std::make_shared<Entity>();
        std::weak_ptr<Entity> weakEntity = sharedEntity; // this DOES NOT increase the reference count of sharedEntity!
    }

    return 0;
}