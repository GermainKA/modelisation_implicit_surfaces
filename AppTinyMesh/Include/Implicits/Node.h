#ifndef __NODE_H
#define __NODE_H

#include "mathematics.h"
#include <iostream>
#include <memory>
#include <algorithm>
#include <vector>

class Node {
public:
    virtual ~Node() = default;

    virtual double Value(const Vector& p) const = 0;
};  

#endif // __NODE_H__