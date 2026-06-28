#include <iostream>
#include <fstream>
#include <nlohmann/json.hpp>

using json = nlohmann::json;

int main() {

    std::ifstream archivo("datos.json");

    if (!archivo.is_open()) {
        std::cout << "No se pudo abrir el archivo JSON";
        return 1;
    }

    json datos;

    archivo >> datos;

    std::cout << "Nombre: "
              << datos["nombre"]
              << std::endl;

    std::cout << "Edad: "
              << datos["edad"]
              << std::endl;

    std::cout << "Lenguaje: "
              << datos["lenguaje"]
              << std::endl;


    return 0;
}
