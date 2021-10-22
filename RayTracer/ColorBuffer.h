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

    inline void SetColor(int x, int y, const color_t& color) const;

	int width{ 0 }, height{ 0 }, pitch{ 0 };
	uint8_t* data{nullptr};
};

inline void ColorBuffer::SetColor(int x, int y, const color_t& color) const
{
    if (x < 0 || x >= width || y < 0 || y >= height) return;
    ((color_t*)(data))[x + y * width] = color;
}