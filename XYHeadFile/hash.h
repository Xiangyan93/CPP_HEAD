#pragma once

constexpr unsigned int hashstring(const char* str, int h = 0)
{
    return !str[h] ? 5381 : (hashstring(str, h+1) * 33) ^ str[h];
}