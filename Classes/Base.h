#pragma once
#pragma once
#include <string>
#include <iostream>

class BaseClassName {
public:
    enum class eType {
        CAT,
        DOG
    };

    virtual ~BaseClassName() {}

    virtual void Read(std::ostream& ostream, std::istream& istream) {
        ostream << "Enter name: ";
        istream >> name;
    }

    virtual void Write(std::ostream& ostream) {
        ostream << "Name: " << name << std::endl;
    }

    std::string GetName() {
        return name;
    }

    virtual eType GetType() = 0;

protected:
    std::string name;
    int lifespan;
};
