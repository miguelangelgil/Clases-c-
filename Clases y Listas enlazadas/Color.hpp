#pragma once
#include <cstdint>
namespace magma 
{
	union Color
	{
		uint32_t color;
		uint8_t components[4];

	};
}
