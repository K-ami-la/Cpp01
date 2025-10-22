#include <iostream> 

class Test
{

private:

    std::string type;

public:

    Test(std::string type);
    ~Test();

    const std::string getter() const {};
    void setter(std::string &newType){};
};


Test :: std::string getter();

Test::~Test(){};

std::string Test::getter()
{

    return type;
} 

void Test::setter(std::string &newType)
{
    type = newType;
}

int main()
{
    Test t("Bonjour");

    std::cout << t.getter() << std::endl;
    t.setter("Salut");
    std::cout << t.getter() << std::endl;


}