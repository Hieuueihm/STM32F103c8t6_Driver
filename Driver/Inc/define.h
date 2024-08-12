#ifndef __DEFINE_H
#define __DEFINE_H

/*
    call PARAMS_COUNT(1, 2, 3) <-> PARAMS_COUNT_MASK(1, 2, 3, 300 -> 3) -> n = 3
*/
#define PARAMS_COUNT_MASK(                                                                                                        \
    _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20,                                    \
    _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, _41,                      \
    _42, _43, _44, _45, _46, _47, _48, _49, _50, _51, _52, _53, _54, _55, _56, _57, _58, _59, _60, _61, _62,                      \
    _63, _64, _65, _66, _67, _68, _69, _70, _71, _72, _73, _74, _75, _76, _77, _78, _79, _80, _81, _82, _83,                      \
    _84, _85, _86, _87, _88, _89, _90, _91, _92, _93, _94, _95, _96, _97, _98, _99, _100, _101, _102, _103, _104,                 \
    _105, _106, _107, _108, _109, _110, _111, _112, _113, _114, _115, _116, _117, _118, _119, _120, _121, _122, _123, _124, _125, \
    _126, _127, _128, _129, _130, _131, _132, _133, _134, _135, _136, _137, _138, _139, _140, _141, _142, _143, _144, _145, _146, \
    _147, _148, _149, _150, _151, _152, _153, _154, _155, _156, _157, _158, _159, _160, _161, _162, _163, _164, _165, _166, _167, \
    _168, _169, _170, _171, _172, _173, _174, _175, _176, _177, _178, _179, _180, _181, _182, _183, _184, _185, _186, _187, _188, \
    _189, _190, _191, _192, _193, _194, _195, _196, _197, _198, _199, _200, _201, _202, _203, _204, _205, _206, _207, _208, _209, \
    _210, _211, _212, _213, _214, _215, _216, _217, _218, _219, _220, _221, _222, _223, _224, _225, _226, _227, _228, _229, _230, \
    _231, _232, _233, _234, _235, _236, _237, _238, _239, _240, _241, _242, _243, _244, _245, _246, _247, _248, _249, _250, _251, \
    _252, _253, _254, _255, _256, N, ...) N
#define PARAMS_COUNT(...) PARAMS_COUNT_MASK(__VA_ARGS__,                                                                                             \
                                            256, 255, 254, 253, 252, 251, 250, 249, 248, 247, 246, 245, 244, 243, 242, 241, 240, 239,                \
                                            238, 237, 236, 235, 234, 233, 232, 231, 230, 229, 228, 227, 226, 225, 224, 223, 222, 221, 220, 219, 218, \
                                            217, 216, 215, 214, 213, 212, 211, 210, 209, 208, 207, 206, 205, 204, 203, 202, 201, 200, 199, 198, 197, \
                                            196, 195, 194, 193, 192, 191, 190, 189, 188, 187, 186, 185, 184, 183, 182, 181, 180, 179, 178, 177, 176, \
                                            175, 174, 173, 172, 171, 170, 169, 168, 167, 166, 165, 164, 163, 162, 161, 160, 159, 158, 157, 156, 155, \
                                            154, 153, 152, 151, 150, 149, 148, 147, 146, 145, 144, 143, 142, 141, 140, 139, 138, 137, 136, 135, 134, \
                                            133, 132, 131, 130, 129, 128, 127, 126, 125, 124, 123, 122, 121, 120, 119, 118, 117, 116, 115, 114, 113, \
                                            112, 111, 110, 109, 108, 107, 106, 105, 104, 103, 102, 101, 100, 99, 98, 97, 96, 95, 94, 93, 92,         \
                                            91, 90, 89, 88, 87, 86, 85, 84, 83, 82, 81, 80, 79, 78, 77, 76, 75, 74, 73, 72, 71,                      \
                                            70, 69, 68, 67, 66, 65, 64, 63, 62, 61, 60, 59, 58, 57, 56, 55, 54, 53, 52, 51, 50,                      \
                                            49, 48, 47, 46, 45, 44, 43, 42, 41, 40, 39, 38, 37, 36, 35, 34, 33, 32, 31, 30, 29,                      \
                                            28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8,                        \
                                            7, 6, 5, 4, 3, 2, 1, 0)

/*
   PARAMS_INDEX => PARAMETER ##INDEX
*/
#define PARAMS_0(_0, ...) _0
#define PARAMS_1(_0, ...) PARAMS_0(__VA_ARGS__)
#define PARAMS_2(_0, ...) PARAMS_1(__VA_ARGS__)
#define PARAMS_3(_0, ...) PARAMS_2(__VA_ARGS__)
#define PARAMS_4(_0, ...) PARAMS_3(__VA_ARGS__)
#define PARAMS_5(_0, ...) PARAMS_4(__VA_ARGS__)
#define PARAMS_6(_0, ...) PARAMS_5(__VA_ARGS__)
#define PARAMS_7(_0, ...) PARAMS_6(__VA_ARGS__)
#define PARAMS_8(_0, ...) PARAMS_7(__VA_ARGS__)
#define PARAMS_9(_0, ...) PARAMS_8(__VA_ARGS__)
#define PARAMS_10(_0, ...) PARAMS_9(__VA_ARGS__)
#define PARAMS_11(_0, ...) PARAMS_10(__VA_ARGS__)
#define PARAMS_12(_0, ...) PARAMS_11(__VA_ARGS__)
#define PARAMS_13(_0, ...) PARAMS_12(__VA_ARGS__)
#define PARAMS_14(_0, ...) PARAMS_13(__VA_ARGS__)
#define PARAMS_15(_0, ...) PARAMS_14(__VA_ARGS__)
#define PARAMS_16(_0, ...) PARAMS_15(__VA_ARGS__)
#define PARAMS_17(_0, ...) PARAMS_16(__VA_ARGS__)
#define PARAMS_18(_0, ...) PARAMS_17(__VA_ARGS__)
#define PARAMS_19(_0, ...) PARAMS_18(__VA_ARGS__)
#define PARAMS_20(_0, ...) PARAMS_19(__VA_ARGS__)
#define PARAMS_21(_0, ...) PARAMS_20(__VA_ARGS__)
#define PARAMS_22(_0, ...) PARAMS_21(__VA_ARGS__)
#define PARAMS_23(_0, ...) PARAMS_22(__VA_ARGS__)
#define PARAMS_24(_0, ...) PARAMS_23(__VA_ARGS__)
#define PARAMS_25(_0, ...) PARAMS_24(__VA_ARGS__)
#define PARAMS_26(_0, ...) PARAMS_25(__VA_ARGS__)
#define PARAMS_27(_0, ...) PARAMS_26(__VA_ARGS__)
#define PARAMS_28(_0, ...) PARAMS_27(__VA_ARGS__)
#define PARAMS_29(_0, ...) PARAMS_28(__VA_ARGS__)
#define PARAMS_30(_0, ...) PARAMS_29(__VA_ARGS__)
#define PARAMS_31(_0, ...) PARAMS_30(__VA_ARGS__)
#define PARAMS_32(_0, ...) PARAMS_31(__VA_ARGS__)
#define PARAMS_33(_0, ...) PARAMS_32(__VA_ARGS__)
#define PARAMS_34(_0, ...) PARAMS_33(__VA_ARGS__)
#define PARAMS_35(_0, ...) PARAMS_34(__VA_ARGS__)
#define PARAMS_36(_0, ...) PARAMS_35(__VA_ARGS__)
#define PARAMS_37(_0, ...) PARAMS_36(__VA_ARGS__)
#define PARAMS_38(_0, ...) PARAMS_37(__VA_ARGS__)
#define PARAMS_39(_0, ...) PARAMS_38(__VA_ARGS__)
#define PARAMS_40(_0, ...) PARAMS_39(__VA_ARGS__)
#define PARAMS_41(_0, ...) PARAMS_40(__VA_ARGS__)
#define PARAMS_42(_0, ...) PARAMS_41(__VA_ARGS__)
#define PARAMS_43(_0, ...) PARAMS_42(__VA_ARGS__)
#define PARAMS_44(_0, ...) PARAMS_43(__VA_ARGS__)
#define PARAMS_45(_0, ...) PARAMS_44(__VA_ARGS__)
#define PARAMS_46(_0, ...) PARAMS_45(__VA_ARGS__)
#define PARAMS_47(_0, ...) PARAMS_46(__VA_ARGS__)
#define PARAMS_48(_0, ...) PARAMS_47(__VA_ARGS__)
#define PARAMS_49(_0, ...) PARAMS_48(__VA_ARGS__)
#define PARAMS_50(_0, ...) PARAMS_49(__VA_ARGS__)
#define PARAMS_51(_0, ...) PARAMS_50(__VA_ARGS__)
#define PARAMS_52(_0, ...) PARAMS_51(__VA_ARGS__)
#define PARAMS_53(_0, ...) PARAMS_52(__VA_ARGS__)
#define PARAMS_54(_0, ...) PARAMS_53(__VA_ARGS__)
#define PARAMS_55(_0, ...) PARAMS_54(__VA_ARGS__)
#define PARAMS_56(_0, ...) PARAMS_55(__VA_ARGS__)
#define PARAMS_57(_0, ...) PARAMS_56(__VA_ARGS__)
#define PARAMS_58(_0, ...) PARAMS_57(__VA_ARGS__)
#define PARAMS_59(_0, ...) PARAMS_58(__VA_ARGS__)
#define PARAMS_60(_0, ...) PARAMS_59(__VA_ARGS__)
#define PARAMS_61(_0, ...) PARAMS_60(__VA_ARGS__)
#define PARAMS_62(_0, ...) PARAMS_61(__VA_ARGS__)
#define PARAMS_63(_0, ...) PARAMS_62(__VA_ARGS__)

