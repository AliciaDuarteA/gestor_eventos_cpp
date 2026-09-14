#pragma once

#include <string>

class Evento
{
public:
    Evento(std::string fecha, std::string titulo);

    std::string getFecha();
    std::string getTitulo();

private:
    std::string _fecha;
    std::string _titulo;
};

