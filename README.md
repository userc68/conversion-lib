# Conversion Lib userc68
### how to use

type first "conv::" then fc if you are going fahrenheit to celsius, cf = celsius to fahrenheit, kf = kelvin to fahrenheit, 
and so on.


there are 6 functions, fc, fk, cf, ck, kf, kc

first letter is the starting value, second is the end value. they all have one parameter, the first letter of the function


```cpp
#include "conversion.hpp"
#include <iostream>

int main() {
  std::cout << conv::fc(100); // ~38 degrees celsius 
  return 0;
}
```

got bored waiting on the pork to get to 203 degrees F so made this
