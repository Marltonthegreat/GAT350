#pragma once
#include "Types.h"
#include "ColorBuffer.h"

class Tracer
{
public:
	void Trace(const ColorBuffer& colorBuffer, class Scene* scene);

public:
	int samples{1000};
};