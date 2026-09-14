#include "GestorDeEventos.h"
#include <iostream>
#include <utility>

void GestorDeEventos::agregar(std::unique_ptr<Evento> evento)
{
    _eventos.push_back(std::move(evento));
}

void GestorDeEventos::listar()
{
    if (_eventos.empty())
    {
        std::cout << "No hay eventos registrados." << std::endl;
        return;
    }
    std::cout << "Lista de eventos:" << std::endl;

    for (const auto& evento : _eventos)
    {
        std::cout << "Fecha: " << evento->getFecha() << std::endl;
        std::cout << "Titulo: " << evento->getTitulo() << std::endl;
    }
}
