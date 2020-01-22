#ifndef RECEIPE_HPP_
#define RECEIPE_HPP_

#include <vector>
#include <string>

namespace cooking {
    class Receipe{
        public:
            Receipe& operator=(Receipe& rhs);
            void add(const std::string& content);
        private:
            std::vector<std::string> content_;
    };
};

#endif