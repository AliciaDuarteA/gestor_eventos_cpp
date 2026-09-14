#include "Evento.h"
Evento::Evento(std::string fecha, std::string titulo):
    _fecha(fecha),
    _titulo(titulo)
{
}

std::string Evento::getFecha()
{
    return _fecha;
}

std::string Evento::getTitulo()
{
    return _titulo;
}

