#include <iostream>
#include "listaencadeada.h"

ListaEncadeada::ListaEncadeada() {
	this->_inicio = nullptr;
	this->_fim = nullptr;
	this->_num_elementos_inseridos = 0;
}

ListaEncadeada::~ListaEncadeada() {
	node_t *anterior = nullptr;
	node_t *proximo = this->_inicio;
	while(proximo != nullptr) {
		anterior = proximo;
		proximo = proximo->proximo;
		delete anterior;
	}
}

void ListaEncadeada::insere_elemento(int elemento) {
	node_t *novo = new node_t();
	novo->elemento = elemento;
	novo->proximo = nullptr;
	novo->anterior = nullptr;
	if(this->_inicio == nullptr) {
		this->_inicio = novo;
		this->_fim = novo;
	} 
	else {
		this->_fim->proximo = novo;
		novo->anterior = this->_fim;
		this->_fim = novo;
	}
	this->_num_elementos_inseridos++;
}

void ListaEncadeada::remover_iesimo(int i) {
	if(i >= this->_num_elementos_inseridos) {
		return;
	}
	node_t *atual = _inicio;
	for(int j = 0; j < i; j++)
		atual = atual->proximo;
	if(atual->proximo != nullptr)
		atual->proximo->anterior = atual->anterior;
	if(atual->anterior != nullptr)
		atual->anterior->proximo = atual->proximo;
	if(i == 0)
		this->_inicio = atual->proximo;
	if(i == this->_num_elementos_inseridos - 1)
		this->_fim = atual->anterior;
	this->_num_elementos_inseridos--;
	delete atual;
}

int ListaEncadeada::get_iesimo(int i) {
	node_t *atual = this->_inicio;
	for(int j = 0; j < i; j++) {
		atual = atual->proximo;
	}
	return atual->elemento;
}

int ListaEncadeada::tamanho() {
	return _num_elementos_inseridos;
}

void ListaEncadeada::remover_elemento() {
	node_t *fim = _fim;
	this->_fim->anterior->proximo=nullptr;
	this->_fim=_fim->anterior;
	this->_num_elementos_inseridos--;
	delete fim;
}

void ListaEncadeada::inserir_iesimo(int i, int k) {
	node_t *atual = _inicio;
	for(int j = 0; j < k; j++) {
		atual = atual->proximo;
	}
	atual->elemento = i;
}

void ListaEncadeada::insere_primeiro(int elemento) {
	node_t *novo = new node_t();
	novo->elemento = elemento;
	novo->proximo = nullptr;
	novo->anterior = nullptr;
	if(this->_fim == nullptr) {
		this->_fim = novo;
		this->_inicio = novo;
	} 
	else {
		this->_inicio->anterior = novo;
		novo->proximo = this->_inicio;
		this->_inicio = novo;
	}
	this->_num_elementos_inseridos++;
}

bool ListaEncadeada::checa_palindromo() {
	node_t *direita = this->_inicio;
	node_t *esquerda = this->_fim;
	for(int i = 0; i < this->_num_elementos_inseridos / 2; i++) {
		direita = direita->proximo;
		esquerda = esquerda->anterior;
		if(direita->elemento != esquerda->elemento) {
			return false;
		}
	}
	return true;
}