#define PARAMS(index, ...) PARAMS_##index(__VA_ARGS__)

#define PARAMS_GET_FROM_0(...) __VA_ARGS__
#define PARAMS_GET_FROM_1(_0, ...) __VA_ARGS__
#define PARAMS_GET_FROM_2(_0, ...) PARAMS_GET_FROM_1(__VA_ARGS__)
#define PARAMS_GET_FROM_3(_0, ...) PARAMS_GET_FROM_2(__VA_ARGS__)
#define PARAMS_GET_FROM_4(_0, ...) PARAMS_GET_FROM_3(__VA_ARGS__)
#define PARAMS_GET_FROM_5(_0, ...) PARAMS_GET_FROM_4(__VA_ARGS__)
#define PARAMS_GET_FROM_6(_0, ...) PARAMS_GET_FROM_5(__VA_ARGS__)
#define PARAMS_GET_FROM_7(_0, ...) PARAMS_GET_FROM_6(__VA_ARGS__)
#define PARAMS_GET_FROM_8(_0, ...) PARAMS_GET_FROM_7(__VA_ARGS__)
#define PARAMS_GET_FROM_9(_0, ...) PARAMS_GET_FROM_8(__VA_ARGS__)
#define PARAMS_GET_FROM_10(_0, ...) PARAMS_GET_FROM_9(__VA_ARGS__)
#define PARAMS_GET_FROM_11(_0, ...) PARAMS_GET_FROM_10(__VA_ARGS__)
#define PARAMS_GET_FROM_12(_0, ...) PARAMS_GET_FROM_11(__VA_ARGS__)
#define PARAMS_GET_FROM_13(_0, ...) PARAMS_GET_FROM_12(__VA_ARGS__)
#define PARAMS_GET_FROM_14(_0, ...) PARAMS_GET_FROM_13(__VA_ARGS__)
#define PARAMS_GET_FROM_15(_0, ...) PARAMS_GET_FROM_14(__VA_ARGS__)
#define PARAMS_GET_FROM_16(_0, ...) PARAMS_GET_FROM_15(__VA_ARGS__)
#define PARAMS_GET_FROM_17(_0, ...) PARAMS_GET_FROM_16(__VA_ARGS__)
#define PARAMS_GET_FROM_18(_0, ...) PARAMS_GET_FROM_17(__VA_ARGS__)
#define PARAMS_GET_FROM_19(_0, ...) PARAMS_GET_FROM_18(__VA_ARGS__)
#define PARAMS_GET_FROM_20(_0, ...) PARAMS_GET_FROM_19(__VA_ARGS__)
#define PARAMS_GET_FROM_21(_0, ...) PARAMS_GET_FROM_20(__VA_ARGS__)
#define PARAMS_GET_FROM_22(_0, ...) PARAMS_GET_FROM_21(__VA_ARGS__)
#define PARAMS_GET_FROM_23(_0, ...) PARAMS_GET_FROM_22(__VA_ARGS__)
#define PARAMS_GET_FROM_24(_0, ...) PARAMS_GET_FROM_23(__VA_ARGS__)
#define PARAMS_GET_FROM_25(_0, ...) PARAMS_GET_FROM_24(__VA_ARGS__)
#define PARAMS_GET_FROM_26(_0, ...) PARAMS_GET_FROM_25(__VA_ARGS__)
#define PARAMS_GET_FROM_27(_0, ...) PARAMS_GET_FROM_26(__VA_ARGS__)
#define PARAMS_GET_FROM_28(_0, ...) PARAMS_GET_FROM_27(__VA_ARGS__)
#define PARAMS_GET_FROM_29(_0, ...) PARAMS_GET_FROM_28(__VA_ARGS__)
#define PARAMS_GET_FROM_30(_0, ...) PARAMS_GET_FROM_29(__VA_ARGS__)
#define PARAMS_GET_FROM_31(_0, ...) PARAMS_GET_FROM_30(__VA_ARGS__)
#define PARAMS_GET_FROM_32(_0, ...) PARAMS_GET_FROM_31(__VA_ARGS__)
#define PARAMS_GET_FROM_33(_0, ...) PARAMS_GET_FROM_32(__VA_ARGS__)
#define PARAMS_GET_FROM_34(_0, ...) PARAMS_GET_FROM_33(__VA_ARGS__)
#define PARAMS_GET_FROM_35(_0, ...) PARAMS_GET_FROM_34(__VA_ARGS__)
#define PARAMS_GET_FROM_36(_0, ...) PARAMS_GET_FROM_35(__VA_ARGS__)
#define PARAMS_GET_FROM_37(_0, ...) PARAMS_GET_FROM_36(__VA_ARGS__)
#define PARAMS_GET_FROM_38(_0, ...) PARAMS_GET_FROM_37(__VA_ARGS__)
#define PARAMS_GET_FROM_39(_0, ...) PARAMS_GET_FROM_38(__VA_ARGS__)
#define PARAMS_GET_FROM_40(_0, ...) PARAMS_GET_FROM_39(__VA_ARGS__)
#define PARAMS_GET_FROM_41(_0, ...) PARAMS_GET_FROM_40(__VA_ARGS__)
#define PARAMS_GET_FROM_42(_0, ...) PARAMS_GET_FROM_41(__VA_ARGS__)
#define PARAMS_GET_FROM_43(_0, ...) PARAMS_GET_FROM_42(__VA_ARGS__)
#define PARAMS_GET_FROM_44(_0, ...) PARAMS_GET_FROM_43(__VA_ARGS__)
#define PARAMS_GET_FROM_45(_0, ...) PARAMS_GET_FROM_44(__VA_ARGS__)
#define PARAMS_GET_FROM_46(_0, ...) PARAMS_GET_FROM_45(__VA_ARGS__)
#define PARAMS_GET_FROM_47(_0, ...) PARAMS_GET_FROM_46(__VA_ARGS__)
#define PARAMS_GET_FROM_48(_0, ...) PARAMS_GET_FROM_47(__VA_ARGS__)
#define PARAMS_GET_FROM_49(_0, ...) PARAMS_GET_FROM_48(__VA_ARGS__)
#define PARAMS_GET_FROM_50(_0, ...) PARAMS_GET_FROM_49(__VA_ARGS__)
#define PARAMS_GET_FROM_51(_0, ...) PARAMS_GET_FROM_50(__VA_ARGS__)
#define PARAMS_GET_FROM_52(_0, ...) PARAMS_GET_FROM_51(__VA_ARGS__)
#define PARAMS_GET_FROM_53(_0, ...) PARAMS_GET_FROM_52(__VA_ARGS__)
#define PARAMS_GET_FROM_54(_0, ...) PARAMS_GET_FROM_53(__VA_ARGS__)
#define PARAMS_GET_FROM_55(_0, ...) PARAMS_GET_FROM_54(__VA_ARGS__)
#define PARAMS_GET_FROM_56(_0, ...) PARAMS_GET_FROM_55(__VA_ARGS__)
#define PARAMS_GET_FROM_57(_0, ...) PARAMS_GET_FROM_56(__VA_ARGS__)
#define PARAMS_GET_FROM_58(_0, ...) PARAMS_GET_FROM_57(__VA_ARGS__)
#define PARAMS_GET_FROM_59(_0, ...) PARAMS_GET_FROM_58(__VA_ARGS__)
#define PARAMS_GET_FROM_60(_0, ...) PARAMS_GET_FROM_59(__VA_ARGS__)
#define PARAMS_GET_FROM_61(_0, ...) PARAMS_GET_FROM_60(__VA_ARGS__)
#define PARAMS_GET_FROM_62(_0, ...) PARAMS_GET_FROM_61(__VA_ARGS__)
#define PARAMS_GET_FROM_63(_0, ...) PARAMS_GET_FROM_62(__VA_ARGS__)
#define PARAMS_GET_FROM_64(_0, ...) PARAMS_GET_FROM_63(__VA_ARGS__)
#define PARAMS_GET_FROM_65(_0, ...) PARAMS_GET_FROM_64(__VA_ARGS__)
#define PARAMS_GET_FROM_66(_0, ...) PARAMS_GET_FROM_65(__VA_ARGS__)
#define PARAMS_GET_FROM_67(_0, ...) PARAMS_GET_FROM_66(__VA_ARGS__)
#define PARAMS_GET_FROM_68(_0, ...) PARAMS_GET_FROM_67(__VA_ARGS__)
#define PARAMS_GET_FROM_69(_0, ...) PARAMS_GET_FROM_68(__VA_ARGS__)
#define PARAMS_GET_FROM_70(_0, ...) PARAMS_GET_FROM_69(__VA_ARGS__)
#define PARAMS_GET_FROM_71(_0, ...) PARAMS_GET_FROM_70(__VA_ARGS__)
#define PARAMS_GET_FROM_72(_0, ...) PARAMS_GET_FROM_71(__VA_ARGS__)
#define PARAMS_GET_FROM_73(_0, ...) PARAMS_GET_FROM_72(__VA_ARGS__)
#define PARAMS_GET_FROM_74(_0, ...) PARAMS_GET_FROM_73(__VA_ARGS__)
#define PARAMS_GET_FROM_75(_0, ...) PARAMS_GET_FROM_74(__VA_ARGS__)
#define PARAMS_GET_FROM_76(_0, ...) PARAMS_GET_FROM_75(__VA_ARGS__)
#define PARAMS_GET_FROM_77(_0, ...) PARAMS_GET_FROM_76(__VA_ARGS__)
#define PARAMS_GET_FROM_78(_0, ...) PARAMS_GET_FROM_77(__VA_ARGS__)
#define PARAMS_GET_FROM_79(_0, ...) PARAMS_GET_FROM_78(__VA_ARGS__)
#define PARAMS_GET_FROM_80(_0, ...) PARAMS_GET_FROM_79(__VA_ARGS__)
#define PARAMS_GET_FROM_81(_0, ...) PARAMS_GET_FROM_80(__VA_ARGS__)
#define PARAMS_GET_FROM_82(_0, ...) PARAMS_GET_FROM_81(__VA_ARGS__)
#define PARAMS_GET_FROM_83(_0, ...) PARAMS_GET_FROM_82(__VA_ARGS__)
#define PARAMS_GET_FROM_84(_0, ...) PARAMS_GET_FROM_83(__VA_ARGS__)
#define PARAMS_GET_FROM_85(_0, ...) PARAMS_GET_FROM_84(__VA_ARGS__)
#define PARAMS_GET_FROM_86(_0, ...) PARAMS_GET_FROM_85(__VA_ARGS__)
#define PARAMS_GET_FROM_87(_0, ...) PARAMS_GET_FROM_86(__VA_ARGS__)
#define PARAMS_GET_FROM_88(_0, ...) PARAMS_GET_FROM_87(__VA_ARGS__)
#define PARAMS_GET_FROM_89(_0, ...) PARAMS_GET_FROM_88(__VA_ARGS__)
#define PARAMS_GET_FROM_90(_0, ...) PARAMS_GET_FROM_89(__VA_ARGS__)
#define PARAMS_GET_FROM_91(_0, ...) PARAMS_GET_FROM_90(__VA_ARGS__)
#define PARAMS_GET_FROM_92(_0, ...) PARAMS_GET_FROM_91(__VA_ARGS__)
#define PARAMS_GET_FROM_93(_0, ...) PARAMS_GET_FROM_92(__VA_ARGS__)
#define PARAMS_GET_FROM_94(_0, ...) PARAMS_GET_FROM_93(__VA_ARGS__)
#define PARAMS_GET_FROM_95(_0, ...) PARAMS_GET_FROM_94(__VA_ARGS__)
#define PARAMS_GET_FROM_96(_0, ...) PARAMS_GET_FROM_95(__VA_ARGS__)
#define PARAMS_GET_FROM_97(_0, ...) PARAMS_GET_FROM_96(__VA_ARGS__)
#define PARAMS_GET_FROM_98(_0, ...) PARAMS_GET_FROM_97(__VA_ARGS__)
#define PARAMS_GET_FROM_99(_0, ...) PARAMS_GET_FROM_98(__VA_ARGS__)
#define PARAMS_GET_FROM_100(_0, ...) PARAMS_GET_FROM_99(__VA_ARGS__)
#define PARAMS_GET_FROM_101(_0, ...) PARAMS_GET_FROM_100(__VA_ARGS__)
#define PARAMS_GET_FROM_102(_0, ...) PARAMS_GET_FROM_101(__VA_ARGS__)
#define PARAMS_GET_FROM_103(_0, ...) PARAMS_GET_FROM_102(__VA_ARGS__)
#define PARAMS_GET_FROM_104(_0, ...) PARAMS_GET_FROM_103(__VA_ARGS__)
#define PARAMS_GET_FROM_105(_0, ...) PARAMS_GET_FROM_104(__VA_ARGS__)
#define PARAMS_GET_FROM_106(_0, ...) PARAMS_GET_FROM_105(__VA_ARGS__)
#define PARAMS_GET_FROM_107(_0, ...) PARAMS_GET_FROM_106(__VA_ARGS__)
#define PARAMS_GET_FROM_108(_0, ...) PARAMS_GET_FROM_107(__VA_ARGS__)
#define PARAMS_GET_FROM_109(_0, ...) PARAMS_GET_FROM_108(__VA_ARGS__)
#define PARAMS_GET_FROM_110(_0, ...) PARAMS_GET_FROM_109(__VA_ARGS__)
#define PARAMS_GET_FROM_111(_0, ...) PARAMS_GET_FROM_110(__VA_ARGS__)
#define PARAMS_GET_FROM_112(_0, ...) PARAMS_GET_FROM_111(__VA_ARGS__)
#define PARAMS_GET_FROM_113(_0, ...) PARAMS_GET_FROM_112(__VA_ARGS__)
#define PARAMS_GET_FROM_114(_0, ...) PARAMS_GET_FROM_113(__VA_ARGS__)
#define PARAMS_GET_FROM_115(_0, ...) PARAMS_GET_FROM_114(__VA_ARGS__)
#define PARAMS_GET_FROM_116(_0, ...) PARAMS_GET_FROM_115(__VA_ARGS__)
#define PARAMS_GET_FROM_117(_0, ...) PARAMS_GET_FROM_116(__VA_ARGS__)
#define PARAMS_GET_FROM_118(_0, ...) PARAMS_GET_FROM_117(__VA_ARGS__)
#define PARAMS_GET_FROM_119(_0, ...) PARAMS_GET_FROM_118(__VA_ARGS__)
#define PARAMS_GET_FROM_120(_0, ...) PARAMS_GET_FROM_119(__VA_ARGS__)
#define PARAMS_GET_FROM_121(_0, ...) PARAMS_GET_FROM_120(__VA_ARGS__)
#define PARAMS_GET_FROM_122(_0, ...) PARAMS_GET_FROM_121(__VA_ARGS__)
#define PARAMS_GET_FROM_123(_0, ...) PARAMS_GET_FROM_122(__VA_ARGS__)
#define PARAMS_GET_FROM_124(_0, ...) PARAMS_GET_FROM_123(__VA_ARGS__)
#define PARAMS_GET_FROM_125(_0, ...) PARAMS_GET_FROM_124(__VA_ARGS__)
#define PARAMS_GET_FROM_126(_0, ...) PARAMS_GET_FROM_125(__VA_ARGS__)
#define PARAMS_GET_FROM_127(_0, ...) PARAMS_GET_FROM_126(__VA_ARGS__)

