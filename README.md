# sitk (Static Introspection Toolkit)

This toolkit is designed to empower C++ with tools for compile-time introspection of types. Understanding and inspecting types during compilation can greatly enhance the development process, aiding in code optimization, error detection, and overall code adaptability.

## Getting started

TODO

## Example

Given a type:

```cpp
struct test
{
    int member1;
};
```

It is possible to check the existence of a member using:

```cpp
if constexpr (has_member(fail, test))
{
    std::cout << "Fail\n";
}
if constexpr  (has_member(member1, test))
{
    std::cout << "It works!\n";
}

template<typename T>
auto constrained() -> bool
    requires(has_member(member1, T))
{
    return true;
}
```