/*
 * Curso: Domina Rust: Desde C++ a Rust
 * Plataforma: LinkedIn Learning
 * Instructor: @EliezerLopez
 * */

enum Semaforo {Rojo, Amarillo, Verde}

fn main(){
   
    let estado_semaforo: Semaforo = Semaforo::Rojo;

    match estado_semaforo {
        Semaforo::Rojo => println!("Detente"),
        Semaforo::Amarillo => println!("Precaución"),
        Semaforo::Verde => println!("Avanza"),
    }
}