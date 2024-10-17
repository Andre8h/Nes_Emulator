#pragma once
#include <cstdint>
class Bus;
class olc6502
{
public:
	olc6502();
	~olc6502();

public:
	void ConnectBus(Bus *n) { bus = n; }

private: 
	Bus   *bus = nullptr;
	void    write(uint16_t a, uint8_t d);
	uint8_t read(uint16_t a);
};

