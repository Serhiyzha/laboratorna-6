#pragma once
#include <string>

class interfac {
public:
    virtual std::string FirstChars() const = 0;
    virtual ~interfac() {}
};