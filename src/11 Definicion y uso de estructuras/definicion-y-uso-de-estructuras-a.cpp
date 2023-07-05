/*
 * Curso: Domina Rust: Desde C++ a Rust
 * Plataforma: LinkedIn Learning
 * Instructor: @EliezerLopez
 * */

#include <string>
#include <iostream>
using namespace std;

struct Libro{
    string titulo;
    string autor;
    int anioPublicacion;
};

int main(){

    Libro lasCronicasDeNarnia;

    lasCronicasDeNarnia.titulo = "Las Crónicas de Narnia: El León, la Bruja y el Armario";
    lasCronicasDeNarnia.autor = "C.S. Lewis";
    lasCronicasDeNarnia.anioPublicacion = 1950;

    cout << "Título: " << lasCronicasDeNarnia.titulo << endl;
    cout << "Autor: " << lasCronicasDeNarnia.autor << endl;
    cout << "Año de publicación: " << lasCronicasDeNarnia.anioPublicacion << endl;

    return 0;
}