#pragma once

#include "List.h"
#include "Element.h"

namespace sdds
{
    List<Product> mergeRaw(const List<Description> &desc, const List<Price> &price);

    List<Product> mergeSmart(const List<Description> &desc, const List<Price> &price);
}
