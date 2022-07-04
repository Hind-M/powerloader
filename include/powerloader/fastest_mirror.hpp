#ifndef POWERLOADER_FASTEST_MIRROR_HPP
#define POWERLOADER_FASTEST_MIRROR_HPP

#include <string>
#include <vector>

namespace powerloader
{
    class Context;

    void fastest_mirror(const Context& ctx, const std::vector<std::string>& urls);
}

#endif
