#ifndef __STM32F103xx_CONFIG_H
#define __STM32F103xx_CONFIG_H

#pragma once

#define PARTIAL_ASSERT 1

#ifdef PARTIAL_ASSERT
#define assert_param(expr) ((void)0)
#endif
#define PARAMS_COUNT_MASK(                                                                     \
    _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, \
    _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, N, ...) N

#define PARAMS_COUNT(...) PARAMS_COUNT_MASK(__VA_ARGS__,                                                                      \
                                            32, 31, 30, 29,                                                                   \
                                            28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                                            7, 6, 5, 4, 3, 2, 1, 0)
/*
  for (int i = 4; i <= 32; ++i)
    {
        outfile << "#define DECLARE_BIT_" << i << "(__bit, ...) (1 << __bit) | DECLARE_BIT_" << (i - 1) << "(__VA_ARGS__)\n";
    }
*/
#define DECLARE_BIT_1(__bit) (1 << __bit)
#define DECLARE_BIT_2(__bit, ...) (1 << __bit) | DECLARE_BIT_1(__VA_ARGS__)
#define DECLARE_BIT_3(__bit, ...) (1 << __bit) | DECLARE_BIT_2(__VA_ARGS__)
#define DECLARE_BIT_4(__bit, ...) (1 << __bit) | DECLARE_BIT_3(__VA_ARGS__)
#define DECLARE_BIT_5(__bit, ...) (1 << __bit) | DECLARE_BIT_4(__VA_ARGS__)
#define DECLARE_BIT_6(__bit, ...) (1 << __bit) | DECLARE_BIT_5(__VA_ARGS__)
#define DECLARE_BIT_7(__bit, ...) (1 << __bit) | DECLARE_BIT_6(__VA_ARGS__)
#define DECLARE_BIT_8(__bit, ...) (1 << __bit) | DECLARE_BIT_7(__VA_ARGS__)
#define DECLARE_BIT_9(__bit, ...) (1 << __bit) | DECLARE_BIT_8(__VA_ARGS__)
#define DECLARE_BIT_10(__bit, ...) (1 << __bit) | DECLARE_BIT_9(__VA_ARGS__)
#define DECLARE_BIT_11(__bit, ...) (1 << __bit) | DECLARE_BIT_10(__VA_ARGS__)
#define DECLARE_BIT_12(__bit, ...) (1 << __bit) | DECLARE_BIT_11(__VA_ARGS__)
#define DECLARE_BIT_13(__bit, ...) (1 << __bit) | DECLARE_BIT_12(__VA_ARGS__)
#define DECLARE_BIT_14(__bit, ...) (1 << __bit) | DECLARE_BIT_13(__VA_ARGS__)
#define DECLARE_BIT_15(__bit, ...) (1 << __bit) | DECLARE_BIT_14(__VA_ARGS__)
#define DECLARE_BIT_16(__bit, ...) (1 << __bit) | DECLARE_BIT_15(__VA_ARGS__)
#define DECLARE_BIT_17(__bit, ...) (1 << __bit) | DECLARE_BIT_16(__VA_ARGS__)
#define DECLARE_BIT_18(__bit, ...) (1 << __bit) | DECLARE_BIT_17(__VA_ARGS__)
#define DECLARE_BIT_19(__bit, ...) (1 << __bit) | DECLARE_BIT_18(__VA_ARGS__)
#define DECLARE_BIT_20(__bit, ...) (1 << __bit) | DECLARE_BIT_19(__VA_ARGS__)
#define DECLARE_BIT_21(__bit, ...) (1 << __bit) | DECLARE_BIT_20(__VA_ARGS__)
#define DECLARE_BIT_22(__bit, ...) (1 << __bit) | DECLARE_BIT_21(__VA_ARGS__)
#define DECLARE_BIT_23(__bit, ...) (1 << __bit) | DECLARE_BIT_22(__VA_ARGS__)
#define DECLARE_BIT_24(__bit, ...) (1 << __bit) | DECLARE_BIT_23(__VA_ARGS__)
#define DECLARE_BIT_25(__bit, ...) (1 << __bit) | DECLARE_BIT_24(__VA_ARGS__)
#define DECLARE_BIT_26(__bit, ...) (1 << __bit) | DECLARE_BIT_25(__VA_ARGS__)
#define DECLARE_BIT_27(__bit, ...) (1 << __bit) | DECLARE_BIT_26(__VA_ARGS__)
#define DECLARE_BIT_28(__bit, ...) (1 << __bit) | DECLARE_BIT_27(__VA_ARGS__)
#define DECLARE_BIT_29(__bit, ...) (1 << __bit) | DECLARE_BIT_28(__VA_ARGS__)
#define DECLARE_BIT_30(__bit, ...) (1 << __bit) | DECLARE_BIT_29(__VA_ARGS__)
#define DECLARE_BIT_31(__bit, ...) (1 << __bit) | DECLARE_BIT_30(__VA_ARGS__)
#define DECLARE_BIT_32(__bit, ...) (1 << __bit) | DECLARE_BIT_31(__VA_ARGS__)

#define DECLARE_BITS(number_of_params, size, ...) ((size)(DECLARE_BIT_##number_of_params(__VA_ARGS__)))
#define BITS_MASK(number_of_params, size, ...) DECLARE_BITS(number_of_params, size, __VA_ARGS__)
#define DEFINE_MASK(size, ...) BITS_MASK(PARAMS_COUNT(__VA_ARGS__), size, __VA_ARGS__)

#define DEFINE_UINT32_MASK(...) DEFINE_MASK(uint32_t, __VA_ARGS__)
#define DEFINE_UCHAR_MASK(...) DEFINE_MASK(unsigned char, __VA_ARGS__)

#endif