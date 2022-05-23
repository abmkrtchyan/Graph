#include <iostream>
#include <vector>
#include <map>
#include "Node.h"

using namespace std;

Color Node::getColor() {
    return this->color;
}

int Node::getData() const {
    return this->data;
}

void Node::setColor(Color newColor) {
    this->color = newColor;
}

bool Node::operator<(Node t) {
    return false;
}
