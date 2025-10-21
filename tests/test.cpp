#include <iostream> 

class Test
{

private:

    std::string type;

public:

    void type(std::string type);
    ~type(std::string type);


    void getter(std::string type){};
    void setter(std::string type){};
}


void Test::getter(std::string type)
{
    return type;
} 

Test::setter(std::string type)
{
    type = type;
}

int main()
{
    Test t("Bonjour");

    t.getter();
    t.setter();


}