#define PARAMS_GET_FROM_MASK(from, ...) PARAMS_GET_FROM_##from(__VA_ARGS__)
#define PARAMS_GET_FROM(from, ...) PARAMS_GET_FROM_MASK(from, __VA_ARGS__)

/*
    PARAM GET TO ##INDEX -> 0 ... INDEX
*/
#define PARAMS_GET_TO_1(_0, ...) _0
#define PARAMS_GET_TO_2(_0, ...) _0, PARAMS_GET_TO_1(__VA_ARGS__)
#define PARAMS_GET_TO_3(_0, ...) _0, PARAMS_GET_TO_2(__VA_ARGS__)
#define PARAMS_GET_TO_4(_0, ...) _0, PARAMS_GET_TO_3(__VA_ARGS__)
#define PARAMS_GET_TO_5(_0, ...) _0, PARAMS_GET_TO_4(__VA_ARGS__)
#define PARAMS_GET_TO_6(_0, ...) _0, PARAMS_GET_TO_5(__VA_ARGS__)
#define PARAMS_GET_TO_7(_0, ...) _0, PARAMS_GET_TO_6(__VA_ARGS__)
#define PARAMS_GET_TO_8(_0, ...) _0, PARAMS_GET_TO_7(__VA_ARGS__)
#define PARAMS_GET_TO_9(_0, ...) _0, PARAMS_GET_TO_8(__VA_ARGS__)
#define PARAMS_GET_TO_10(_0, ...) _0, PARAMS_GET_TO_9(__VA_ARGS__)
#define PARAMS_GET_TO_11(_0, ...) _0, PARAMS_GET_TO_10(__VA_ARGS__)
#define PARAMS_GET_TO_12(_0, ...) _0, PARAMS_GET_TO_11(__VA_ARGS__)
#define PARAMS_GET_TO_13(_0, ...) _0, PARAMS_GET_TO_12(__VA_ARGS__)
#define PARAMS_GET_TO_14(_0, ...) _0, PARAMS_GET_TO_13(__VA_ARGS__)
#define PARAMS_GET_TO_15(_0, ...) _0, PARAMS_GET_TO_14(__VA_ARGS__)
#define PARAMS_GET_TO_16(_0, ...) _0, PARAMS_GET_TO_15(__VA_ARGS__)
#define PARAMS_GET_TO_17(_0, ...) _0, PARAMS_GET_TO_16(__VA_ARGS__)
#define PARAMS_GET_TO_18(_0, ...) _0, PARAMS_GET_TO_17(__VA_ARGS__)
#define PARAMS_GET_TO_19(_0, ...) _0, PARAMS_GET_TO_18(__VA_ARGS__)
#define PARAMS_GET_TO_20(_0, ...) _0, PARAMS_GET_TO_19(__VA_ARGS__)
#define PARAMS_GET_TO_21(_0, ...) _0, PARAMS_GET_TO_20(__VA_ARGS__)
#define PARAMS_GET_TO_22(_0, ...) _0, PARAMS_GET_TO_21(__VA_ARGS__)
#define PARAMS_GET_TO_23(_0, ...) _0, PARAMS_GET_TO_22(__VA_ARGS__)
#define PARAMS_GET_TO_24(_0, ...) _0, PARAMS_GET_TO_23(__VA_ARGS__)
#define PARAMS_GET_TO_25(_0, ...) _0, PARAMS_GET_TO_24(__VA_ARGS__)
#define PARAMS_GET_TO_26(_0, ...) _0, PARAMS_GET_TO_25(__VA_ARGS__)
#define PARAMS_GET_TO_27(_0, ...) _0, PARAMS_GET_TO_26(__VA_ARGS__)
#define PARAMS_GET_TO_28(_0, ...) _0, PARAMS_GET_TO_27(__VA_ARGS__)
#define PARAMS_GET_TO_29(_0, ...) _0, PARAMS_GET_TO_28(__VA_ARGS__)
#define PARAMS_GET_TO_30(_0, ...) _0, PARAMS_GET_TO_29(__VA_ARGS__)
#define PARAMS_GET_TO_31(_0, ...) _0, PARAMS_GET_TO_30(__VA_ARGS__)
#define PARAMS_GET_TO_32(_0, ...) _0, PARAMS_GET_TO_31(__VA_ARGS__)
#define PARAMS_GET_TO_33(_0, ...) _0, PARAMS_GET_TO_32(__VA_ARGS__)
#define PARAMS_GET_TO_34(_0, ...) _0, PARAMS_GET_TO_33(__VA_ARGS__)
#define PARAMS_GET_TO_35(_0, ...) _0, PARAMS_GET_TO_34(__VA_ARGS__)
#define PARAMS_GET_TO_36(_0, ...) _0, PARAMS_GET_TO_35(__VA_ARGS__)
#define PARAMS_GET_TO_37(_0, ...) _0, PARAMS_GET_TO_36(__VA_ARGS__)
#define PARAMS_GET_TO_38(_0, ...) _0, PARAMS_GET_TO_37(__VA_ARGS__)
#define PARAMS_GET_TO_39(_0, ...) _0, PARAMS_GET_TO_38(__VA_ARGS__)
#define PARAMS_GET_TO_40(_0, ...) _0, PARAMS_GET_TO_39(__VA_ARGS__)
#define PARAMS_GET_TO_41(_0, ...) _0, PARAMS_GET_TO_40(__VA_ARGS__)
#define PARAMS_GET_TO_42(_0, ...) _0, PARAMS_GET_TO_41(__VA_ARGS__)
#define PARAMS_GET_TO_43(_0, ...) _0, PARAMS_GET_TO_42(__VA_ARGS__)
#define PARAMS_GET_TO_44(_0, ...) _0, PARAMS_GET_TO_43(__VA_ARGS__)
#define PARAMS_GET_TO_45(_0, ...) _0, PARAMS_GET_TO_44(__VA_ARGS__)
#define PARAMS_GET_TO_46(_0, ...) _0, PARAMS_GET_TO_45(__VA_ARGS__)
#define PARAMS_GET_TO_47(_0, ...) _0, PARAMS_GET_TO_46(__VA_ARGS__)
#define PARAMS_GET_TO_48(_0, ...) _0, PARAMS_GET_TO_47(__VA_ARGS__)
#define PARAMS_GET_TO_49(_0, ...) _0, PARAMS_GET_TO_48(__VA_ARGS__)
#define PARAMS_GET_TO_50(_0, ...) _0, PARAMS_GET_TO_49(__VA_ARGS__)
#define PARAMS_GET_TO_51(_0, ...) _0, PARAMS_GET_TO_50(__VA_ARGS__)
#define PARAMS_GET_TO_52(_0, ...) _0, PARAMS_GET_TO_51(__VA_ARGS__)
#define PARAMS_GET_TO_53(_0, ...) _0, PARAMS_GET_TO_52(__VA_ARGS__)
#define PARAMS_GET_TO_54(_0, ...) _0, PARAMS_GET_TO_53(__VA_ARGS__)
#define PARAMS_GET_TO_55(_0, ...) _0, PARAMS_GET_TO_54(__VA_ARGS__)
#define PARAMS_GET_TO_56(_0, ...) _0, PARAMS_GET_TO_55(__VA_ARGS__)
#define PARAMS_GET_TO_57(_0, ...) _0, PARAMS_GET_TO_56(__VA_ARGS__)
#define PARAMS_GET_TO_58(_0, ...) _0, PARAMS_GET_TO_57(__VA_ARGS__)
#define PARAMS_GET_TO_59(_0, ...) _0, PARAMS_GET_TO_58(__VA_ARGS__)
#define PARAMS_GET_TO_60(_0, ...) _0, PARAMS_GET_TO_59(__VA_ARGS__)
#define PARAMS_GET_TO_61(_0, ...) _0, PARAMS_GET_TO_60(__VA_ARGS__)
#define PARAMS_GET_TO_62(_0, ...) _0, PARAMS_GET_TO_61(__VA_ARGS__)
#define PARAMS_GET_TO_63(_0, ...) _0, PARAMS_GET_TO_62(__VA_ARGS__)
#define PARAMS_GET_TO_64(_0, ...) _0, PARAMS_GET_TO_63(__VA_ARGS__)
#define PARAMS_GET_TO_65(_0, ...) _0, PARAMS_GET_TO_64(__VA_ARGS__)
#define PARAMS_GET_TO_66(_0, ...) _0, PARAMS_GET_TO_65(__VA_ARGS__)
#define PARAMS_GET_TO_67(_0, ...) _0, PARAMS_GET_TO_66(__VA_ARGS__)
#define PARAMS_GET_TO_68(_0, ...) _0, PARAMS_GET_TO_67(__VA_ARGS__)
#define PARAMS_GET_TO_69(_0, ...) _0, PARAMS_GET_TO_68(__VA_ARGS__)
#define PARAMS_GET_TO_70(_0, ...) _0, PARAMS_GET_TO_69(__VA_ARGS__)
#define PARAMS_GET_TO_71(_0, ...) _0, PARAMS_GET_TO_70(__VA_ARGS__)
#define PARAMS_GET_TO_72(_0, ...) _0, PARAMS_GET_TO_71(__VA_ARGS__)
#define PARAMS_GET_TO_73(_0, ...) _0, PARAMS_GET_TO_72(__VA_ARGS__)
#define PARAMS_GET_TO_74(_0, ...) _0, PARAMS_GET_TO_73(__VA_ARGS__)
#define PARAMS_GET_TO_75(_0, ...) _0, PARAMS_GET_TO_74(__VA_ARGS__)
#define PARAMS_GET_TO_76(_0, ...) _0, PARAMS_GET_TO_75(__VA_ARGS__)
#define PARAMS_GET_TO_77(_0, ...) _0, PARAMS_GET_TO_76(__VA_ARGS__)
#define PARAMS_GET_TO_78(_0, ...) _0, PARAMS_GET_TO_77(__VA_ARGS__)
#define PARAMS_GET_TO_79(_0, ...) _0, PARAMS_GET_TO_78(__VA_ARGS__)
#define PARAMS_GET_TO_80(_0, ...) _0, PARAMS_GET_TO_79(__VA_ARGS__)
#define PARAMS_GET_TO_81(_0, ...) _0, PARAMS_GET_TO_80(__VA_ARGS__)
#define PARAMS_GET_TO_82(_0, ...) _0, PARAMS_GET_TO_81(__VA_ARGS__)
#define PARAMS_GET_TO_83(_0, ...) _0, PARAMS_GET_TO_82(__VA_ARGS__)
#define PARAMS_GET_TO_84(_0, ...) _0, PARAMS_GET_TO_83(__VA_ARGS__)
#define PARAMS_GET_TO_85(_0, ...) _0, PARAMS_GET_TO_84(__VA_ARGS__)
#define PARAMS_GET_TO_86(_0, ...) _0, PARAMS_GET_TO_85(__VA_ARGS__)
#define PARAMS_GET_TO_87(_0, ...) _0, PARAMS_GET_TO_86(__VA_ARGS__)
#define PARAMS_GET_TO_88(_0, ...) _0, PARAMS_GET_TO_87(__VA_ARGS__)
#define PARAMS_GET_TO_89(_0, ...) _0, PARAMS_GET_TO_88(__VA_ARGS__)
#define PARAMS_GET_TO_90(_0, ...) _0, PARAMS_GET_TO_89(__VA_ARGS__)
#define PARAMS_GET_TO_91(_0, ...) _0, PARAMS_GET_TO_90(__VA_ARGS__)
#define PARAMS_GET_TO_92(_0, ...) _0, PARAMS_GET_TO_91(__VA_ARGS__)
#define PARAMS_GET_TO_93(_0, ...) _0, PARAMS_GET_TO_92(__VA_ARGS__)
#define PARAMS_GET_TO_94(_0, ...) _0, PARAMS_GET_TO_93(__VA_ARGS__)
#define PARAMS_GET_TO_95(_0, ...) _0, PARAMS_GET_TO_94(__VA_ARGS__)
#define PARAMS_GET_TO_96(_0, ...) _0, PARAMS_GET_TO_95(__VA_ARGS__)
#define PARAMS_GET_TO_97(_0, ...) _0, PARAMS_GET_TO_96(__VA_ARGS__)
#define PARAMS_GET_TO_98(_0, ...) _0, PARAMS_GET_TO_97(__VA_ARGS__)
#define PARAMS_GET_TO_99(_0, ...) _0, PARAMS_GET_TO_98(__VA_ARGS__)
#define PARAMS_GET_TO_100(_0, ...) _0, PARAMS_GET_TO_99(__VA_ARGS__)
#define PARAMS_GET_TO_101(_0, ...) _0, PARAMS_GET_TO_100(__VA_ARGS__)
#define PARAMS_GET_TO_102(_0, ...) _0, PARAMS_GET_TO_101(__VA_ARGS__)
#define PARAMS_GET_TO_103(_0, ...) _0, PARAMS_GET_TO_102(__VA_ARGS__)
#define PARAMS_GET_TO_104(_0, ...) _0, PARAMS_GET_TO_103(__VA_ARGS__)
#define PARAMS_GET_TO_105(_0, ...) _0, PARAMS_GET_TO_104(__VA_ARGS__)
#define PARAMS_GET_TO_106(_0, ...) _0, PARAMS_GET_TO_105(__VA_ARGS__)
#define PARAMS_GET_TO_107(_0, ...) _0, PARAMS_GET_TO_106(__VA_ARGS__)
#define PARAMS_GET_TO_108(_0, ...) _0, PARAMS_GET_TO_107(__VA_ARGS__)
#define PARAMS_GET_TO_109(_0, ...) _0, PARAMS_GET_TO_108(__VA_ARGS__)
#define PARAMS_GET_TO_110(_0, ...) _0, PARAMS_GET_TO_109(__VA_ARGS__)
#define PARAMS_GET_TO_111(_0, ...) _0, PARAMS_GET_TO_110(__VA_ARGS__)
#define PARAMS_GET_TO_112(_0, ...) _0, PARAMS_GET_TO_111(__VA_ARGS__)
#define PARAMS_GET_TO_113(_0, ...) _0, PARAMS_GET_TO_112(__VA_ARGS__)
#define PARAMS_GET_TO_114(_0, ...) _0, PARAMS_GET_TO_113(__VA_ARGS__)
#define PARAMS_GET_TO_115(_0, ...) _0, PARAMS_GET_TO_114(__VA_ARGS__)
#define PARAMS_GET_TO_116(_0, ...) _0, PARAMS_GET_TO_115(__VA_ARGS__)
#define PARAMS_GET_TO_117(_0, ...) _0, PARAMS_GET_TO_116(__VA_ARGS__)
#define PARAMS_GET_TO_118(_0, ...) _0, PARAMS_GET_TO_117(__VA_ARGS__)
#define PARAMS_GET_TO_119(_0, ...) _0, PARAMS_GET_TO_118(__VA_ARGS__)
#define PARAMS_GET_TO_120(_0, ...) _0, PARAMS_GET_TO_119(__VA_ARGS__)
#define PARAMS_GET_TO_121(_0, ...) _0, PARAMS_GET_TO_120(__VA_ARGS__)
#define PARAMS_GET_TO_122(_0, ...) _0, PARAMS_GET_TO_121(__VA_ARGS__)
#define PARAMS_GET_TO_123(_0, ...) _0, PARAMS_GET_TO_122(__VA_ARGS__)
#define PARAMS_GET_TO_124(_0, ...) _0, PARAMS_GET_TO_123(__VA_ARGS__)
#define PARAMS_GET_TO_125(_0, ...) _0, PARAMS_GET_TO_124(__VA_ARGS__)
#define PARAMS_GET_TO_126(_0, ...) _0, PARAMS_GET_TO_125(__VA_ARGS__)
#define PARAMS_GET_TO_127(_0, ...) _0, PARAMS_GET_TO_126(__VA_ARGS__)

