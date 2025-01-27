#include "pch.h"
#include "Class.h"
#include "Class.g.cpp"

#pragma comment(lib, "user32.lib")

namespace winrt::TestComponent::implementation
{
    void Class::ShowMessage(const winrt::hstring &message)
    {
        MessageBoxW(nullptr, message.c_str(), L"Message", MB_OK);
    }
}
