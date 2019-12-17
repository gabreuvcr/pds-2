#include "rectangle.h"

Rectangle::Rectangle() {
    _width = 1;
    _height = 1;
}

Rectangle::Rectangle(float width, float height) {
    _width = width;
    _height = height;
}

float Rectangle::get_perimeter() {
    _perimeter=(2 * _height) + (2 * _width);
    return _perimeter;
}

float Rectangle::get_area() {
    _area = _height * _width;
    return _area;
}

void Rectangle::set_width(float x) {
    if(x > 0 || x < 20) {
        _width = x;
    }
}

void Rectangle::set_height(float y) {
    if(y > 0 || y < 20) {
        _height = y;
    }
}

float Rectangle::get_width() {
    return _width;
}

float Rectangle::get_height() {
    return _height;
}
