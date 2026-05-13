#include<iostream>

enum class Status
{
    Unknown,
    Connected,
    Disconnectd,
};

enum class UserPermissions
{
    Unknown,
    User,
    Admin

};

struct User{
    Status staus;
    std::uint64_t id;

};

int main()
{
    Status s1 = Status::Disconnectd;
    //UserPermissions s2 = UserPermissions::Unknown;
    switch(s1)
    {
        case Status::Unknown:
        {
            std::cout << "Unknow\n";
            break;
        }
        case Status::Connected:
        {
            std::cout << "Connected\n";
            break;
        }
        case Status::Disconnectd:
        {
            std::cout << "Disconnectd\n";
        }

    }

    if(s1 == Status::Unknown)
    {
        std::cout << "Unknown\n";
    }

    return 0;

}
