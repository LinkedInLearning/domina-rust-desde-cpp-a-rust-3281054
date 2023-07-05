/*
 * Curso: Domina Rust: Desde C++ a Rust
 * Plataforma: LinkedIn Learning
 * Instructor: @EliezerLopez
 * */

#include <iostream>
using namespace std;

enum Semaforo {ROJO,AMARILLO,VERDE};

int main() {

    semaforo estadoSemaforo = ROJO;

    switch (estadoSemaforo) {
        case ROJO:
            cout << "Detente" << endl;
            break;
        case AMARILLO:
            cout << "Precaución" << endl;
            break;
        case VERDE:
            cout << "Avanza" << endl;
            break;
    }

    return 0;
}