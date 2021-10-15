#pragma once
#include "Renderer.h"

struct ColorBuffer
{
	~ColorBuffer() { delete[] data; }

	int width{ 0 }, height{ 0 }, pitch{ 0 };
	uint8_t* data{nullptr};
};