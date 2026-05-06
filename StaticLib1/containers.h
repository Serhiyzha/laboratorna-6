#pragma once
#include <vector>
#include <string>
#include "Header.h"

class containers : public interfac
{
private:
    std::vector<std::string> items;

public:
    void addstring(const std::string& str);
    std::string FirstChars() const override;
    std::string shortest() const;
    double frequency(char c) const;
};