#define PARAMS_GET_TO_MASK(to, ...) PARAMS_GET_TO_##to(__VA_ARGS__)
#define PARAMS_GET_TO(to, ...) PARAMS_GET_TO_MASK(to, __VA_ARGS__)
#define PARAMS_GET_TO_A1_MASK(to, _0, ...) _0, PARAMS_GET_TO_MASK(to, __VA_ARGS__)
#define PARAMS_GET_TO_A1(to, ...) PARAMS_GET_TO_A1_MASK(to, __VA_ARGS__)
/*
==========================================================================================================================================================
*/
#define REPLACE_COMMA_1(separator, _0) _0
#define REPLACE_COMMA_2(separator, _0, ...) _0 separator REPLACE_COMMA_1(separator, __VA_ARGS__)
#define REPLACE_COMMA_3(separator, _0, ...) _0 separator REPLACE_COMMA_2(separator, __VA_ARGS__)
#define REPLACE_COMMA_4(separator, _0, ...) _0 separator REPLACE_COMMA_3(separator, __VA_ARGS__)
#define REPLACE_COMMA_5(separator, _0, ...) _0 separator REPLACE_COMMA_4(separator, __VA_ARGS__)
#define REPLACE_COMMA_6(separator, _0, ...) _0 separator REPLACE_COMMA_5(separator, __VA_ARGS__)
#define REPLACE_COMMA_7(separator, _0, ...) _0 separator REPLACE_COMMA_6(separator, __VA_ARGS__)
#define REPLACE_COMMA_8(separator, _0, ...) _0 separator REPLACE_COMMA_7(separator, __VA_ARGS__)
#define REPLACE_COMMA_9(separator, _0, ...) _0 separator REPLACE_COMMA_8(separator, __VA_ARGS__)
#define REPLACE_COMMA_10(separator, _0, ...) _0 separator REPLACE_COMMA_9(separator, __VA_ARGS__)
#define REPLACE_COMMA_11(separator, _0, ...) _0 separator REPLACE_COMMA_10(separator, __VA_ARGS__)
#define REPLACE_COMMA_12(separator, _0, ...) _0 separator REPLACE_COMMA_11(separator, __VA_ARGS__)
#define REPLACE_COMMA_13(separator, _0, ...) _0 separator REPLACE_COMMA_12(separator, __VA_ARGS__)
#define REPLACE_COMMA_14(separator, _0, ...) _0 separator REPLACE_COMMA_13(separator, __VA_ARGS__)
#define REPLACE_COMMA_15(separator, _0, ...) _0 separator REPLACE_COMMA_14(separator, __VA_ARGS__)
#define REPLACE_COMMA_16(separator, _0, ...) _0 separator REPLACE_COMMA_15(separator, __VA_ARGS__)
#define REPLACE_COMMA_17(separator, _0, ...) _0 separator REPLACE_COMMA_16(separator, __VA_ARGS__)
#define REPLACE_COMMA_18(separator, _0, ...) _0 separator REPLACE_COMMA_17(separator, __VA_ARGS__)
#define REPLACE_COMMA_19(separator, _0, ...) _0 separator REPLACE_COMMA_18(separator, __VA_ARGS__)
#define REPLACE_COMMA_20(separator, _0, ...) _0 separator REPLACE_COMMA_19(separator, __VA_ARGS__)
#define REPLACE_COMMA_21(separator, _0, ...) _0 separator REPLACE_COMMA_20(separator, __VA_ARGS__)
#define REPLACE_COMMA_22(separator, _0, ...) _0 separator REPLACE_COMMA_21(separator, __VA_ARGS__)
#define REPLACE_COMMA_23(separator, _0, ...) _0 separator REPLACE_COMMA_22(separator, __VA_ARGS__)
#define REPLACE_COMMA_24(separator, _0, ...) _0 separator REPLACE_COMMA_23(separator, __VA_ARGS__)
#define REPLACE_COMMA_25(separator, _0, ...) _0 separator REPLACE_COMMA_24(separator, __VA_ARGS__)
#define REPLACE_COMMA_26(separator, _0, ...) _0 separator REPLACE_COMMA_25(separator, __VA_ARGS__)
#define REPLACE_COMMA_27(separator, _0, ...) _0 separator REPLACE_COMMA_26(separator, __VA_ARGS__)
#define REPLACE_COMMA_28(separator, _0, ...) _0 separator REPLACE_COMMA_27(separator, __VA_ARGS__)
#define REPLACE_COMMA_29(separator, _0, ...) _0 separator REPLACE_COMMA_28(separator, __VA_ARGS__)
#define REPLACE_COMMA_30(separator, _0, ...) _0 separator REPLACE_COMMA_29(separator, __VA_ARGS__)
#define REPLACE_COMMA_31(separator, _0, ...) _0 separator REPLACE_COMMA_30(separator, __VA_ARGS__)
#define REPLACE_COMMA_32(separator, _0, ...) _0 separator REPLACE_COMMA_31(separator, __VA_ARGS__)
#define REPLACE_COMMA_33(separator, _0, ...) _0 separator REPLACE_COMMA_32(separator, __VA_ARGS__)
#define REPLACE_COMMA_34(separator, _0, ...) _0 separator REPLACE_COMMA_33(separator, __VA_ARGS__)
#define REPLACE_COMMA_35(separator, _0, ...) _0 separator REPLACE_COMMA_34(separator, __VA_ARGS__)
#define REPLACE_COMMA_36(separator, _0, ...) _0 separator REPLACE_COMMA_35(separator, __VA_ARGS__)
#define REPLACE_COMMA_37(separator, _0, ...) _0 separator REPLACE_COMMA_36(separator, __VA_ARGS__)
#define REPLACE_COMMA_38(separator, _0, ...) _0 separator REPLACE_COMMA_37(separator, __VA_ARGS__)
#define REPLACE_COMMA_39(separator, _0, ...) _0 separator REPLACE_COMMA_38(separator, __VA_ARGS__)
#define REPLACE_COMMA_40(separator, _0, ...) _0 separator REPLACE_COMMA_39(separator, __VA_ARGS__)
#define REPLACE_COMMA_41(separator, _0, ...) _0 separator REPLACE_COMMA_40(separator, __VA_ARGS__)
#define REPLACE_COMMA_42(separator, _0, ...) _0 separator REPLACE_COMMA_41(separator, __VA_ARGS__)
#define REPLACE_COMMA_43(separator, _0, ...) _0 separator REPLACE_COMMA_42(separator, __VA_ARGS__)
#define REPLACE_COMMA_44(separator, _0, ...) _0 separator REPLACE_COMMA_43(separator, __VA_ARGS__)
#define REPLACE_COMMA_45(separator, _0, ...) _0 separator REPLACE_COMMA_44(separator, __VA_ARGS__)
#define REPLACE_COMMA_46(separator, _0, ...) _0 separator REPLACE_COMMA_45(separator, __VA_ARGS__)
#define REPLACE_COMMA_47(separator, _0, ...) _0 separator REPLACE_COMMA_46(separator, __VA_ARGS__)
#define REPLACE_COMMA_48(separator, _0, ...) _0 separator REPLACE_COMMA_47(separator, __VA_ARGS__)
#define REPLACE_COMMA_49(separator, _0, ...) _0 separator REPLACE_COMMA_48(separator, __VA_ARGS__)
#define REPLACE_COMMA_50(separator, _0, ...) _0 separator REPLACE_COMMA_49(separator, __VA_ARGS__)
#define REPLACE_COMMA_51(separator, _0, ...) _0 separator REPLACE_COMMA_50(separator, __VA_ARGS__)
#define REPLACE_COMMA_52(separator, _0, ...) _0 separator REPLACE_COMMA_51(separator, __VA_ARGS__)
#define REPLACE_COMMA_53(separator, _0, ...) _0 separator REPLACE_COMMA_52(separator, __VA_ARGS__)
#define REPLACE_COMMA_54(separator, _0, ...) _0 separator REPLACE_COMMA_53(separator, __VA_ARGS__)
#define REPLACE_COMMA_55(separator, _0, ...) _0 separator REPLACE_COMMA_54(separator, __VA_ARGS__)
#define REPLACE_COMMA_56(separator, _0, ...) _0 separator REPLACE_COMMA_55(separator, __VA_ARGS__)
#define REPLACE_COMMA_57(separator, _0, ...) _0 separator REPLACE_COMMA_56(separator, __VA_ARGS__)
#define REPLACE_COMMA_58(separator, _0, ...) _0 separator REPLACE_COMMA_57(separator, __VA_ARGS__)
#define REPLACE_COMMA_59(separator, _0, ...) _0 separator REPLACE_COMMA_58(separator, __VA_ARGS__)
#define REPLACE_COMMA_60(separator, _0, ...) _0 separator REPLACE_COMMA_59(separator, __VA_ARGS__)
#define REPLACE_COMMA_61(separator, _0, ...) _0 separator REPLACE_COMMA_60(separator, __VA_ARGS__)
#define REPLACE_COMMA_62(separator, _0, ...) _0 separator REPLACE_COMMA_61(separator, __VA_ARGS__)
#define REPLACE_COMMA_63(separator, _0, ...) _0 separator REPLACE_COMMA_62(separator, __VA_ARGS__)
#define REPLACE_COMMA_64(separator, _0, ...) _0 separator REPLACE_COMMA_63(separator, __VA_ARGS__)
#define REPLACE_COMMA_65(separator, _0, ...) _0 separator REPLACE_COMMA_64(separator, __VA_ARGS__)
#define REPLACE_COMMA_66(separator, _0, ...) _0 separator REPLACE_COMMA_65(separator, __VA_ARGS__)
#define REPLACE_COMMA_67(separator, _0, ...) _0 separator REPLACE_COMMA_66(separator, __VA_ARGS__)
#define REPLACE_COMMA_68(separator, _0, ...) _0 separator REPLACE_COMMA_67(separator, __VA_ARGS__)
#define REPLACE_COMMA_69(separator, _0, ...) _0 separator REPLACE_COMMA_68(separator, __VA_ARGS__)
#define REPLACE_COMMA_70(separator, _0, ...) _0 separator REPLACE_COMMA_69(separator, __VA_ARGS__)
#define REPLACE_COMMA_71(separator, _0, ...) _0 separator REPLACE_COMMA_70(separator, __VA_ARGS__)
#define REPLACE_COMMA_72(separator, _0, ...) _0 separator REPLACE_COMMA_71(separator, __VA_ARGS__)
#define REPLACE_COMMA_73(separator, _0, ...) _0 separator REPLACE_COMMA_72(separator, __VA_ARGS__)
#define REPLACE_COMMA_74(separator, _0, ...) _0 separator REPLACE_COMMA_73(separator, __VA_ARGS__)
#define REPLACE_COMMA_75(separator, _0, ...) _0 separator REPLACE_COMMA_74(separator, __VA_ARGS__)
#define REPLACE_COMMA_76(separator, _0, ...) _0 separator REPLACE_COMMA_75(separator, __VA_ARGS__)
#define REPLACE_COMMA_77(separator, _0, ...) _0 separator REPLACE_COMMA_76(separator, __VA_ARGS__)
#define REPLACE_COMMA_78(separator, _0, ...) _0 separator REPLACE_COMMA_77(separator, __VA_ARGS__)
#define REPLACE_COMMA_79(separator, _0, ...) _0 separator REPLACE_COMMA_78(separator, __VA_ARGS__)
#define REPLACE_COMMA_80(separator, _0, ...) _0 separator REPLACE_COMMA_79(separator, __VA_ARGS__)
#define REPLACE_COMMA_81(separator, _0, ...) _0 separator REPLACE_COMMA_80(separator, __VA_ARGS__)
#define REPLACE_COMMA_82(separator, _0, ...) _0 separator REPLACE_COMMA_81(separator, __VA_ARGS__)
#define REPLACE_COMMA_83(separator, _0, ...) _0 separator REPLACE_COMMA_82(separator, __VA_ARGS__)
#define REPLACE_COMMA_84(separator, _0, ...) _0 separator REPLACE_COMMA_83(separator, __VA_ARGS__)
#define REPLACE_COMMA_85(separator, _0, ...) _0 separator REPLACE_COMMA_84(separator, __VA_ARGS__)
#define REPLACE_COMMA_86(separator, _0, ...) _0 separator REPLACE_COMMA_85(separator, __VA_ARGS__)
#define REPLACE_COMMA_87(separator, _0, ...) _0 separator REPLACE_COMMA_86(separator, __VA_ARGS__)
#define REPLACE_COMMA_88(separator, _0, ...) _0 separator REPLACE_COMMA_87(separator, __VA_ARGS__)
#define REPLACE_COMMA_89(separator, _0, ...) _0 separator REPLACE_COMMA_88(separator, __VA_ARGS__)
#define REPLACE_COMMA_90(separator, _0, ...) _0 separator REPLACE_COMMA_89(separator, __VA_ARGS__)
#define REPLACE_COMMA_91(separator, _0, ...) _0 separator REPLACE_COMMA_90(separator, __VA_ARGS__)
#define REPLACE_COMMA_92(separator, _0, ...) _0 separator REPLACE_COMMA_91(separator, __VA_ARGS__)
#define REPLACE_COMMA_93(separator, _0, ...) _0 separator REPLACE_COMMA_92(separator, __VA_ARGS__)
#define REPLACE_COMMA_94(separator, _0, ...) _0 separator REPLACE_COMMA_93(separator, __VA_ARGS__)
#define REPLACE_COMMA_95(separator, _0, ...) _0 separator REPLACE_COMMA_94(separator, __VA_ARGS__)
#define REPLACE_COMMA_96(separator, _0, ...) _0 separator REPLACE_COMMA_95(separator, __VA_ARGS__)
#define REPLACE_COMMA_97(separator, _0, ...) _0 separator REPLACE_COMMA_96(separator, __VA_ARGS__)
#define REPLACE_COMMA_98(separator, _0, ...) _0 separator REPLACE_COMMA_97(separator, __VA_ARGS__)
#define REPLACE_COMMA_99(separator, _0, ...) _0 separator REPLACE_COMMA_98(separator, __VA_ARGS__)
#define REPLACE_COMMA_100(separator, _0, ...) _0 separator REPLACE_COMMA_99(separator, __VA_ARGS__)
#define REPLACE_COMMA_101(separator, _0, ...) _0 separator REPLACE_COMMA_100(separator, __VA_ARGS__)
#define REPLACE_COMMA_102(separator, _0, ...) _0 separator REPLACE_COMMA_101(separator, __VA_ARGS__)
#define REPLACE_COMMA_103(separator, _0, ...) _0 separator REPLACE_COMMA_102(separator, __VA_ARGS__)
#define REPLACE_COMMA_104(separator, _0, ...) _0 separator REPLACE_COMMA_103(separator, __VA_ARGS__)
#define REPLACE_COMMA_105(separator, _0, ...) _0 separator REPLACE_COMMA_104(separator, __VA_ARGS__)
#define REPLACE_COMMA_106(separator, _0, ...) _0 separator REPLACE_COMMA_105(separator, __VA_ARGS__)
#define REPLACE_COMMA_107(separator, _0, ...) _0 separator REPLACE_COMMA_106(separator, __VA_ARGS__)
#define REPLACE_COMMA_108(separator, _0, ...) _0 separator REPLACE_COMMA_107(separator, __VA_ARGS__)
#define REPLACE_COMMA_109(separator, _0, ...) _0 separator REPLACE_COMMA_108(separator, __VA_ARGS__)
#define REPLACE_COMMA_110(separator, _0, ...) _0 separator REPLACE_COMMA_109(separator, __VA_ARGS__)
#define REPLACE_COMMA_111(separator, _0, ...) _0 separator REPLACE_COMMA_110(separator, __VA_ARGS__)
#define REPLACE_COMMA_112(separator, _0, ...) _0 separator REPLACE_COMMA_111(separator, __VA_ARGS__)
#define REPLACE_COMMA_113(separator, _0, ...) _0 separator REPLACE_COMMA_112(separator, __VA_ARGS__)
#define REPLACE_COMMA_114(separator, _0, ...) _0 separator REPLACE_COMMA_113(separator, __VA_ARGS__)
#define REPLACE_COMMA_115(separator, _0, ...) _0 separator REPLACE_COMMA_114(separator, __VA_ARGS__)
#define REPLACE_COMMA_116(separator, _0, ...) _0 separator REPLACE_COMMA_115(separator, __VA_ARGS__)
#define REPLACE_COMMA_117(separator, _0, ...) _0 separator REPLACE_COMMA_116(separator, __VA_ARGS__)
#define REPLACE_COMMA_118(separator, _0, ...) _0 separator REPLACE_COMMA_117(separator, __VA_ARGS__)
#define REPLACE_COMMA_119(separator, _0, ...) _0 separator REPLACE_COMMA_118(separator, __VA_ARGS__)
#define REPLACE_COMMA_120(separator, _0, ...) _0 separator REPLACE_COMMA_119(separator, __VA_ARGS__)
#define REPLACE_COMMA_121(separator, _0, ...) _0 separator REPLACE_COMMA_120(separator, __VA_ARGS__)
#define REPLACE_COMMA_122(separator, _0, ...) _0 separator REPLACE_COMMA_121(separator, __VA_ARGS__)
#define REPLACE_COMMA_123(separator, _0, ...) _0 separator REPLACE_COMMA_122(separator, __VA_ARGS__)
#define REPLACE_COMMA_124(separator, _0, ...) _0 separator REPLACE_COMMA_123(separator, __VA_ARGS__)
#define REPLACE_COMMA_125(separator, _0, ...) _0 separator REPLACE_COMMA_124(separator, __VA_ARGS__)
#define REPLACE_COMMA_126(separator, _0, ...) _0 separator REPLACE_COMMA_125(separator, __VA_ARGS__)
#define REPLACE_COMMA_127(separator, _0, ...) _0 separator REPLACE_COMMA_126(separator, __VA_ARGS__)

