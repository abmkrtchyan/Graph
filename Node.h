enum Color {
    WHITE, GREY, BLACK
};

class Node {
private:
    int data;
    Color color;
public:
    Color getColor();

    int getData() const;

    void setColor(Color newColor);

    bool operator<(Node t);
};