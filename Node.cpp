#include "Node.h"

Node::Node(const Node &newNode) {
    this->data = newNode.data;
    this->color = newNode.color;
    this->time = newNode.time;
    this->parent = newNode.parent;
}

Node::Node(int data) : data(data), color(WHITE) {}

Color Node::getColor() {
    return this->color;
}

int Node::getData() const {
    return this->data;
}

void Node::setColor(Color newColor) {
    this->color = newColor;
}

bool Node::operator<(const Node &t) const {
    return this->getData() < t.getData();
}

void Node::reset() {
    this->setColor(WHITE);
    this->time = 0;
    this->parent = nullptr;
}