#define REPLACE_COMMA_MASK(number_of_params, separator, ...) REPLACE_COMMA_##number_of_params(separator, __VA_ARGS__)
#define REPLACE_COMMA(number_of_params, separator, ...) REPLACE_COMMA_MASK(number_of_params, separator, __VA_ARGS__)
/*
==========================================================================================================================================================
*/
#define NUMBER_MULTI_2_0 0
#define NUMBER_MULTI_2_1 2
#define NUMBER_MULTI_2_2 4
#define NUMBER_MULTI_2_3 6
#define NUMBER_MULTI_2_4 8
#define NUMBER_MULTI_2_5 10
#define NUMBER_MULTI_2_6 12
#define NUMBER_MULTI_2_7 14
#define NUMBER_MULTI_2_8 16
#define NUMBER_MULTI_2_9 18
#define NUMBER_MULTI_2_10 20
#define NUMBER_MULTI_2_11 22
#define NUMBER_MULTI_2_12 24
#define NUMBER_MULTI_2_13 26
#define NUMBER_MULTI_2_14 28
#define NUMBER_MULTI_2_15 30
#define NUMBER_MULTI_2_16 32
#define NUMBER_MULTI_2_17 34
#define NUMBER_MULTI_2_18 36
#define NUMBER_MULTI_2_19 38
#define NUMBER_MULTI_2_20 40
#define NUMBER_MULTI_2_21 42
#define NUMBER_MULTI_2_22 44
#define NUMBER_MULTI_2_23 46
#define NUMBER_MULTI_2_24 48
#define NUMBER_MULTI_2_25 50
#define NUMBER_MULTI_2_26 52
#define NUMBER_MULTI_2_27 54
#define NUMBER_MULTI_2_28 56
#define NUMBER_MULTI_2_29 58
#define NUMBER_MULTI_2_30 60
#define NUMBER_MULTI_2_31 62
#define NUMBER_MULTI_2_32 64
#define NUMBER_MULTI_2_33 66
#define NUMBER_MULTI_2_34 68
#define NUMBER_MULTI_2_35 70
#define NUMBER_MULTI_2_36 72
#define NUMBER_MULTI_2_37 74
#define NUMBER_MULTI_2_38 76
#define NUMBER_MULTI_2_39 78
#define NUMBER_MULTI_2_40 80
#define NUMBER_MULTI_2_41 82
#define NUMBER_MULTI_2_42 84
#define NUMBER_MULTI_2_43 86
#define NUMBER_MULTI_2_44 88
#define NUMBER_MULTI_2_45 90
#define NUMBER_MULTI_2_46 92
#define NUMBER_MULTI_2_47 94
#define NUMBER_MULTI_2_48 96
#define NUMBER_MULTI_2_49 98
#define NUMBER_MULTI_2_50 100
#define NUMBER_MULTI_2_51 102
#define NUMBER_MULTI_2_52 104
#define NUMBER_MULTI_2_53 106
#define NUMBER_MULTI_2_54 108
#define NUMBER_MULTI_2_55 110
#define NUMBER_MULTI_2_56 112
#define NUMBER_MULTI_2_57 114
#define NUMBER_MULTI_2_58 116
#define NUMBER_MULTI_2_59 118
#define NUMBER_MULTI_2_60 120
#define NUMBER_MULTI_2_61 122
#define NUMBER_MULTI_2_62 124
#define NUMBER_MULTI_2_63 126
#define NUMBER_MULTI_2_64 128

