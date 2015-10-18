#pragma once

#ifndef SRC_FIRSTCOMPONENT_IFIRSTCOMPONENT_H
#define SRC_FIRSTCOMPONENT_IFIRSTCOMPONENT_H

#include <memory>

namespace CompDesign {

class FirstComponentBase;

class IFirstComponent
{
public:
    int interfaceMethod();

    ~IFirstComponent();

private:
    IFirstComponent();

    std::unique_ptr<FirstComponentBase> m_impl;
};

}

#endif // SRC_FIRSTCOMPONENT_IFIRSTCOMPONENT_H
