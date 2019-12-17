#include "doctest.h"
#include "triangulo.h"

TEST_CASE("Teste VPL - Equilatero") {
    Triangulo t(5, 5, 5);
    Tipo tipo = t.determinar_tipo();
    CHECK_EQ(tipo, 0);
}

TEST_CASE("Teste VPL - Isosceles") {
    Triangulo t(4, 4, 3);
    Tipo tipo = t.determinar_tipo();
    CHECK_EQ(tipo, 1);
}

TEST_CASE("Teste VPL - Escaleno") {
    Triangulo t(5, 4, 3);
    Tipo tipo = t.determinar_tipo();
    CHECK_EQ(tipo, 2);
}

TEST_CASE("Teste VPL - Excecao Negativo") {
    CHECK_THROWS(new Triangulo(5, -5, 5));
}

TEST_CASE("Teste VPL - Excecao Zero") {
    CHECK_THROWS(new Triangulo(0, 0, 0));
}

TEST_CASE("Teste VPL - Excecao Desigualdade Triangular") {
    CHECK_THROWS(new Triangulo(1, 2, 10));
}
