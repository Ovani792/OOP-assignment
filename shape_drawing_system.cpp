#include <iostream>
using namespace std;

class Shape {
public:
    virtual void draw() {
        cout << "Drawing Shape" << endl;
    }
    virtual ~Shape() {}
};

class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing Circle" << endl;
    }
};

class Rectangle : public Shape {
public:
    void draw() override {
        cout << "Drawing Rectangle" << endl;
    }
};

class Triangle : public Shape {
public:
    void draw() override {
        cout << "Drawing Triangle" << endl;
    }
};

int main() {
    Shape* shape;

    Circle circle;
    Rectangle rectangle;
    Triangle triangle;

    shape = &circle;
    shape->draw();

    shape = &rectangle;
    shape->draw();

    shape = &triangle;
    shape->draw();

    return 0;
}