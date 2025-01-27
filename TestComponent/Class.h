#pragma once

#include "Class.g.h"

namespace winrt::TestComponent::implementation
{
    struct Class : ClassT<Class>
    {
        Class() = default;

        void ShowMessage(const winrt::hstring &message);
    };
}

namespace winrt::TestComponent::factory_implementation
{
    struct Class : ClassT<Class, implementation::Class>
    {
    };
}
