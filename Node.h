#ifndef TEST_NODE_H
#define TEST_NODE_H

#include <utility>
#include <climits>

enum Color {
    WHITE, GREY, BLACK
};

class Node {
private:
    int data;
    Color color = WHITE;
    std::pair<int, int> timestamp{INT_MIN, INT_MAX};
    Node *parent = nullptr;
public:
    Node(const Node &newNode);

    Node(int data);

    int getData() const;

    Color getColor();

    void setColor(Color newColor);

    int getStart() const;

    void setStart(int start);

    int getFinish() const;

    void setFinish(int finish);

    bool operator<(const Node &t) const;

    Node &operator=(const Node &t) = default;

    bool operator==(const Node &rhs) const;

    void reset();

    void setParent(Node *node);

};

#endif //TEST_NODE_H