#ifndef TEST_NODE_H
#define TEST_NODE_H

enum Color {
    WHITE, GREY, BLACK
};

class Node {
private:
    int data;
    Color color;
public:
    Node(const Node &newNode);

    Node(int data);

    Color getColor();

    int getData() const;

    void setColor(Color newColor);

    bool operator<(const Node &t) const;

    Node &operator=(const Node &t) = default;

    void reset();
};

#endif //TEST_NODE_H