#define NUMBER_MULTI_2(number) NUMBER_MULTI_2_##number

/*
==========================================================================================================================================================
*/
#define NUMBER_SUB_1_2 1
#define NUMBER_SUB_1_3 2
#define NUMBER_SUB_1_4 3
#define NUMBER_SUB_1_5 4
#define NUMBER_SUB_1_6 5
#define NUMBER_SUB_1_7 6
#define NUMBER_SUB_1_8 7
#define NUMBER_SUB_1_9 8
#define NUMBER_SUB_1_10 9
#define NUMBER_SUB_1_11 10
#define NUMBER_SUB_1_12 11
#define NUMBER_SUB_1_13 12
#define NUMBER_SUB_1_14 13
#define NUMBER_SUB_1_15 14
#define NUMBER_SUB_1_16 15
#define NUMBER_SUB_1_17 16
#define NUMBER_SUB_1_18 17
#define NUMBER_SUB_1_19 18
#define NUMBER_SUB_1_20 19
#define NUMBER_SUB_1_21 20
#define NUMBER_SUB_1_22 21
#define NUMBER_SUB_1_23 22
#define NUMBER_SUB_1_24 23
#define NUMBER_SUB_1_25 24
#define NUMBER_SUB_1_26 25
#define NUMBER_SUB_1_27 26
#define NUMBER_SUB_1_28 27
#define NUMBER_SUB_1_29 28
#define NUMBER_SUB_1_30 29
#define NUMBER_SUB_1_31 30
#define NUMBER_SUB_1_32 31
#define NUMBER_SUB_1_33 32
#define NUMBER_SUB_1_34 33
#define NUMBER_SUB_1_35 34
#define NUMBER_SUB_1_36 35
#define NUMBER_SUB_1_37 36
#define NUMBER_SUB_1_38 37
#define NUMBER_SUB_1_39 38
#define NUMBER_SUB_1_40 39
#define NUMBER_SUB_1_41 40
#define NUMBER_SUB_1_42 41
#define NUMBER_SUB_1_43 42
#define NUMBER_SUB_1_44 43
#define NUMBER_SUB_1_45 44
#define NUMBER_SUB_1_46 45
#define NUMBER_SUB_1_47 46
#define NUMBER_SUB_1_48 47
#define NUMBER_SUB_1_49 48
#define NUMBER_SUB_1_50 49
#define NUMBER_SUB_1_51 50
#define NUMBER_SUB_1_52 51
#define NUMBER_SUB_1_53 52
#define NUMBER_SUB_1_54 53
#define NUMBER_SUB_1_55 54
#define NUMBER_SUB_1_56 55
#define NUMBER_SUB_1_57 56
#define NUMBER_SUB_1_58 57
#define NUMBER_SUB_1_59 58
#define NUMBER_SUB_1_60 59
#define NUMBER_SUB_1_61 60
#define NUMBER_SUB_1_62 61
#define NUMBER_SUB_1_63 62
#define NUMBER_SUB_1_64 63

