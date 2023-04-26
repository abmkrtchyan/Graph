#include "HashFunctions.h"

std::size_t HashFunction::operator()(const Node &node) const {
    std::size_t hash = node.getData();
    return hash;
}
