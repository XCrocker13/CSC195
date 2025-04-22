#pragma once
#pragma once
#include "Base.h"

class Dog : public BaseClassName {
public:
    void Read(std::ostream& ostream, std::istream& istream) override {
        BaseClassName::Read(ostream, istream);
        ostream << "Enter loyalty (1-10): ";
        istream >> loyalty;
    }

    void Write(std::ostream& ostream) override {
        BaseClassName::Write(ostream);
        ostream << "Loyalty: " << loyalty << std::endl;
    }

    eType GetType() override {
        return eType::DOG;
    }

private:
    int loyalty;
};
