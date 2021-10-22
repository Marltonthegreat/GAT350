#pragma once
#include "Renderer.h"

struct ColorBuffer
{
    ColorBuffer() = default;
    ColorBuffer(const ColorBuffer & other)
    {
        width = other.width;
        height = other.height;

        if (other.data)
        {
            data = new uint8_t[width * height * sizeof(color_t)];
            memcpy(data, other.data, width * height * sizeof(color_t));
        }
    }

	~ColorBuffer() { delete[] data; }

	int width{ 0 }, height{ 0 }, pitch{ 0 };
	uint8_t* data{nullptr};
};