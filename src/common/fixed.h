#pragma once
#include <cnl/fixed_point.h>

using fixed44_t = cnl::fixed_point<int8_t, -4>;
using ufixed44_t = cnl::fixed_point<uint8_t, -4>;

using fixed88_t = cnl::fixed_point<int16_t, -8>;
using ufixed88_t = cnl::fixed_point<uint16_t, -8>;

using fixed1616_t = cnl::fixed_point<uint32_t, -16>;
using ufixed1616_t = cnl::fixed_point<uint32_t, -16>;
using fixed016_t = cnl::fixed_point<int16_t, -15>;
using ufixed016_t = cnl::fixed_point<uint16_t, -16>;
using fixed160_t = cnl::fixed_point<int16_t, 0>;
using ufixed160_t = cnl::fixed_point<uint16_t, 0>;

using ufixed_1_5_t = cnl::fixed_point<uint32_t, -5>;
using ufixed_4_6_t = cnl::fixed_point<uint32_t, -6>;
using ufixed_1_15_t = cnl::fixed_point<uint16_t, -15>;

using sfixed_1_3_1_t = cnl::fixed_point<int8_t, -1>;
using sfixed_1_3_3_t = cnl::fixed_point<int8_t, -3>;
using sfixed_1_5_6_t = cnl::fixed_point<int16_t, -6>;

template<typename FixedType, typename RepType>
static constexpr
FixedType fixed_from_data(RepType data)
{
   return cnl::from_rep<FixedType, FixedType::rep>{}(data);
}

template<typename Rep, int Exponent, int Radix>
static constexpr
Rep fixed_to_data(cnl::fixed_point<Rep, Exponent, Radix> data)
{
   return cnl::to_rep<cnl::fixed_point<Rep, Exponent, Radix>>{}(data);
}
