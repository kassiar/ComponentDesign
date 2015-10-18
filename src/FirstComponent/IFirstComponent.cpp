#include "IFirstComponent.h"

#include "FirstComponentBase.h"

namespace CompDesign {

IFirstComponent::IFirstComponent()
{
}

int IFirstComponent::interfaceMethod()
{
    return m_impl->doStuff();
}

IFirstComponent::~IFirstComponent()
{
}

}
