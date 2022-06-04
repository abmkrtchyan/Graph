#ifndef TEST_HASHFUNCTIONS_H
#define TEST_HASHFUNCTIONS_H

#include "Node.h"

class HashFunction {
public:
    std::size_t operator()(const Node &node) const;
};

#endif //TEST_HASHFUNCTIONS_H
