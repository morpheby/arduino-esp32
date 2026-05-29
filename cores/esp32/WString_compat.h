
#include <WString.h>

#pragma once

#define FPSTR(str_pointer) (reinterpret_cast<const __FlashStringHelper *>(str_pointer))
#define F(string_literal)  (FPSTR(PSTR(string_literal)))
