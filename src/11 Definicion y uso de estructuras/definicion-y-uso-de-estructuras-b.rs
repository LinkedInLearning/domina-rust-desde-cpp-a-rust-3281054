/*
 * Curso: Domina Rust: Desde C++ a Rust
 * Plataforma: LinkedIn Learning
 * Instructor: @EliezerLopez
 * */

struct Libro {
    titulo: String,
    autor: String,
    anio_publicacion: i32,
}

fn main(){

    let las_cronicas_de_narnia = Libro{
        titulo: String::from("Las Crónicas de Narnia: El León, la Bruja y el Armario"),
        autor: String::from("C.S. Lewis"),
        anio_publicacion: 1950,
    };

    println!("Título: {}", las_cronicas_de_narnia.titulo);
    println!("Autor: {}",las_cronicas_de_narnia.autor);
    println!("Año de publicación: {}",las_cronicas_de_narnia.anio_publicacion);
}