#include "node.h"
#include <iostream>

Node::Node(float value) {
    _value = value;
    _prox = nullptr;
}

Node::~Node() {

}

float Node::get_value() {
    return this->_value;
}

void Node::set_value(float value) {
    _value = value;
}

Node* Node::get_prox() {
    return this->_prox;
}

void Node::set_prox(Node* prox) {
    this->_prox = prox;
}
