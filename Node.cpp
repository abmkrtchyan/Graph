#include "Node.h"

Node::Node(const Node &newNode) {
    this->data = newNode.data;
    this->color = newNode.color;
    this->timestamp.first = newNode.getStart();
    this->timestamp.second = newNode.getFinish();
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
    this->parent = nullptr;
    this->timestamp = {INT_MIN, INT_MAX};
}

void Node::setStart(int start) {
    this->timestamp.first = start;
}

void Node::setFinish(int finish) {
    this->timestamp.second = finish;
}

int Node::getStart() const {
    return this->timestamp.first;
}

int Node::getFinish() const {
    return this->timestamp.second;
}

void Node::setParent(Node *node) {
    this->parent = node;
}

bool Node::operator==(const Node &rhs) const {
    return this->getData() == rhs.getData();
}