#define NUMBER_SUB_1(number) NUMBER_SUB_1_##number
/*
==========================================================================================================================================================
*/
#define DECLARE_BIT_2(size, name, size_bit) size name : size_bit
#define DECLARE_BIT_4(size, name, size_bit, ...) \
    size name : size_bit;                        \
    DECLARE_BIT_2(size, __VA_ARGS__)
#define DECLARE_BIT_6(size, name, size_bit, ...) \
    size name : size_bit;                        \
    DECLARE_BIT_4(size, __VA_ARGS__)
#define DECLARE_BIT_8(size, name, size_bit, ...) \
    size name : size_bit;                        \
    DECLARE_BIT_6(size, __VA_ARGS__)
#define DECLARE_BIT_10(size, name, size_bit, ...) \
    size name : size_bit;                         \
    DECLARE_BIT_8(size, __VA_ARGS__)
#define DECLARE_BIT_12(size, name, size_bit, ...) \
    size name : size_bit;                         \
    DECLARE_BIT_10(size, __VA_ARGS__)
#define DECLARE_BIT_14(size, name, size_bit, ...) \
    size name : size_bit;                         \
    DECLARE_BIT_12(size, __VA_ARGS__)
#define DECLARE_BIT_16(size, name, size_bit, ...) \
    size name : size_bit;                         \
    DECLARE_BIT_14(size, __VA_ARGS__)
#define DECLARE_BIT_18(size, name, size_bit, ...) \
    size name : size_bit;                         \
    DECLARE_BIT_16(size, __VA_ARGS__)
#define DECLARE_BIT_20(size, name, size_bit, ...) \
    size name : size_bit;                         \
    DECLARE_BIT_18(size, __VA_ARGS__)
#define DECLARE_BIT_22(size, name, size_bit, ...) \
    size name : size_bit;                         \
    DECLARE_BIT_20(size, __VA_ARGS__)
#define DECLARE_BIT_24(size, name, size_bit, ...) \
    size name : size_bit;                         \
    DECLARE_BIT_22(size, __VA_ARGS__)
#define DECLARE_BIT_26(size, name, size_bit, ...) \
    size name : size_bit;                         \
    DECLARE_BIT_24(size, __VA_ARGS__)
