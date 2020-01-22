#include <iostream>
#include "receipe.hpp"

cooking::Receipe& cooking::Receipe::operator=(Receipe& rhs) {
    content_ = rhs.content_;
    return *this;
}

void cooking::Receipe::add(const std::string& content) {
    content_.push_back(content);
}