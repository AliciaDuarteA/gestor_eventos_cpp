#include <iostream>
#include <memory>
#include <string>
#include <utility>

#include "Evento.h"
#include "GestorDeEventos.h"

int main()
{
    GestorDeEventos gestor;
    int opcion = 0;

    while (opcion != 3)
    {
        std::cout << "\nGestor de eventos" << std::endl;
        std::cout << "1. Agrega un evento" << std::endl;
        std::cout << "2. Listar eventos" << std::endl;
        std::cout << "3. Salir" << std::endl;
        std::cout << "Seleccionar una opcion: ";

        std::cin >> opcion;

        if (opcion == 1)
        {
            std::string fecha;
            std::string titulo;

            std::cin.ignore();

            std::cout << "Fecha: ";
            std::getline(std::cin, fecha);

            std::cout << "Titulo: ";
            std::getline(std::cin, titulo);

            std::unique_ptr<Evento> evento = 
                std::make_unique<Evento>(fecha, titulo);

            gestor.agregar(std::move(evento));

            std::cout << "Evento agregado." << std::endl;
        }
        else if (opcion == 2)
        {
            gestor.listar();
        }
        else if (opcion != 3)
        {
            std::cout << "Opcion invalida." << std::endl;
        }
    }
    return 0;
}
