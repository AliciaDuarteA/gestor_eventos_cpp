#pragma once

#include "Evento.h"
#include <memory>
#include <vector>

class GestorDeEventos
{
public:
    void agregar(std::unique_ptr<Evento> evento);
    void listar();

private:
    std::vector<std::unique_ptr<Evento>> _eventos;

};

