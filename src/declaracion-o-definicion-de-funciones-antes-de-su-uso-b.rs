/*
 * Curso: Domina Rust: Desde C++ a Rust
 * Plataforma: LinkedIn Learning
 * Instructor: @EliezerLopez
 * */

fn fahrenheit_a_celsius(fahrenheit: f64) -> f64{
    (fahrenheit - 32.0) * (5.0/9.0)
}

fn main(){
    let temperatura: f64 = fahrenheit_a_celsius(50.0);
}