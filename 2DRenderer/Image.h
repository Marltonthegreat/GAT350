#pragma once
#include <string>

class Image
{
public:
	~Image() { delete[] buffer; }

	bool Load(const std::string& filename, uint8_t alpha = 255);

private:
	uint8_t* buffer{nullptr};

	int width{ 0 };
	int height{ 0 };
};