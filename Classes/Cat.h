#pragma once
#pragma once
#include "Base.h"

class Cat : public BaseClassName {
public:
    void Read(std::ostream& ostream, std::istream& istream) override {
        BaseClassName::Read(ostream, istream);
        ostream << "Enter agility: ";
        istream >> agility;
    }

    void Write(std::ostream& ostream) override {
        BaseClassName::Write(ostream);
        ostream << "Agility: " << agility << std::endl;
    }

    eType GetType() override {
        return eType::CAT;
    }

private:
    int agility;
};
