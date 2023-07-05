/*
 * Curso: Domina Rust: Desde C++ a Rust
 * Plataforma: LinkedIn Learning
 * Instructor: @EliezerLopez
 * */

double fahrenheitACelsius(double fahrenheit) {
    return (fahrenheit - 32) * (5.0/9.0);
}

int main(){

	double temperatura = fahrenheitACelsius(50);

	return 0;
}
