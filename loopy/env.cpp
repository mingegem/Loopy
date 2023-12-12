#include "env.hpp"

#if defined(_WIN32)
#include <Windows.h>
#endif

bool AddToPath(const std::string& newPath)
{
#if defined(_WIN32)
    return true;
#endif
    return false;
}
