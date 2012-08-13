#ifndef FRIENDSMASHER_MATH_DEF
#define FRIENDSMASHER_MATH_DEF

namespace FriendSmasher
{
    namespace Math
    {
        const float kEPSILON = 1.0e-5f;
        const float kBIGEPSILON = 1.0e-2f;
        const float kPI = 3.141592654f;
        const float k2PI = 6.283185308f;
        const float kPIOVER2 = 1.570796327f;
        const float kPIOVER4 = 0.7853981635f;

        const float kDegreesToRadians = 0.017453292519943295769236907684886f; //kPi / 180.0f;
        const float kRadiansToDegrees = 57.295779513082320876798154814105f; //180.0f / kPi;
        const float k1BYPI = 0.318309886f;

        const float kFloatMax = 3.402823466e+38F;
        const float kFloatMin = 1.175494351e-38F;
    }
}

#endif