#define DECLARE_BIT_28(size, name, size_bit, ...) \
    size name : size_bit;                         \
    DECLARE_BIT_26(size, __VA_ARGS__)
#define DECLARE_BIT_30(size, name, size_bit, ...) \
    size name : size_bit;                         \
    DECLARE_BIT_28(size, __VA_ARGS__)
#define DECLARE_BIT_32(size, name, size_bit, ...) \
    size name : size_bit;                         \
    DECLARE_BIT_30(size, __VA_ARGS__)
#define DECLARE_BIT_34(size, name, size_bit, ...) \
    size name : size_bit;                         \
    DECLARE_BIT_32(size, __VA_ARGS__)
#define DECLARE_BIT_36(size, name, size_bit, ...) \
    size name : size_bit;                         \
    DECLARE_BIT_34(size, __VA_ARGS__)
#define DECLARE_BIT_38(size, name, size_bit, ...) \
    size name : size_bit;                         \
    DECLARE_BIT_36(size, __VA_ARGS__)
#define DECLARE_BIT_40(size, name, size_bit, ...) \
    size name : size_bit;                         \
    DECLARE_BIT_38(size, __VA_ARGS__)
#define DECLARE_BIT_42(size, name, size_bit, ...) \
    size name : size_bit;                         \
    DECLARE_BIT_40(size, __VA_ARGS__)
#define DECLARE_BIT_44(size, name, size_bit, ...) \
    size name : size_bit;                         \
    DECLARE_BIT_42(size, __VA_ARGS__)
#define DECLARE_BIT_46(size, name, size_bit, ...) \
    size name : size_bit;                         \
    DECLARE_BIT_44(size, __VA_ARGS__)
#define DECLARE_BIT_48(size, name, size_bit, ...) \
    size name : size_bit;                         \
    DECLARE_BIT_46(size, __VA_ARGS__)
#define DECLARE_BIT_50(size, name, size_bit, ...) \
    size name : size_bit;                         \
    DECLARE_BIT_48(size, __VA_ARGS__)
#define DECLARE_BIT_52(size, name, size_bit, ...) \
    size name : size_bit;                         \
    DECLARE_BIT_50(size, __VA_ARGS__)
#define DECLARE_BIT_54(size, name, size_bit, ...) \
    size name : size_bit;                         \
    DECLARE_BIT_52(size, __VA_ARGS__)
#define DECLARE_BIT_56(size, name, size_bit, ...) \
    size name : size_bit;                         \
    DECLARE_BIT_54(size, __VA_ARGS__)
#define DECLARE_BIT_58(size, name, size_bit, ...) \
    size name : size_bit;                         \
    DECLARE_BIT_56(size, __VA_ARGS__)
#define DECLARE_BIT_60(size, name, size_bit, ...) \
    size name : size_bit;                         \
    DECLARE_BIT_58(size, __VA_ARGS__)
#define DECLARE_BIT_62(size, name, size_bit, ...) \
    size name : size_bit;                         \
    DECLARE_BIT_60(size, __VA_ARGS__)
#define DECLARE_BIT_64(size, name, size_bit, ...) \
    size name : size_bit;                         \
    DECLARE_BIT_62(size, __VA_ARGS__)
#define DECLARE_BIT_66(size, name, size_bit, ...) \
    size name : size_bit;                         \
    DECLARE_BIT_64(size, __VA_ARGS__)
#define DECLARE_BIT_68(size, name, size_bit, ...) \
    size name : size_bit;                         \
    DECLARE_BIT_66(size, __VA_ARGS__)
#define DECLARE_BIT_70(size, name, size_bit, ...) \
    size name : size_bit;                         \
    DECLARE_BIT_68(size, __VA_ARGS__)
#define DECLARE_BIT_72(size, name, size_bit, ...) \
    size name : size_bit;                         \
    DECLARE_BIT_70(size, __VA_ARGS__)
#define DECLARE_BIT_74(size, name, size_bit, ...) \
    size name : size_bit;                         \
    DECLARE_BIT_72(size, __VA_ARGS__)
#define DECLARE_BIT_76(size, name, size_bit, ...) \
    size name : size_bit;                         \
    DECLARE_BIT_74(size, __VA_ARGS__)
#define DECLARE_BIT_78(size, name, size_bit, ...) \
    size name : size_bit;                         \
    DECLARE_BIT_76(size, __VA_ARGS__)
#define DECLARE_BIT_80(size, name, size_bit, ...) \
    size name : size_bit;                         \
    DECLARE_BIT_78(size, __VA_ARGS__)
#define DECLARE_BIT_82(size, name, size_bit, ...) \
    size name : size_bit;                         \
    DECLARE_BIT_80(size, __VA_ARGS__)
#define DECLARE_BIT_84(size, name, size_bit, ...) \
    size name : size_bit;                         \
    DECLARE_BIT_82(size, __VA_ARGS__)
#define DECLARE_BIT_86(size, name, size_bit, ...) \
    size name : size_bit;                         \
    DECLARE_BIT_84(size, __VA_ARGS__)
#define DECLARE_BIT_88(size, name, size_bit, ...) \
    size name : size_bit;                         \
    DECLARE_BIT_86(size, __VA_ARGS__)
#define DECLARE_BIT_90(size, name, size_bit, ...) \
    size name : size_bit;                         \
    DECLARE_BIT_88(size, __VA_ARGS__)
#define DECLARE_BIT_92(size, name, size_bit, ...) \
    size name : size_bit;                         \
    DECLARE_BIT_90(size, __VA_ARGS__)
#define DECLARE_BIT_94(size, name, size_bit, ...) \
    size name : size_bit;                         \
    DECLARE_BIT_92(size, __VA_ARGS__)
#define DECLARE_BIT_96(size, name, size_bit, ...) \
    size name : size_bit;                         \
    DECLARE_BIT_94(size, __VA_ARGS__)
#define DECLARE_BIT_98(size, name, size_bit, ...) \
    size name : size_bit;                         \
    DECLARE_BIT_96(size, __VA_ARGS__)
#define DECLARE_BIT_100(size, name, size_bit, ...) \
    size name : size_bit;                          \
    DECLARE_BIT_98(size, __VA_ARGS__)
#define DECLARE_BIT_102(size, name, size_bit, ...) \
    size name : size_bit;                          \
    DECLARE_BIT_100(size, __VA_ARGS__)
#define DECLARE_BIT_104(size, name, size_bit, ...) \
    size name : size_bit;                          \
    DECLARE_BIT_102(size, __VA_ARGS__)
#define DECLARE_BIT_106(size, name, size_bit, ...) \
    size name : size_bit;                          \
    DECLARE_BIT_104(size, __VA_ARGS__)
#define DECLARE_BIT_108(size, name, size_bit, ...) \
    size name : size_bit;                          \
    DECLARE_BIT_106(size, __VA_ARGS__)
#define DECLARE_BIT_110(size, name, size_bit, ...) \
    size name : size_bit;                          \
    DECLARE_BIT_108(size, __VA_ARGS__)
#define DECLARE_BIT_112(size, name, size_bit, ...) \
    size name : size_bit;                          \
    DECLARE_BIT_110(size, __VA_ARGS__)
#define DECLARE_BIT_114(size, name, size_bit, ...) \
    size name : size_bit;                          \
    DECLARE_BIT_112(size, __VA_ARGS__)
#define DECLARE_BIT_116(size, name, size_bit, ...) \
    size name : size_bit;                          \
    DECLARE_BIT_114(size, __VA_ARGS__)
#define DECLARE_BIT_118(size, name, size_bit, ...) \
    size name : size_bit;                          \
    DECLARE_BIT_116(size, __VA_ARGS__)
#define DECLARE_BIT_120(size, name, size_bit, ...) \
    size name : size_bit;                          \
    DECLARE_BIT_118(size, __VA_ARGS__)
#define DECLARE_BIT_122(size, name, size_bit, ...) \
    size name : size_bit;                          \
    DECLARE_BIT_120(size, __VA_ARGS__)
#define DECLARE_BIT_124(size, name, size_bit, ...) \
    size name : size_bit;                          \
    DECLARE_BIT_122(size, __VA_ARGS__)
#define DECLARE_BIT_126(size, name, size_bit, ...) \
    size name : size_bit;                          \
    DECLARE_BIT_124(size, __VA_ARGS__)
#define DECLARE_BIT_128(size, name, size_bit, ...) \
    size name : size_bit;                          \
    DECLARE_BIT_126(size, __VA_ARGS__)

#define DECLARE_BITS(number_of_params, size, ...) DECLARE_BIT_##number_of_params(size, __VA_ARGS__)
#define BITS_MASK(number_of_params, size, ...) DECLARE_BITS(number_of_params, size, __VA_ARGS__)

/*
==========================================================================================================================================================
*/
#define STRUCT(name, ...) \
    struct                \
    {                     \
        __VA_ARGS__       \
    } name

#define UNION(name, ...) \
    union                \
    {                    \
        __VA_ARGS__      \
    } name

/*

BITS_MASK (number_of_params, size, ...) => DECLRABIT__number_of_params(size, __VA_ARGS__)
Example BITS(unsigned char, bit0, 1, const bit1, 2 );
=> unsigned char bit0 : 1,
unsigned char const bit1: 2
*/
#define BITS(size, ...) BITS_MASK(PARAMS_COUNT(__VA_ARGS__), size, __VA_ARGS__)

#define BSTRUCT(name, size, ...) \
    struct                       \
    {                            \
        BITS(size, __VA_ARGS__); \
    } name

#define BUNION(name, size, ...)           \
    union                                 \
    {                                     \
        size REG;                         \
        BSTRUCT(BITS, size, __VA_ARGS__); \
    } name

#endif