#pragma once
#include <cstdint>
#include <array>
#include "olc6502.h"
class Bus
{
public:
	Bus();
	~Bus();

public:
	olc6502 cpu; // dispositivos conectados al bus/ devices connected to the Bus
	std::array<uint8_t, 64 * 1024>ram;

public: // metodos de escritura y lectura/methods of writing and reading
	void write(uint16_t addr, uint8_t data); //  metodo de escritura (dirrecion,datos) / write method (address, data)
	uint8_t read(uint16_t addr,bool bReadonly = false); // metodo de lectura (dirrecion,solo lectura) / reading method (address, RO)
};

