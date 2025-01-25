#ifndef CONVERSION_HPP
#define CONVERSION_HPP

// convert temps (userc68 software)

#define FAHRENHEITIUM 32
#define NINEFIFTHS 1.8
#define FIVENINTHS 5.0f / 9.0f
#define KELVINIUM 273.15

namespace conv {

  // fahrenheit

  float fc(int f) {
    return (f - FAHRENHEITIUM) * FIVENINTHS;
  }

  float fk(int f) {
    return (f - FAHRENHEITIUM) * FIVENINTHS + KELVINIUM;
  }

  // celsius 

  float cf(int c) {
    return c * NINEFIFTHS + FAHRENHEITIUM;
  }

  float ck(int c) {
    return c + KELVINIUM;
  }

  // kelvin

  float kf(int k) {
    return (k - KELVINIUM) * NINEFIFTHS + FAHRENHEITIUM;
  }

  float kc(int k) {
    return k - KELVINIUM;
  }

}

#undef FAHRENHEITIUM
#undef NINEFIFTHS
#undef FIVENINTHS
#undef KELVINIUM

#endif