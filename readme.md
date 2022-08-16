### concepts.hpp
Concept equivalents of every boolean in <type_traits>. Try it out at [Godbolt](https://godbolt.org/z/aTT9re79r).

### Usage
```cpp
#include "concepts.hpp"

// A function requiring an integral type.
template <concepts::integral type>
bool is_even(const type& input)
{
  return input % 2 == 0;
}

int main(int argc, char** argv)
{
  is_even(1   ); // OK
  is_even(2ul ); // OK
  is_even(3ull); // OK
  is_even(0.1f); // Compile-time error.
}
```

### Notes
- Equivalent functionality will likely be added to the standard in the near future. Until then, you can use this.
- See the related question in [Stack Overflow](https://stackoverflow.com/questions/58067259/will-there-be-a-concept-for-arithmetic-types-in-c-standard-library).
