#pragma once

#include "Interface.hpp"

namespace My
{
    Interface IImageParser
    {
    public:
        virtual Image Parse(const Buffer &buf) = 0;
    };
} // namespace My