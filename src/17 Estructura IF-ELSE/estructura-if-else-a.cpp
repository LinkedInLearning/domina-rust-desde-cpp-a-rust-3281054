/*
 * Curso: Domina Rust: Desde C++ a Rust
 * Plataforma: LinkedIn Learning
 * Instructor: @EliezerLopez
 * */

#include <iostream>
using namespace std;

int main(){

    int numero = 7;

    if (numero > 0){
        cout << "El número es positivo" << endl;
    } else if (numero < 0){
        cout << "El número es negativo" << endl;
    } else {
        cout << "El número es cero" << endl;
    }

    return 0;
}