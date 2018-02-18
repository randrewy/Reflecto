template<bool Const, typename T>
constexpr auto as_tuple(T& t, std::integral_constant<size_t, 0>) {
    return Nill{};
}

template<bool Const, typename T>
constexpr auto as_tuple(T& t, std::integral_constant<size_t, 1>) {
    CONSTEXPR_STRUCTURED auto& [a1] = t;
    return std::make_tuple(functional::ref<Const>(a1));
}


template<bool Const, typename T>
constexpr auto as_tuple(T& t, std::integral_constant<size_t, 2>) {
    CONSTEXPR_STRUCTURED auto& [a1, a2] = t;
    return std::make_tuple(functional::ref<Const>(a1), functional::ref<Const>(a2));
}


template<bool Const, typename T>
constexpr auto as_tuple(T& t, std::integral_constant<size_t, 3>) {
    CONSTEXPR_STRUCTURED auto& [a1, a2, a3] = t;
    return std::make_tuple(functional::ref<Const>(a1), functional::ref<Const>(a2),
                           functional::ref<Const>(a3));
}


template<bool Const, typename T>
constexpr auto as_tuple(T& t, std::integral_constant<size_t, 4>) {
    CONSTEXPR_STRUCTURED auto& [a1, a2, a3, a4] = t;
    return std::make_tuple(functional::ref<Const>(a1), functional::ref<Const>(a2),
                           functional::ref<Const>(a3), functional::ref<Const>(a4));
}


template<bool Const, typename T>
constexpr auto as_tuple(T& t, std::integral_constant<size_t, 5>) {
    CONSTEXPR_STRUCTURED auto& [a1, a2, a3, a4, a5] = t;
    return std::make_tuple(functional::ref<Const>(a1), functional::ref<Const>(a2),
                           functional::ref<Const>(a3), functional::ref<Const>(a4), functional::ref<Const>(a5));
}


template<bool Const, typename T>
constexpr auto as_tuple(T& t, std::integral_constant<size_t, 6>) {
    CONSTEXPR_STRUCTURED auto& [a1, a2, a3, a4, a5, a6] = t;
    return std::make_tuple(functional::ref<Const>(a1), functional::ref<Const>(a2),
                           functional::ref<Const>(a3), functional::ref<Const>(a4), functional::ref<Const>(a5),
                           functional::ref<Const>(a6));
}


template<bool Const, typename T>
constexpr auto as_tuple(T& t, std::integral_constant<size_t, 7>) {
    CONSTEXPR_STRUCTURED auto& [a1, a2, a3, a4, a5, a6, a7] = t;
    return std::make_tuple(functional::ref<Const>(a1), functional::ref<Const>(a2),
                           functional::ref<Const>(a3), functional::ref<Const>(a4), functional::ref<Const>(a5),
                           functional::ref<Const>(a6), functional::ref<Const>(a7));
}


template<bool Const, typename T>
constexpr auto as_tuple(T& t, std::integral_constant<size_t, 8>) {
    CONSTEXPR_STRUCTURED auto& [a1, a2, a3, a4, a5, a6, a7, a8] = t;
    return std::make_tuple(functional::ref<Const>(a1), functional::ref<Const>(a2),
                           functional::ref<Const>(a3), functional::ref<Const>(a4), functional::ref<Const>(a5),
                           functional::ref<Const>(a6), functional::ref<Const>(a7), functional::ref<Const>(a8));
}


template<bool Const, typename T>
constexpr auto as_tuple(T& t, std::integral_constant<size_t, 9>) {
    CONSTEXPR_STRUCTURED auto& [a1, a2, a3, a4, a5, a6, a7, a8, a9] = t;
    return std::make_tuple(functional::ref<Const>(a1), functional::ref<Const>(a2),
                           functional::ref<Const>(a3), functional::ref<Const>(a4), functional::ref<Const>(a5),
                           functional::ref<Const>(a6), functional::ref<Const>(a7), functional::ref<Const>(a8),
                           functional::ref<Const>(a9));
}


template<bool Const, typename T>
constexpr auto as_tuple(T& t, std::integral_constant<size_t, 10>) {
    CONSTEXPR_STRUCTURED auto& [a1, a2, a3, a4, a5, a6, a7, a8, a9,
                                a10] = t;
    return std::make_tuple(functional::ref<Const>(a1), functional::ref<Const>(a2),
                           functional::ref<Const>(a3), functional::ref<Const>(a4), functional::ref<Const>(a5),
                           functional::ref<Const>(a6), functional::ref<Const>(a7), functional::ref<Const>(a8),
                           functional::ref<Const>(a9), functional::ref<Const>(a10));
}


template<bool Const, typename T>
constexpr auto as_tuple(T& t, std::integral_constant<size_t, 11>) {
    CONSTEXPR_STRUCTURED auto& [a1, a2, a3, a4, a5, a6, a7, a8, a9,
                                a10, a11] = t;
    return std::make_tuple(functional::ref<Const>(a1), functional::ref<Const>(a2),
                           functional::ref<Const>(a3), functional::ref<Const>(a4), functional::ref<Const>(a5),
                           functional::ref<Const>(a6), functional::ref<Const>(a7), functional::ref<Const>(a8),
                           functional::ref<Const>(a9), functional::ref<Const>(a10), functional::ref<Const>(a11));
}


template<bool Const, typename T>
constexpr auto as_tuple(T& t, std::integral_constant<size_t, 12>) {
    CONSTEXPR_STRUCTURED auto& [a1, a2, a3, a4, a5, a6, a7, a8, a9,
                                a10, a11, a12] = t;
    return std::make_tuple(functional::ref<Const>(a1), functional::ref<Const>(a2),
                           functional::ref<Const>(a3), functional::ref<Const>(a4), functional::ref<Const>(a5),
                           functional::ref<Const>(a6), functional::ref<Const>(a7), functional::ref<Const>(a8),
                           functional::ref<Const>(a9), functional::ref<Const>(a10), functional::ref<Const>(a11),
                           functional::ref<Const>(a12));
}


template<bool Const, typename T>
constexpr auto as_tuple(T& t, std::integral_constant<size_t, 13>) {
    CONSTEXPR_STRUCTURED auto& [a1, a2, a3, a4, a5, a6, a7, a8, a9,
                                a10, a11, a12, a13] = t;
    return std::make_tuple(functional::ref<Const>(a1), functional::ref<Const>(a2),
                           functional::ref<Const>(a3), functional::ref<Const>(a4), functional::ref<Const>(a5),
                           functional::ref<Const>(a6), functional::ref<Const>(a7), functional::ref<Const>(a8),
                           functional::ref<Const>(a9), functional::ref<Const>(a10), functional::ref<Const>(a11),
                           functional::ref<Const>(a12), functional::ref<Const>(a13));
}


template<bool Const, typename T>
constexpr auto as_tuple(T& t, std::integral_constant<size_t, 14>) {
    CONSTEXPR_STRUCTURED auto& [a1, a2, a3, a4, a5, a6, a7, a8, a9,
                                a10, a11, a12, a13, a14] = t;
    return std::make_tuple(functional::ref<Const>(a1), functional::ref<Const>(a2),
                           functional::ref<Const>(a3), functional::ref<Const>(a4), functional::ref<Const>(a5),
                           functional::ref<Const>(a6), functional::ref<Const>(a7), functional::ref<Const>(a8),
                           functional::ref<Const>(a9), functional::ref<Const>(a10), functional::ref<Const>(a11),
                           functional::ref<Const>(a12), functional::ref<Const>(a13), functional::ref<Const>(a14));
}


template<bool Const, typename T>
constexpr auto as_tuple(T& t, std::integral_constant<size_t, 15>) {
    CONSTEXPR_STRUCTURED auto& [a1, a2, a3, a4, a5, a6, a7, a8, a9,
                                a10, a11, a12, a13, a14, a15] = t;
    return std::make_tuple(functional::ref<Const>(a1), functional::ref<Const>(a2),
                           functional::ref<Const>(a3), functional::ref<Const>(a4), functional::ref<Const>(a5),
                           functional::ref<Const>(a6), functional::ref<Const>(a7), functional::ref<Const>(a8),
                           functional::ref<Const>(a9), functional::ref<Const>(a10), functional::ref<Const>(a11),
                           functional::ref<Const>(a12), functional::ref<Const>(a13), functional::ref<Const>(a14),
                           functional::ref<Const>(a15));
}


template<bool Const, typename T>
constexpr auto as_tuple(T& t, std::integral_constant<size_t, 16>) {
    CONSTEXPR_STRUCTURED auto& [a1, a2, a3, a4, a5, a6, a7, a8, a9,
                                a10, a11, a12, a13, a14, a15, a16] = t;
    return std::make_tuple(functional::ref<Const>(a1), functional::ref<Const>(a2),
                           functional::ref<Const>(a3), functional::ref<Const>(a4), functional::ref<Const>(a5),
                           functional::ref<Const>(a6), functional::ref<Const>(a7), functional::ref<Const>(a8),
                           functional::ref<Const>(a9), functional::ref<Const>(a10), functional::ref<Const>(a11),
                           functional::ref<Const>(a12), functional::ref<Const>(a13), functional::ref<Const>(a14),
                           functional::ref<Const>(a15), functional::ref<Const>(a16));
}


template<bool Const, typename T>
constexpr auto as_tuple(T& t, std::integral_constant<size_t, 17>) {
    CONSTEXPR_STRUCTURED auto& [a1, a2, a3, a4, a5, a6, a7, a8, a9,
                                a10, a11, a12, a13, a14, a15, a16, a17] = t;
    return std::make_tuple(functional::ref<Const>(a1), functional::ref<Const>(a2),
                           functional::ref<Const>(a3), functional::ref<Const>(a4), functional::ref<Const>(a5),
                           functional::ref<Const>(a6), functional::ref<Const>(a7), functional::ref<Const>(a8),
                           functional::ref<Const>(a9), functional::ref<Const>(a10), functional::ref<Const>(a11),
                           functional::ref<Const>(a12), functional::ref<Const>(a13), functional::ref<Const>(a14),
                           functional::ref<Const>(a15), functional::ref<Const>(a16), functional::ref<Const>(a17));
}


template<bool Const, typename T>
constexpr auto as_tuple(T& t, std::integral_constant<size_t, 18>) {
    CONSTEXPR_STRUCTURED auto& [a1, a2, a3, a4, a5, a6, a7, a8, a9,
                                a10, a11, a12, a13, a14, a15, a16, a17, a18] = t;
    return std::make_tuple(functional::ref<Const>(a1), functional::ref<Const>(a2),
                           functional::ref<Const>(a3), functional::ref<Const>(a4), functional::ref<Const>(a5),
                           functional::ref<Const>(a6), functional::ref<Const>(a7), functional::ref<Const>(a8),
                           functional::ref<Const>(a9), functional::ref<Const>(a10), functional::ref<Const>(a11),
                           functional::ref<Const>(a12), functional::ref<Const>(a13), functional::ref<Const>(a14),
                           functional::ref<Const>(a15), functional::ref<Const>(a16), functional::ref<Const>(a17),
                           functional::ref<Const>(a18));
}


template<bool Const, typename T>
constexpr auto as_tuple(T& t, std::integral_constant<size_t, 19>) {
    CONSTEXPR_STRUCTURED auto& [a1, a2, a3, a4, a5, a6, a7, a8, a9,
                                a10, a11, a12, a13, a14, a15, a16, a17, a18, a19] = t;
    return std::make_tuple(functional::ref<Const>(a1), functional::ref<Const>(a2),
                           functional::ref<Const>(a3), functional::ref<Const>(a4), functional::ref<Const>(a5),
                           functional::ref<Const>(a6), functional::ref<Const>(a7), functional::ref<Const>(a8),
                           functional::ref<Const>(a9), functional::ref<Const>(a10), functional::ref<Const>(a11),
                           functional::ref<Const>(a12), functional::ref<Const>(a13), functional::ref<Const>(a14),
                           functional::ref<Const>(a15), functional::ref<Const>(a16), functional::ref<Const>(a17),
                           functional::ref<Const>(a18), functional::ref<Const>(a19));
}


template<bool Const, typename T>
constexpr auto as_tuple(T& t, std::integral_constant<size_t, 20>) {
    CONSTEXPR_STRUCTURED auto& [a1, a2, a3, a4, a5, a6, a7, a8, a9,
                                a10, a11, a12, a13, a14, a15, a16, a17, a18, a19,
                                a20] = t;
    return std::make_tuple(functional::ref<Const>(a1), functional::ref<Const>(a2),
                           functional::ref<Const>(a3), functional::ref<Const>(a4), functional::ref<Const>(a5),
                           functional::ref<Const>(a6), functional::ref<Const>(a7), functional::ref<Const>(a8),
                           functional::ref<Const>(a9), functional::ref<Const>(a10), functional::ref<Const>(a11),
                           functional::ref<Const>(a12), functional::ref<Const>(a13), functional::ref<Const>(a14),
                           functional::ref<Const>(a15), functional::ref<Const>(a16), functional::ref<Const>(a17),
                           functional::ref<Const>(a18), functional::ref<Const>(a19), functional::ref<Const>(a20));
}


template<bool Const, typename T>
constexpr auto as_tuple(T& t, std::integral_constant<size_t, 21>) {
    CONSTEXPR_STRUCTURED auto& [a1, a2, a3, a4, a5, a6, a7, a8, a9,
                                a10, a11, a12, a13, a14, a15, a16, a17, a18, a19,
                                a20, a21] = t;
    return std::make_tuple(functional::ref<Const>(a1), functional::ref<Const>(a2),
                           functional::ref<Const>(a3), functional::ref<Const>(a4), functional::ref<Const>(a5),
                           functional::ref<Const>(a6), functional::ref<Const>(a7), functional::ref<Const>(a8),
                           functional::ref<Const>(a9), functional::ref<Const>(a10), functional::ref<Const>(a11),
                           functional::ref<Const>(a12), functional::ref<Const>(a13), functional::ref<Const>(a14),
                           functional::ref<Const>(a15), functional::ref<Const>(a16), functional::ref<Const>(a17),
                           functional::ref<Const>(a18), functional::ref<Const>(a19), functional::ref<Const>(a20),
                           functional::ref<Const>(a21));
}


template<bool Const, typename T>
constexpr auto as_tuple(T& t, std::integral_constant<size_t, 22>) {
    CONSTEXPR_STRUCTURED auto& [a1, a2, a3, a4, a5, a6, a7, a8, a9,
                                a10, a11, a12, a13, a14, a15, a16, a17, a18, a19,
                                a20, a21, a22] = t;
    return std::make_tuple(functional::ref<Const>(a1), functional::ref<Const>(a2),
                           functional::ref<Const>(a3), functional::ref<Const>(a4), functional::ref<Const>(a5),
                           functional::ref<Const>(a6), functional::ref<Const>(a7), functional::ref<Const>(a8),
                           functional::ref<Const>(a9), functional::ref<Const>(a10), functional::ref<Const>(a11),
                           functional::ref<Const>(a12), functional::ref<Const>(a13), functional::ref<Const>(a14),
                           functional::ref<Const>(a15), functional::ref<Const>(a16), functional::ref<Const>(a17),
                           functional::ref<Const>(a18), functional::ref<Const>(a19), functional::ref<Const>(a20),
                           functional::ref<Const>(a21), functional::ref<Const>(a22));
}


template<bool Const, typename T>
constexpr auto as_tuple(T& t, std::integral_constant<size_t, 23>) {
    CONSTEXPR_STRUCTURED auto& [a1, a2, a3, a4, a5, a6, a7, a8, a9,
                                a10, a11, a12, a13, a14, a15, a16, a17, a18, a19,
                                a20, a21, a22, a23] = t;
    return std::make_tuple(functional::ref<Const>(a1), functional::ref<Const>(a2),
                           functional::ref<Const>(a3), functional::ref<Const>(a4), functional::ref<Const>(a5),
                           functional::ref<Const>(a6), functional::ref<Const>(a7), functional::ref<Const>(a8),
                           functional::ref<Const>(a9), functional::ref<Const>(a10), functional::ref<Const>(a11),
                           functional::ref<Const>(a12), functional::ref<Const>(a13), functional::ref<Const>(a14),
                           functional::ref<Const>(a15), functional::ref<Const>(a16), functional::ref<Const>(a17),
                           functional::ref<Const>(a18), functional::ref<Const>(a19), functional::ref<Const>(a20),
                           functional::ref<Const>(a21), functional::ref<Const>(a22), functional::ref<Const>(a23));
}


template<bool Const, typename T>
constexpr auto as_tuple(T& t, std::integral_constant<size_t, 24>) {
    CONSTEXPR_STRUCTURED auto& [a1, a2, a3, a4, a5, a6, a7, a8, a9,
                                a10, a11, a12, a13, a14, a15, a16, a17, a18, a19,
                                a20, a21, a22, a23, a24] = t;
    return std::make_tuple(functional::ref<Const>(a1), functional::ref<Const>(a2),
                           functional::ref<Const>(a3), functional::ref<Const>(a4), functional::ref<Const>(a5),
                           functional::ref<Const>(a6), functional::ref<Const>(a7), functional::ref<Const>(a8),
                           functional::ref<Const>(a9), functional::ref<Const>(a10), functional::ref<Const>(a11),
                           functional::ref<Const>(a12), functional::ref<Const>(a13), functional::ref<Const>(a14),
                           functional::ref<Const>(a15), functional::ref<Const>(a16), functional::ref<Const>(a17),
                           functional::ref<Const>(a18), functional::ref<Const>(a19), functional::ref<Const>(a20),
                           functional::ref<Const>(a21), functional::ref<Const>(a22), functional::ref<Const>(a23),
                           functional::ref<Const>(a24));
}


template<bool Const, typename T>
constexpr auto as_tuple(T& t, std::integral_constant<size_t, 25>) {
    CONSTEXPR_STRUCTURED auto& [a1, a2, a3, a4, a5, a6, a7, a8, a9,
                                a10, a11, a12, a13, a14, a15, a16, a17, a18, a19,
                                a20, a21, a22, a23, a24, a25] = t;
    return std::make_tuple(functional::ref<Const>(a1), functional::ref<Const>(a2),
                           functional::ref<Const>(a3), functional::ref<Const>(a4), functional::ref<Const>(a5),
                           functional::ref<Const>(a6), functional::ref<Const>(a7), functional::ref<Const>(a8),
                           functional::ref<Const>(a9), functional::ref<Const>(a10), functional::ref<Const>(a11),
                           functional::ref<Const>(a12), functional::ref<Const>(a13), functional::ref<Const>(a14),
                           functional::ref<Const>(a15), functional::ref<Const>(a16), functional::ref<Const>(a17),
                           functional::ref<Const>(a18), functional::ref<Const>(a19), functional::ref<Const>(a20),
                           functional::ref<Const>(a21), functional::ref<Const>(a22), functional::ref<Const>(a23),
                           functional::ref<Const>(a24), functional::ref<Const>(a25));
}


template<bool Const, typename T>
constexpr auto as_tuple(T& t, std::integral_constant<size_t, 26>) {
    CONSTEXPR_STRUCTURED auto& [a1, a2, a3, a4, a5, a6, a7, a8, a9,
                                a10, a11, a12, a13, a14, a15, a16, a17, a18, a19,
                                a20, a21, a22, a23, a24, a25, a26] = t;
    return std::make_tuple(functional::ref<Const>(a1), functional::ref<Const>(a2),
                           functional::ref<Const>(a3), functional::ref<Const>(a4), functional::ref<Const>(a5),
                           functional::ref<Const>(a6), functional::ref<Const>(a7), functional::ref<Const>(a8),
                           functional::ref<Const>(a9), functional::ref<Const>(a10), functional::ref<Const>(a11),
                           functional::ref<Const>(a12), functional::ref<Const>(a13), functional::ref<Const>(a14),
                           functional::ref<Const>(a15), functional::ref<Const>(a16), functional::ref<Const>(a17),
                           functional::ref<Const>(a18), functional::ref<Const>(a19), functional::ref<Const>(a20),
                           functional::ref<Const>(a21), functional::ref<Const>(a22), functional::ref<Const>(a23),
                           functional::ref<Const>(a24), functional::ref<Const>(a25), functional::ref<Const>(a26));
}


template<bool Const, typename T>
constexpr auto as_tuple(T& t, std::integral_constant<size_t, 27>) {
    CONSTEXPR_STRUCTURED auto& [a1, a2, a3, a4, a5, a6, a7, a8, a9,
                                a10, a11, a12, a13, a14, a15, a16, a17, a18, a19,
                                a20, a21, a22, a23, a24, a25, a26, a27] = t;
    return std::make_tuple(functional::ref<Const>(a1), functional::ref<Const>(a2),
                           functional::ref<Const>(a3), functional::ref<Const>(a4), functional::ref<Const>(a5),
                           functional::ref<Const>(a6), functional::ref<Const>(a7), functional::ref<Const>(a8),
                           functional::ref<Const>(a9), functional::ref<Const>(a10), functional::ref<Const>(a11),
                           functional::ref<Const>(a12), functional::ref<Const>(a13), functional::ref<Const>(a14),
                           functional::ref<Const>(a15), functional::ref<Const>(a16), functional::ref<Const>(a17),
                           functional::ref<Const>(a18), functional::ref<Const>(a19), functional::ref<Const>(a20),
                           functional::ref<Const>(a21), functional::ref<Const>(a22), functional::ref<Const>(a23),
                           functional::ref<Const>(a24), functional::ref<Const>(a25), functional::ref<Const>(a26),
                           functional::ref<Const>(a27));
}


template<bool Const, typename T>
constexpr auto as_tuple(T& t, std::integral_constant<size_t, 28>) {
    CONSTEXPR_STRUCTURED auto& [a1, a2, a3, a4, a5, a6, a7, a8, a9,
                                a10, a11, a12, a13, a14, a15, a16, a17, a18, a19,
                                a20, a21, a22, a23, a24, a25, a26, a27, a28] = t;
    return std::make_tuple(functional::ref<Const>(a1), functional::ref<Const>(a2),
                           functional::ref<Const>(a3), functional::ref<Const>(a4), functional::ref<Const>(a5),
                           functional::ref<Const>(a6), functional::ref<Const>(a7), functional::ref<Const>(a8),
                           functional::ref<Const>(a9), functional::ref<Const>(a10), functional::ref<Const>(a11),
                           functional::ref<Const>(a12), functional::ref<Const>(a13), functional::ref<Const>(a14),
                           functional::ref<Const>(a15), functional::ref<Const>(a16), functional::ref<Const>(a17),
                           functional::ref<Const>(a18), functional::ref<Const>(a19), functional::ref<Const>(a20),
                           functional::ref<Const>(a21), functional::ref<Const>(a22), functional::ref<Const>(a23),
                           functional::ref<Const>(a24), functional::ref<Const>(a25), functional::ref<Const>(a26),
                           functional::ref<Const>(a27), functional::ref<Const>(a28));
}


template<bool Const, typename T>
constexpr auto as_tuple(T& t, std::integral_constant<size_t, 29>) {
    CONSTEXPR_STRUCTURED auto& [a1, a2, a3, a4, a5, a6, a7, a8, a9,
                                a10, a11, a12, a13, a14, a15, a16, a17, a18, a19,
                                a20, a21, a22, a23, a24, a25, a26, a27, a28, a29] = t;
    return std::make_tuple(functional::ref<Const>(a1), functional::ref<Const>(a2),
                           functional::ref<Const>(a3), functional::ref<Const>(a4), functional::ref<Const>(a5),
                           functional::ref<Const>(a6), functional::ref<Const>(a7), functional::ref<Const>(a8),
                           functional::ref<Const>(a9), functional::ref<Const>(a10), functional::ref<Const>(a11),
                           functional::ref<Const>(a12), functional::ref<Const>(a13), functional::ref<Const>(a14),
                           functional::ref<Const>(a15), functional::ref<Const>(a16), functional::ref<Const>(a17),
                           functional::ref<Const>(a18), functional::ref<Const>(a19), functional::ref<Const>(a20),
                           functional::ref<Const>(a21), functional::ref<Const>(a22), functional::ref<Const>(a23),
                           functional::ref<Const>(a24), functional::ref<Const>(a25), functional::ref<Const>(a26),
                           functional::ref<Const>(a27), functional::ref<Const>(a28), functional::ref<Const>(a29));
}


template<bool Const, typename T>
constexpr auto as_tuple(T& t, std::integral_constant<size_t, 30>) {
    CONSTEXPR_STRUCTURED auto& [a1, a2, a3, a4, a5, a6, a7, a8, a9,
                                a10, a11, a12, a13, a14, a15, a16, a17, a18, a19,
                                a20, a21, a22, a23, a24, a25, a26, a27, a28, a29,
                                a30] = t;
    return std::make_tuple(functional::ref<Const>(a1), functional::ref<Const>(a2),
                           functional::ref<Const>(a3), functional::ref<Const>(a4), functional::ref<Const>(a5),
                           functional::ref<Const>(a6), functional::ref<Const>(a7), functional::ref<Const>(a8),
                           functional::ref<Const>(a9), functional::ref<Const>(a10), functional::ref<Const>(a11),
                           functional::ref<Const>(a12), functional::ref<Const>(a13), functional::ref<Const>(a14),
                           functional::ref<Const>(a15), functional::ref<Const>(a16), functional::ref<Const>(a17),
                           functional::ref<Const>(a18), functional::ref<Const>(a19), functional::ref<Const>(a20),
                           functional::ref<Const>(a21), functional::ref<Const>(a22), functional::ref<Const>(a23),
                           functional::ref<Const>(a24), functional::ref<Const>(a25), functional::ref<Const>(a26),
                           functional::ref<Const>(a27), functional::ref<Const>(a28), functional::ref<Const>(a29),
                           functional::ref<Const>(a30));
}


template<bool Const, typename T>
constexpr auto as_tuple(T& t, std::integral_constant<size_t, 31>) {
    CONSTEXPR_STRUCTURED auto& [a1, a2, a3, a4, a5, a6, a7, a8, a9,
                                a10, a11, a12, a13, a14, a15, a16, a17, a18, a19,
                                a20, a21, a22, a23, a24, a25, a26, a27, a28, a29,
                                a30, a31] = t;
    return std::make_tuple(functional::ref<Const>(a1), functional::ref<Const>(a2),
                           functional::ref<Const>(a3), functional::ref<Const>(a4), functional::ref<Const>(a5),
                           functional::ref<Const>(a6), functional::ref<Const>(a7), functional::ref<Const>(a8),
                           functional::ref<Const>(a9), functional::ref<Const>(a10), functional::ref<Const>(a11),
                           functional::ref<Const>(a12), functional::ref<Const>(a13), functional::ref<Const>(a14),
                           functional::ref<Const>(a15), functional::ref<Const>(a16), functional::ref<Const>(a17),
                           functional::ref<Const>(a18), functional::ref<Const>(a19), functional::ref<Const>(a20),
                           functional::ref<Const>(a21), functional::ref<Const>(a22), functional::ref<Const>(a23),
                           functional::ref<Const>(a24), functional::ref<Const>(a25), functional::ref<Const>(a26),
                           functional::ref<Const>(a27), functional::ref<Const>(a28), functional::ref<Const>(a29),
                           functional::ref<Const>(a30), functional::ref<Const>(a31));
}


template<bool Const, typename T>
constexpr auto as_tuple(T& t, std::integral_constant<size_t, 32>) {
    CONSTEXPR_STRUCTURED auto& [a1, a2, a3, a4, a5, a6, a7, a8, a9,
                                a10, a11, a12, a13, a14, a15, a16, a17, a18, a19,
                                a20, a21, a22, a23, a24, a25, a26, a27, a28, a29,
                                a30, a31, a32] = t;
    return std::make_tuple(functional::ref<Const>(a1), functional::ref<Const>(a2),
                           functional::ref<Const>(a3), functional::ref<Const>(a4), functional::ref<Const>(a5),
                           functional::ref<Const>(a6), functional::ref<Const>(a7), functional::ref<Const>(a8),
                           functional::ref<Const>(a9), functional::ref<Const>(a10), functional::ref<Const>(a11),
                           functional::ref<Const>(a12), functional::ref<Const>(a13), functional::ref<Const>(a14),
                           functional::ref<Const>(a15), functional::ref<Const>(a16), functional::ref<Const>(a17),
                           functional::ref<Const>(a18), functional::ref<Const>(a19), functional::ref<Const>(a20),
                           functional::ref<Const>(a21), functional::ref<Const>(a22), functional::ref<Const>(a23),
                           functional::ref<Const>(a24), functional::ref<Const>(a25), functional::ref<Const>(a26),
                           functional::ref<Const>(a27), functional::ref<Const>(a28), functional::ref<Const>(a29),
                           functional::ref<Const>(a30), functional::ref<Const>(a31), functional::ref<Const>(a32));
}


template<bool Const, typename T>
constexpr auto as_tuple(T& t, std::integral_constant<size_t, 33>) {
    CONSTEXPR_STRUCTURED auto& [a1, a2, a3, a4, a5, a6, a7, a8, a9,
                                a10, a11, a12, a13, a14, a15, a16, a17, a18, a19,
                                a20, a21, a22, a23, a24, a25, a26, a27, a28, a29,
                                a30, a31, a32, a33] = t;
    return std::make_tuple(functional::ref<Const>(a1), functional::ref<Const>(a2),
                           functional::ref<Const>(a3), functional::ref<Const>(a4), functional::ref<Const>(a5),
                           functional::ref<Const>(a6), functional::ref<Const>(a7), functional::ref<Const>(a8),
                           functional::ref<Const>(a9), functional::ref<Const>(a10), functional::ref<Const>(a11),
                           functional::ref<Const>(a12), functional::ref<Const>(a13), functional::ref<Const>(a14),
                           functional::ref<Const>(a15), functional::ref<Const>(a16), functional::ref<Const>(a17),
                           functional::ref<Const>(a18), functional::ref<Const>(a19), functional::ref<Const>(a20),
                           functional::ref<Const>(a21), functional::ref<Const>(a22), functional::ref<Const>(a23),
                           functional::ref<Const>(a24), functional::ref<Const>(a25), functional::ref<Const>(a26),
                           functional::ref<Const>(a27), functional::ref<Const>(a28), functional::ref<Const>(a29),
                           functional::ref<Const>(a30), functional::ref<Const>(a31), functional::ref<Const>(a32),
                           functional::ref<Const>(a33));
}


template<bool Const, typename T>
constexpr auto as_tuple(T& t, std::integral_constant<size_t, 34>) {
    CONSTEXPR_STRUCTURED auto& [a1, a2, a3, a4, a5, a6, a7, a8, a9,
                                a10, a11, a12, a13, a14, a15, a16, a17, a18, a19,
                                a20, a21, a22, a23, a24, a25, a26, a27, a28, a29,
                                a30, a31, a32, a33, a34] = t;
    return std::make_tuple(functional::ref<Const>(a1), functional::ref<Const>(a2),
                           functional::ref<Const>(a3), functional::ref<Const>(a4), functional::ref<Const>(a5),
                           functional::ref<Const>(a6), functional::ref<Const>(a7), functional::ref<Const>(a8),
                           functional::ref<Const>(a9), functional::ref<Const>(a10), functional::ref<Const>(a11),
                           functional::ref<Const>(a12), functional::ref<Const>(a13), functional::ref<Const>(a14),
                           functional::ref<Const>(a15), functional::ref<Const>(a16), functional::ref<Const>(a17),
                           functional::ref<Const>(a18), functional::ref<Const>(a19), functional::ref<Const>(a20),
                           functional::ref<Const>(a21), functional::ref<Const>(a22), functional::ref<Const>(a23),
                           functional::ref<Const>(a24), functional::ref<Const>(a25), functional::ref<Const>(a26),
                           functional::ref<Const>(a27), functional::ref<Const>(a28), functional::ref<Const>(a29),
                           functional::ref<Const>(a30), functional::ref<Const>(a31), functional::ref<Const>(a32),
                           functional::ref<Const>(a33), functional::ref<Const>(a34));
}


template<bool Const, typename T>
constexpr auto as_tuple(T& t, std::integral_constant<size_t, 35>) {
    CONSTEXPR_STRUCTURED auto& [a1, a2, a3, a4, a5, a6, a7, a8, a9,
                                a10, a11, a12, a13, a14, a15, a16, a17, a18, a19,
                                a20, a21, a22, a23, a24, a25, a26, a27, a28, a29,
                                a30, a31, a32, a33, a34, a35] = t;
    return std::make_tuple(functional::ref<Const>(a1), functional::ref<Const>(a2),
                           functional::ref<Const>(a3), functional::ref<Const>(a4), functional::ref<Const>(a5),
                           functional::ref<Const>(a6), functional::ref<Const>(a7), functional::ref<Const>(a8),
                           functional::ref<Const>(a9), functional::ref<Const>(a10), functional::ref<Const>(a11),
                           functional::ref<Const>(a12), functional::ref<Const>(a13), functional::ref<Const>(a14),
                           functional::ref<Const>(a15), functional::ref<Const>(a16), functional::ref<Const>(a17),
                           functional::ref<Const>(a18), functional::ref<Const>(a19), functional::ref<Const>(a20),
                           functional::ref<Const>(a21), functional::ref<Const>(a22), functional::ref<Const>(a23),
                           functional::ref<Const>(a24), functional::ref<Const>(a25), functional::ref<Const>(a26),
                           functional::ref<Const>(a27), functional::ref<Const>(a28), functional::ref<Const>(a29),
                           functional::ref<Const>(a30), functional::ref<Const>(a31), functional::ref<Const>(a32),
                           functional::ref<Const>(a33), functional::ref<Const>(a34), functional::ref<Const>(a35));
}


template<bool Const, typename T>
constexpr auto as_tuple(T& t, std::integral_constant<size_t, 36>) {
    CONSTEXPR_STRUCTURED auto& [a1, a2, a3, a4, a5, a6, a7, a8, a9,
                                a10, a11, a12, a13, a14, a15, a16, a17, a18, a19,
                                a20, a21, a22, a23, a24, a25, a26, a27, a28, a29,
                                a30, a31, a32, a33, a34, a35, a36] = t;
    return std::make_tuple(functional::ref<Const>(a1), functional::ref<Const>(a2),
                           functional::ref<Const>(a3), functional::ref<Const>(a4), functional::ref<Const>(a5),
                           functional::ref<Const>(a6), functional::ref<Const>(a7), functional::ref<Const>(a8),
                           functional::ref<Const>(a9), functional::ref<Const>(a10), functional::ref<Const>(a11),
                           functional::ref<Const>(a12), functional::ref<Const>(a13), functional::ref<Const>(a14),
                           functional::ref<Const>(a15), functional::ref<Const>(a16), functional::ref<Const>(a17),
                           functional::ref<Const>(a18), functional::ref<Const>(a19), functional::ref<Const>(a20),
                           functional::ref<Const>(a21), functional::ref<Const>(a22), functional::ref<Const>(a23),
                           functional::ref<Const>(a24), functional::ref<Const>(a25), functional::ref<Const>(a26),
                           functional::ref<Const>(a27), functional::ref<Const>(a28), functional::ref<Const>(a29),
                           functional::ref<Const>(a30), functional::ref<Const>(a31), functional::ref<Const>(a32),
                           functional::ref<Const>(a33), functional::ref<Const>(a34), functional::ref<Const>(a35),
                           functional::ref<Const>(a36));
}


template<bool Const, typename T>
constexpr auto as_tuple(T& t, std::integral_constant<size_t, 37>) {
    CONSTEXPR_STRUCTURED auto& [a1, a2, a3, a4, a5, a6, a7, a8, a9,
                                a10, a11, a12, a13, a14, a15, a16, a17, a18, a19,
                                a20, a21, a22, a23, a24, a25, a26, a27, a28, a29,
                                a30, a31, a32, a33, a34, a35, a36, a37] = t;
    return std::make_tuple(functional::ref<Const>(a1), functional::ref<Const>(a2),
                           functional::ref<Const>(a3), functional::ref<Const>(a4), functional::ref<Const>(a5),
                           functional::ref<Const>(a6), functional::ref<Const>(a7), functional::ref<Const>(a8),
                           functional::ref<Const>(a9), functional::ref<Const>(a10), functional::ref<Const>(a11),
                           functional::ref<Const>(a12), functional::ref<Const>(a13), functional::ref<Const>(a14),
                           functional::ref<Const>(a15), functional::ref<Const>(a16), functional::ref<Const>(a17),
                           functional::ref<Const>(a18), functional::ref<Const>(a19), functional::ref<Const>(a20),
                           functional::ref<Const>(a21), functional::ref<Const>(a22), functional::ref<Const>(a23),
                           functional::ref<Const>(a24), functional::ref<Const>(a25), functional::ref<Const>(a26),
                           functional::ref<Const>(a27), functional::ref<Const>(a28), functional::ref<Const>(a29),
                           functional::ref<Const>(a30), functional::ref<Const>(a31), functional::ref<Const>(a32),
                           functional::ref<Const>(a33), functional::ref<Const>(a34), functional::ref<Const>(a35),
                           functional::ref<Const>(a36), functional::ref<Const>(a37));
}


template<bool Const, typename T>
constexpr auto as_tuple(T& t, std::integral_constant<size_t, 38>) {
    CONSTEXPR_STRUCTURED auto& [a1, a2, a3, a4, a5, a6, a7, a8, a9,
                                a10, a11, a12, a13, a14, a15, a16, a17, a18, a19,
                                a20, a21, a22, a23, a24, a25, a26, a27, a28, a29,
                                a30, a31, a32, a33, a34, a35, a36, a37, a38] = t;
    return std::make_tuple(functional::ref<Const>(a1), functional::ref<Const>(a2),
                           functional::ref<Const>(a3), functional::ref<Const>(a4), functional::ref<Const>(a5),
                           functional::ref<Const>(a6), functional::ref<Const>(a7), functional::ref<Const>(a8),
                           functional::ref<Const>(a9), functional::ref<Const>(a10), functional::ref<Const>(a11),
                           functional::ref<Const>(a12), functional::ref<Const>(a13), functional::ref<Const>(a14),
                           functional::ref<Const>(a15), functional::ref<Const>(a16), functional::ref<Const>(a17),
                           functional::ref<Const>(a18), functional::ref<Const>(a19), functional::ref<Const>(a20),
                           functional::ref<Const>(a21), functional::ref<Const>(a22), functional::ref<Const>(a23),
                           functional::ref<Const>(a24), functional::ref<Const>(a25), functional::ref<Const>(a26),
                           functional::ref<Const>(a27), functional::ref<Const>(a28), functional::ref<Const>(a29),
                           functional::ref<Const>(a30), functional::ref<Const>(a31), functional::ref<Const>(a32),
                           functional::ref<Const>(a33), functional::ref<Const>(a34), functional::ref<Const>(a35),
                           functional::ref<Const>(a36), functional::ref<Const>(a37), functional::ref<Const>(a38));
}


template<bool Const, typename T>
constexpr auto as_tuple(T& t, std::integral_constant<size_t, 39>) {
    CONSTEXPR_STRUCTURED auto& [a1, a2, a3, a4, a5, a6, a7, a8, a9,
                                a10, a11, a12, a13, a14, a15, a16, a17, a18, a19,
                                a20, a21, a22, a23, a24, a25, a26, a27, a28, a29,
                                a30, a31, a32, a33, a34, a35, a36, a37, a38, a39] = t;
    return std::make_tuple(functional::ref<Const>(a1), functional::ref<Const>(a2),
                           functional::ref<Const>(a3), functional::ref<Const>(a4), functional::ref<Const>(a5),
                           functional::ref<Const>(a6), functional::ref<Const>(a7), functional::ref<Const>(a8),
                           functional::ref<Const>(a9), functional::ref<Const>(a10), functional::ref<Const>(a11),
                           functional::ref<Const>(a12), functional::ref<Const>(a13), functional::ref<Const>(a14),
                           functional::ref<Const>(a15), functional::ref<Const>(a16), functional::ref<Const>(a17),
                           functional::ref<Const>(a18), functional::ref<Const>(a19), functional::ref<Const>(a20),
                           functional::ref<Const>(a21), functional::ref<Const>(a22), functional::ref<Const>(a23),
                           functional::ref<Const>(a24), functional::ref<Const>(a25), functional::ref<Const>(a26),
                           functional::ref<Const>(a27), functional::ref<Const>(a28), functional::ref<Const>(a29),
                           functional::ref<Const>(a30), functional::ref<Const>(a31), functional::ref<Const>(a32),
                           functional::ref<Const>(a33), functional::ref<Const>(a34), functional::ref<Const>(a35),
                           functional::ref<Const>(a36), functional::ref<Const>(a37), functional::ref<Const>(a38),
                           functional::ref<Const>(a39));
}


template<bool Const, typename T>
constexpr auto as_tuple(T& t, std::integral_constant<size_t, 40>) {
    CONSTEXPR_STRUCTURED auto& [a1, a2, a3, a4, a5, a6, a7, a8, a9,
                                a10, a11, a12, a13, a14, a15, a16, a17, a18, a19,
                                a20, a21, a22, a23, a24, a25, a26, a27, a28, a29,
                                a30, a31, a32, a33, a34, a35, a36, a37, a38, a39,
                                a40] = t;
    return std::make_tuple(functional::ref<Const>(a1), functional::ref<Const>(a2),
                           functional::ref<Const>(a3), functional::ref<Const>(a4), functional::ref<Const>(a5),
                           functional::ref<Const>(a6), functional::ref<Const>(a7), functional::ref<Const>(a8),
                           functional::ref<Const>(a9), functional::ref<Const>(a10), functional::ref<Const>(a11),
                           functional::ref<Const>(a12), functional::ref<Const>(a13), functional::ref<Const>(a14),
                           functional::ref<Const>(a15), functional::ref<Const>(a16), functional::ref<Const>(a17),
                           functional::ref<Const>(a18), functional::ref<Const>(a19), functional::ref<Const>(a20),
                           functional::ref<Const>(a21), functional::ref<Const>(a22), functional::ref<Const>(a23),
                           functional::ref<Const>(a24), functional::ref<Const>(a25), functional::ref<Const>(a26),
                           functional::ref<Const>(a27), functional::ref<Const>(a28), functional::ref<Const>(a29),
                           functional::ref<Const>(a30), functional::ref<Const>(a31), functional::ref<Const>(a32),
                           functional::ref<Const>(a33), functional::ref<Const>(a34), functional::ref<Const>(a35),
                           functional::ref<Const>(a36), functional::ref<Const>(a37), functional::ref<Const>(a38),
                           functional::ref<Const>(a39), functional::ref<Const>(a40));
}


template<bool Const, typename T>
constexpr auto as_tuple(T& t, std::integral_constant<size_t, 41>) {
    CONSTEXPR_STRUCTURED auto& [a1, a2, a3, a4, a5, a6, a7, a8, a9,
                                a10, a11, a12, a13, a14, a15, a16, a17, a18, a19,
                                a20, a21, a22, a23, a24, a25, a26, a27, a28, a29,
                                a30, a31, a32, a33, a34, a35, a36, a37, a38, a39,
                                a40, a41] = t;
    return std::make_tuple(functional::ref<Const>(a1), functional::ref<Const>(a2),
                           functional::ref<Const>(a3), functional::ref<Const>(a4), functional::ref<Const>(a5),
                           functional::ref<Const>(a6), functional::ref<Const>(a7), functional::ref<Const>(a8),
                           functional::ref<Const>(a9), functional::ref<Const>(a10), functional::ref<Const>(a11),
                           functional::ref<Const>(a12), functional::ref<Const>(a13), functional::ref<Const>(a14),
                           functional::ref<Const>(a15), functional::ref<Const>(a16), functional::ref<Const>(a17),
                           functional::ref<Const>(a18), functional::ref<Const>(a19), functional::ref<Const>(a20),
                           functional::ref<Const>(a21), functional::ref<Const>(a22), functional::ref<Const>(a23),
                           functional::ref<Const>(a24), functional::ref<Const>(a25), functional::ref<Const>(a26),
                           functional::ref<Const>(a27), functional::ref<Const>(a28), functional::ref<Const>(a29),
                           functional::ref<Const>(a30), functional::ref<Const>(a31), functional::ref<Const>(a32),
                           functional::ref<Const>(a33), functional::ref<Const>(a34), functional::ref<Const>(a35),
                           functional::ref<Const>(a36), functional::ref<Const>(a37), functional::ref<Const>(a38),
                           functional::ref<Const>(a39), functional::ref<Const>(a40), functional::ref<Const>(a41));
}


template<bool Const, typename T>
constexpr auto as_tuple(T& t, std::integral_constant<size_t, 42>) {
    CONSTEXPR_STRUCTURED auto& [a1, a2, a3, a4, a5, a6, a7, a8, a9,
                                a10, a11, a12, a13, a14, a15, a16, a17, a18, a19,
                                a20, a21, a22, a23, a24, a25, a26, a27, a28, a29,
                                a30, a31, a32, a33, a34, a35, a36, a37, a38, a39,
                                a40, a41, a42] = t;
    return std::make_tuple(functional::ref<Const>(a1), functional::ref<Const>(a2),
                           functional::ref<Const>(a3), functional::ref<Const>(a4), functional::ref<Const>(a5),
                           functional::ref<Const>(a6), functional::ref<Const>(a7), functional::ref<Const>(a8),
                           functional::ref<Const>(a9), functional::ref<Const>(a10), functional::ref<Const>(a11),
                           functional::ref<Const>(a12), functional::ref<Const>(a13), functional::ref<Const>(a14),
                           functional::ref<Const>(a15), functional::ref<Const>(a16), functional::ref<Const>(a17),
                           functional::ref<Const>(a18), functional::ref<Const>(a19), functional::ref<Const>(a20),
                           functional::ref<Const>(a21), functional::ref<Const>(a22), functional::ref<Const>(a23),
                           functional::ref<Const>(a24), functional::ref<Const>(a25), functional::ref<Const>(a26),
                           functional::ref<Const>(a27), functional::ref<Const>(a28), functional::ref<Const>(a29),
                           functional::ref<Const>(a30), functional::ref<Const>(a31), functional::ref<Const>(a32),
                           functional::ref<Const>(a33), functional::ref<Const>(a34), functional::ref<Const>(a35),
                           functional::ref<Const>(a36), functional::ref<Const>(a37), functional::ref<Const>(a38),
                           functional::ref<Const>(a39), functional::ref<Const>(a40), functional::ref<Const>(a41),
                           functional::ref<Const>(a42));
}


template<bool Const, typename T>
constexpr auto as_tuple(T& t, std::integral_constant<size_t, 43>) {
    CONSTEXPR_STRUCTURED auto& [a1, a2, a3, a4, a5, a6, a7, a8, a9,
                                a10, a11, a12, a13, a14, a15, a16, a17, a18, a19,
                                a20, a21, a22, a23, a24, a25, a26, a27, a28, a29,
                                a30, a31, a32, a33, a34, a35, a36, a37, a38, a39,
                                a40, a41, a42, a43] = t;
    return std::make_tuple(functional::ref<Const>(a1), functional::ref<Const>(a2),
                           functional::ref<Const>(a3), functional::ref<Const>(a4), functional::ref<Const>(a5),
                           functional::ref<Const>(a6), functional::ref<Const>(a7), functional::ref<Const>(a8),
                           functional::ref<Const>(a9), functional::ref<Const>(a10), functional::ref<Const>(a11),
                           functional::ref<Const>(a12), functional::ref<Const>(a13), functional::ref<Const>(a14),
                           functional::ref<Const>(a15), functional::ref<Const>(a16), functional::ref<Const>(a17),
                           functional::ref<Const>(a18), functional::ref<Const>(a19), functional::ref<Const>(a20),
                           functional::ref<Const>(a21), functional::ref<Const>(a22), functional::ref<Const>(a23),
                           functional::ref<Const>(a24), functional::ref<Const>(a25), functional::ref<Const>(a26),
                           functional::ref<Const>(a27), functional::ref<Const>(a28), functional::ref<Const>(a29),
                           functional::ref<Const>(a30), functional::ref<Const>(a31), functional::ref<Const>(a32),
                           functional::ref<Const>(a33), functional::ref<Const>(a34), functional::ref<Const>(a35),
                           functional::ref<Const>(a36), functional::ref<Const>(a37), functional::ref<Const>(a38),
                           functional::ref<Const>(a39), functional::ref<Const>(a40), functional::ref<Const>(a41),
                           functional::ref<Const>(a42), functional::ref<Const>(a43));
}


template<bool Const, typename T>
constexpr auto as_tuple(T& t, std::integral_constant<size_t, 44>) {
    CONSTEXPR_STRUCTURED auto& [a1, a2, a3, a4, a5, a6, a7, a8, a9,
                                a10, a11, a12, a13, a14, a15, a16, a17, a18, a19,
                                a20, a21, a22, a23, a24, a25, a26, a27, a28, a29,
                                a30, a31, a32, a33, a34, a35, a36, a37, a38, a39,
                                a40, a41, a42, a43, a44] = t;
    return std::make_tuple(functional::ref<Const>(a1), functional::ref<Const>(a2),
                           functional::ref<Const>(a3), functional::ref<Const>(a4), functional::ref<Const>(a5),
                           functional::ref<Const>(a6), functional::ref<Const>(a7), functional::ref<Const>(a8),
                           functional::ref<Const>(a9), functional::ref<Const>(a10), functional::ref<Const>(a11),
                           functional::ref<Const>(a12), functional::ref<Const>(a13), functional::ref<Const>(a14),
                           functional::ref<Const>(a15), functional::ref<Const>(a16), functional::ref<Const>(a17),
                           functional::ref<Const>(a18), functional::ref<Const>(a19), functional::ref<Const>(a20),
                           functional::ref<Const>(a21), functional::ref<Const>(a22), functional::ref<Const>(a23),
                           functional::ref<Const>(a24), functional::ref<Const>(a25), functional::ref<Const>(a26),
                           functional::ref<Const>(a27), functional::ref<Const>(a28), functional::ref<Const>(a29),
                           functional::ref<Const>(a30), functional::ref<Const>(a31), functional::ref<Const>(a32),
                           functional::ref<Const>(a33), functional::ref<Const>(a34), functional::ref<Const>(a35),
                           functional::ref<Const>(a36), functional::ref<Const>(a37), functional::ref<Const>(a38),
                           functional::ref<Const>(a39), functional::ref<Const>(a40), functional::ref<Const>(a41),
                           functional::ref<Const>(a42), functional::ref<Const>(a43), functional::ref<Const>(a44));
}


template<bool Const, typename T>
constexpr auto as_tuple(T& t, std::integral_constant<size_t, 45>) {
    CONSTEXPR_STRUCTURED auto& [a1, a2, a3, a4, a5, a6, a7, a8, a9,
                                a10, a11, a12, a13, a14, a15, a16, a17, a18, a19,
                                a20, a21, a22, a23, a24, a25, a26, a27, a28, a29,
                                a30, a31, a32, a33, a34, a35, a36, a37, a38, a39,
                                a40, a41, a42, a43, a44, a45] = t;
    return std::make_tuple(functional::ref<Const>(a1), functional::ref<Const>(a2),
                           functional::ref<Const>(a3), functional::ref<Const>(a4), functional::ref<Const>(a5),
                           functional::ref<Const>(a6), functional::ref<Const>(a7), functional::ref<Const>(a8),
                           functional::ref<Const>(a9), functional::ref<Const>(a10), functional::ref<Const>(a11),
                           functional::ref<Const>(a12), functional::ref<Const>(a13), functional::ref<Const>(a14),
                           functional::ref<Const>(a15), functional::ref<Const>(a16), functional::ref<Const>(a17),
                           functional::ref<Const>(a18), functional::ref<Const>(a19), functional::ref<Const>(a20),
                           functional::ref<Const>(a21), functional::ref<Const>(a22), functional::ref<Const>(a23),
                           functional::ref<Const>(a24), functional::ref<Const>(a25), functional::ref<Const>(a26),
                           functional::ref<Const>(a27), functional::ref<Const>(a28), functional::ref<Const>(a29),
                           functional::ref<Const>(a30), functional::ref<Const>(a31), functional::ref<Const>(a32),
                           functional::ref<Const>(a33), functional::ref<Const>(a34), functional::ref<Const>(a35),
                           functional::ref<Const>(a36), functional::ref<Const>(a37), functional::ref<Const>(a38),
                           functional::ref<Const>(a39), functional::ref<Const>(a40), functional::ref<Const>(a41),
                           functional::ref<Const>(a42), functional::ref<Const>(a43), functional::ref<Const>(a44),
                           functional::ref<Const>(a45));
}


template<bool Const, typename T>
constexpr auto as_tuple(T& t, std::integral_constant<size_t, 46>) {
    CONSTEXPR_STRUCTURED auto& [a1, a2, a3, a4, a5, a6, a7, a8, a9,
                                a10, a11, a12, a13, a14, a15, a16, a17, a18, a19,
                                a20, a21, a22, a23, a24, a25, a26, a27, a28, a29,
                                a30, a31, a32, a33, a34, a35, a36, a37, a38, a39,
                                a40, a41, a42, a43, a44, a45, a46] = t;
    return std::make_tuple(functional::ref<Const>(a1), functional::ref<Const>(a2),
                           functional::ref<Const>(a3), functional::ref<Const>(a4), functional::ref<Const>(a5),
                           functional::ref<Const>(a6), functional::ref<Const>(a7), functional::ref<Const>(a8),
                           functional::ref<Const>(a9), functional::ref<Const>(a10), functional::ref<Const>(a11),
                           functional::ref<Const>(a12), functional::ref<Const>(a13), functional::ref<Const>(a14),
                           functional::ref<Const>(a15), functional::ref<Const>(a16), functional::ref<Const>(a17),
                           functional::ref<Const>(a18), functional::ref<Const>(a19), functional::ref<Const>(a20),
                           functional::ref<Const>(a21), functional::ref<Const>(a22), functional::ref<Const>(a23),
                           functional::ref<Const>(a24), functional::ref<Const>(a25), functional::ref<Const>(a26),
                           functional::ref<Const>(a27), functional::ref<Const>(a28), functional::ref<Const>(a29),
                           functional::ref<Const>(a30), functional::ref<Const>(a31), functional::ref<Const>(a32),
                           functional::ref<Const>(a33), functional::ref<Const>(a34), functional::ref<Const>(a35),
                           functional::ref<Const>(a36), functional::ref<Const>(a37), functional::ref<Const>(a38),
                           functional::ref<Const>(a39), functional::ref<Const>(a40), functional::ref<Const>(a41),
                           functional::ref<Const>(a42), functional::ref<Const>(a43), functional::ref<Const>(a44),
                           functional::ref<Const>(a45), functional::ref<Const>(a46));
}


template<bool Const, typename T>
constexpr auto as_tuple(T& t, std::integral_constant<size_t, 47>) {
    CONSTEXPR_STRUCTURED auto& [a1, a2, a3, a4, a5, a6, a7, a8, a9,
                                a10, a11, a12, a13, a14, a15, a16, a17, a18, a19,
                                a20, a21, a22, a23, a24, a25, a26, a27, a28, a29,
                                a30, a31, a32, a33, a34, a35, a36, a37, a38, a39,
                                a40, a41, a42, a43, a44, a45, a46, a47] = t;
    return std::make_tuple(functional::ref<Const>(a1), functional::ref<Const>(a2),
                           functional::ref<Const>(a3), functional::ref<Const>(a4), functional::ref<Const>(a5),
                           functional::ref<Const>(a6), functional::ref<Const>(a7), functional::ref<Const>(a8),
                           functional::ref<Const>(a9), functional::ref<Const>(a10), functional::ref<Const>(a11),
                           functional::ref<Const>(a12), functional::ref<Const>(a13), functional::ref<Const>(a14),
                           functional::ref<Const>(a15), functional::ref<Const>(a16), functional::ref<Const>(a17),
                           functional::ref<Const>(a18), functional::ref<Const>(a19), functional::ref<Const>(a20),
                           functional::ref<Const>(a21), functional::ref<Const>(a22), functional::ref<Const>(a23),
                           functional::ref<Const>(a24), functional::ref<Const>(a25), functional::ref<Const>(a26),
                           functional::ref<Const>(a27), functional::ref<Const>(a28), functional::ref<Const>(a29),
                           functional::ref<Const>(a30), functional::ref<Const>(a31), functional::ref<Const>(a32),
                           functional::ref<Const>(a33), functional::ref<Const>(a34), functional::ref<Const>(a35),
                           functional::ref<Const>(a36), functional::ref<Const>(a37), functional::ref<Const>(a38),
                           functional::ref<Const>(a39), functional::ref<Const>(a40), functional::ref<Const>(a41),
                           functional::ref<Const>(a42), functional::ref<Const>(a43), functional::ref<Const>(a44),
                           functional::ref<Const>(a45), functional::ref<Const>(a46), functional::ref<Const>(a47));
}


template<bool Const, typename T>
constexpr auto as_tuple(T& t, std::integral_constant<size_t, 48>) {
    CONSTEXPR_STRUCTURED auto& [a1, a2, a3, a4, a5, a6, a7, a8, a9,
                                a10, a11, a12, a13, a14, a15, a16, a17, a18, a19,
                                a20, a21, a22, a23, a24, a25, a26, a27, a28, a29,
                                a30, a31, a32, a33, a34, a35, a36, a37, a38, a39,
                                a40, a41, a42, a43, a44, a45, a46, a47, a48] = t;
    return std::make_tuple(functional::ref<Const>(a1), functional::ref<Const>(a2),
                           functional::ref<Const>(a3), functional::ref<Const>(a4), functional::ref<Const>(a5),
                           functional::ref<Const>(a6), functional::ref<Const>(a7), functional::ref<Const>(a8),
                           functional::ref<Const>(a9), functional::ref<Const>(a10), functional::ref<Const>(a11),
                           functional::ref<Const>(a12), functional::ref<Const>(a13), functional::ref<Const>(a14),
                           functional::ref<Const>(a15), functional::ref<Const>(a16), functional::ref<Const>(a17),
                           functional::ref<Const>(a18), functional::ref<Const>(a19), functional::ref<Const>(a20),
                           functional::ref<Const>(a21), functional::ref<Const>(a22), functional::ref<Const>(a23),
                           functional::ref<Const>(a24), functional::ref<Const>(a25), functional::ref<Const>(a26),
                           functional::ref<Const>(a27), functional::ref<Const>(a28), functional::ref<Const>(a29),
                           functional::ref<Const>(a30), functional::ref<Const>(a31), functional::ref<Const>(a32),
                           functional::ref<Const>(a33), functional::ref<Const>(a34), functional::ref<Const>(a35),
                           functional::ref<Const>(a36), functional::ref<Const>(a37), functional::ref<Const>(a38),
                           functional::ref<Const>(a39), functional::ref<Const>(a40), functional::ref<Const>(a41),
                           functional::ref<Const>(a42), functional::ref<Const>(a43), functional::ref<Const>(a44),
                           functional::ref<Const>(a45), functional::ref<Const>(a46), functional::ref<Const>(a47),
                           functional::ref<Const>(a48));
}


template<bool Const, typename T>
constexpr auto as_tuple(T& t, std::integral_constant<size_t, 49>) {
    CONSTEXPR_STRUCTURED auto& [a1, a2, a3, a4, a5, a6, a7, a8, a9,
                                a10, a11, a12, a13, a14, a15, a16, a17, a18, a19,
                                a20, a21, a22, a23, a24, a25, a26, a27, a28, a29,
                                a30, a31, a32, a33, a34, a35, a36, a37, a38, a39,
                                a40, a41, a42, a43, a44, a45, a46, a47, a48, a49] = t;
    return std::make_tuple(functional::ref<Const>(a1), functional::ref<Const>(a2),
                           functional::ref<Const>(a3), functional::ref<Const>(a4), functional::ref<Const>(a5),
                           functional::ref<Const>(a6), functional::ref<Const>(a7), functional::ref<Const>(a8),
                           functional::ref<Const>(a9), functional::ref<Const>(a10), functional::ref<Const>(a11),
                           functional::ref<Const>(a12), functional::ref<Const>(a13), functional::ref<Const>(a14),
                           functional::ref<Const>(a15), functional::ref<Const>(a16), functional::ref<Const>(a17),
                           functional::ref<Const>(a18), functional::ref<Const>(a19), functional::ref<Const>(a20),
                           functional::ref<Const>(a21), functional::ref<Const>(a22), functional::ref<Const>(a23),
                           functional::ref<Const>(a24), functional::ref<Const>(a25), functional::ref<Const>(a26),
                           functional::ref<Const>(a27), functional::ref<Const>(a28), functional::ref<Const>(a29),
                           functional::ref<Const>(a30), functional::ref<Const>(a31), functional::ref<Const>(a32),
                           functional::ref<Const>(a33), functional::ref<Const>(a34), functional::ref<Const>(a35),
                           functional::ref<Const>(a36), functional::ref<Const>(a37), functional::ref<Const>(a38),
                           functional::ref<Const>(a39), functional::ref<Const>(a40), functional::ref<Const>(a41),
                           functional::ref<Const>(a42), functional::ref<Const>(a43), functional::ref<Const>(a44),
                           functional::ref<Const>(a45), functional::ref<Const>(a46), functional::ref<Const>(a47),
                           functional::ref<Const>(a48), functional::ref<Const>(a49));
}


template<bool Const, typename T>
constexpr auto as_tuple(T& t, std::integral_constant<size_t, 50>) {
    CONSTEXPR_STRUCTURED auto& [a1, a2, a3, a4, a5, a6, a7, a8, a9,
                                a10, a11, a12, a13, a14, a15, a16, a17, a18, a19,
                                a20, a21, a22, a23, a24, a25, a26, a27, a28, a29,
                                a30, a31, a32, a33, a34, a35, a36, a37, a38, a39,
                                a40, a41, a42, a43, a44, a45, a46, a47, a48, a49,
                                a50] = t;
    return std::make_tuple(functional::ref<Const>(a1), functional::ref<Const>(a2),
                           functional::ref<Const>(a3), functional::ref<Const>(a4), functional::ref<Const>(a5),
                           functional::ref<Const>(a6), functional::ref<Const>(a7), functional::ref<Const>(a8),
                           functional::ref<Const>(a9), functional::ref<Const>(a10), functional::ref<Const>(a11),
                           functional::ref<Const>(a12), functional::ref<Const>(a13), functional::ref<Const>(a14),
                           functional::ref<Const>(a15), functional::ref<Const>(a16), functional::ref<Const>(a17),
                           functional::ref<Const>(a18), functional::ref<Const>(a19), functional::ref<Const>(a20),
                           functional::ref<Const>(a21), functional::ref<Const>(a22), functional::ref<Const>(a23),
                           functional::ref<Const>(a24), functional::ref<Const>(a25), functional::ref<Const>(a26),
                           functional::ref<Const>(a27), functional::ref<Const>(a28), functional::ref<Const>(a29),
                           functional::ref<Const>(a30), functional::ref<Const>(a31), functional::ref<Const>(a32),
                           functional::ref<Const>(a33), functional::ref<Const>(a34), functional::ref<Const>(a35),
                           functional::ref<Const>(a36), functional::ref<Const>(a37), functional::ref<Const>(a38),
                           functional::ref<Const>(a39), functional::ref<Const>(a40), functional::ref<Const>(a41),
                           functional::ref<Const>(a42), functional::ref<Const>(a43), functional::ref<Const>(a44),
                           functional::ref<Const>(a45), functional::ref<Const>(a46), functional::ref<Const>(a47),
                           functional::ref<Const>(a48), functional::ref<Const>(a49), functional::ref<Const>(a50));
}


template<bool Const, typename T>
constexpr auto as_tuple(T& t, std::integral_constant<size_t, 51>) {
    CONSTEXPR_STRUCTURED auto& [a1, a2, a3, a4, a5, a6, a7, a8, a9,
                                a10, a11, a12, a13, a14, a15, a16, a17, a18, a19,
                                a20, a21, a22, a23, a24, a25, a26, a27, a28, a29,
                                a30, a31, a32, a33, a34, a35, a36, a37, a38, a39,
                                a40, a41, a42, a43, a44, a45, a46, a47, a48, a49,
                                a50, a51] = t;
    return std::make_tuple(functional::ref<Const>(a1), functional::ref<Const>(a2),
                           functional::ref<Const>(a3), functional::ref<Const>(a4), functional::ref<Const>(a5),
                           functional::ref<Const>(a6), functional::ref<Const>(a7), functional::ref<Const>(a8),
                           functional::ref<Const>(a9), functional::ref<Const>(a10), functional::ref<Const>(a11),
                           functional::ref<Const>(a12), functional::ref<Const>(a13), functional::ref<Const>(a14),
                           functional::ref<Const>(a15), functional::ref<Const>(a16), functional::ref<Const>(a17),
                           functional::ref<Const>(a18), functional::ref<Const>(a19), functional::ref<Const>(a20),
                           functional::ref<Const>(a21), functional::ref<Const>(a22), functional::ref<Const>(a23),
                           functional::ref<Const>(a24), functional::ref<Const>(a25), functional::ref<Const>(a26),
                           functional::ref<Const>(a27), functional::ref<Const>(a28), functional::ref<Const>(a29),
                           functional::ref<Const>(a30), functional::ref<Const>(a31), functional::ref<Const>(a32),
                           functional::ref<Const>(a33), functional::ref<Const>(a34), functional::ref<Const>(a35),
                           functional::ref<Const>(a36), functional::ref<Const>(a37), functional::ref<Const>(a38),
                           functional::ref<Const>(a39), functional::ref<Const>(a40), functional::ref<Const>(a41),
                           functional::ref<Const>(a42), functional::ref<Const>(a43), functional::ref<Const>(a44),
                           functional::ref<Const>(a45), functional::ref<Const>(a46), functional::ref<Const>(a47),
                           functional::ref<Const>(a48), functional::ref<Const>(a49), functional::ref<Const>(a50),
                           functional::ref<Const>(a51));
}


template<bool Const, typename T>
constexpr auto as_tuple(T& t, std::integral_constant<size_t, 52>) {
    CONSTEXPR_STRUCTURED auto& [a1, a2, a3, a4, a5, a6, a7, a8, a9,
                                a10, a11, a12, a13, a14, a15, a16, a17, a18, a19,
                                a20, a21, a22, a23, a24, a25, a26, a27, a28, a29,
                                a30, a31, a32, a33, a34, a35, a36, a37, a38, a39,
                                a40, a41, a42, a43, a44, a45, a46, a47, a48, a49,
                                a50, a51, a52] = t;
    return std::make_tuple(functional::ref<Const>(a1), functional::ref<Const>(a2),
                           functional::ref<Const>(a3), functional::ref<Const>(a4), functional::ref<Const>(a5),
                           functional::ref<Const>(a6), functional::ref<Const>(a7), functional::ref<Const>(a8),
                           functional::ref<Const>(a9), functional::ref<Const>(a10), functional::ref<Const>(a11),
                           functional::ref<Const>(a12), functional::ref<Const>(a13), functional::ref<Const>(a14),
                           functional::ref<Const>(a15), functional::ref<Const>(a16), functional::ref<Const>(a17),
                           functional::ref<Const>(a18), functional::ref<Const>(a19), functional::ref<Const>(a20),
                           functional::ref<Const>(a21), functional::ref<Const>(a22), functional::ref<Const>(a23),
                           functional::ref<Const>(a24), functional::ref<Const>(a25), functional::ref<Const>(a26),
                           functional::ref<Const>(a27), functional::ref<Const>(a28), functional::ref<Const>(a29),
                           functional::ref<Const>(a30), functional::ref<Const>(a31), functional::ref<Const>(a32),
                           functional::ref<Const>(a33), functional::ref<Const>(a34), functional::ref<Const>(a35),
                           functional::ref<Const>(a36), functional::ref<Const>(a37), functional::ref<Const>(a38),
                           functional::ref<Const>(a39), functional::ref<Const>(a40), functional::ref<Const>(a41),
                           functional::ref<Const>(a42), functional::ref<Const>(a43), functional::ref<Const>(a44),
                           functional::ref<Const>(a45), functional::ref<Const>(a46), functional::ref<Const>(a47),
                           functional::ref<Const>(a48), functional::ref<Const>(a49), functional::ref<Const>(a50),
                           functional::ref<Const>(a51), functional::ref<Const>(a52));
}


template<bool Const, typename T>
constexpr auto as_tuple(T& t, std::integral_constant<size_t, 53>) {
    CONSTEXPR_STRUCTURED auto& [a1, a2, a3, a4, a5, a6, a7, a8, a9,
                                a10, a11, a12, a13, a14, a15, a16, a17, a18, a19,
                                a20, a21, a22, a23, a24, a25, a26, a27, a28, a29,
                                a30, a31, a32, a33, a34, a35, a36, a37, a38, a39,
                                a40, a41, a42, a43, a44, a45, a46, a47, a48, a49,
                                a50, a51, a52, a53] = t;
    return std::make_tuple(functional::ref<Const>(a1), functional::ref<Const>(a2),
                           functional::ref<Const>(a3), functional::ref<Const>(a4), functional::ref<Const>(a5),
                           functional::ref<Const>(a6), functional::ref<Const>(a7), functional::ref<Const>(a8),
                           functional::ref<Const>(a9), functional::ref<Const>(a10), functional::ref<Const>(a11),
                           functional::ref<Const>(a12), functional::ref<Const>(a13), functional::ref<Const>(a14),
                           functional::ref<Const>(a15), functional::ref<Const>(a16), functional::ref<Const>(a17),
                           functional::ref<Const>(a18), functional::ref<Const>(a19), functional::ref<Const>(a20),
                           functional::ref<Const>(a21), functional::ref<Const>(a22), functional::ref<Const>(a23),
                           functional::ref<Const>(a24), functional::ref<Const>(a25), functional::ref<Const>(a26),
                           functional::ref<Const>(a27), functional::ref<Const>(a28), functional::ref<Const>(a29),
                           functional::ref<Const>(a30), functional::ref<Const>(a31), functional::ref<Const>(a32),
                           functional::ref<Const>(a33), functional::ref<Const>(a34), functional::ref<Const>(a35),
                           functional::ref<Const>(a36), functional::ref<Const>(a37), functional::ref<Const>(a38),
                           functional::ref<Const>(a39), functional::ref<Const>(a40), functional::ref<Const>(a41),
                           functional::ref<Const>(a42), functional::ref<Const>(a43), functional::ref<Const>(a44),
                           functional::ref<Const>(a45), functional::ref<Const>(a46), functional::ref<Const>(a47),
                           functional::ref<Const>(a48), functional::ref<Const>(a49), functional::ref<Const>(a50),
                           functional::ref<Const>(a51), functional::ref<Const>(a52), functional::ref<Const>(a53));
}


template<bool Const, typename T>
constexpr auto as_tuple(T& t, std::integral_constant<size_t, 54>) {
    CONSTEXPR_STRUCTURED auto& [a1, a2, a3, a4, a5, a6, a7, a8, a9,
                                a10, a11, a12, a13, a14, a15, a16, a17, a18, a19,
                                a20, a21, a22, a23, a24, a25, a26, a27, a28, a29,
                                a30, a31, a32, a33, a34, a35, a36, a37, a38, a39,
                                a40, a41, a42, a43, a44, a45, a46, a47, a48, a49,
                                a50, a51, a52, a53, a54] = t;
    return std::make_tuple(functional::ref<Const>(a1), functional::ref<Const>(a2),
                           functional::ref<Const>(a3), functional::ref<Const>(a4), functional::ref<Const>(a5),
                           functional::ref<Const>(a6), functional::ref<Const>(a7), functional::ref<Const>(a8),
                           functional::ref<Const>(a9), functional::ref<Const>(a10), functional::ref<Const>(a11),
                           functional::ref<Const>(a12), functional::ref<Const>(a13), functional::ref<Const>(a14),
                           functional::ref<Const>(a15), functional::ref<Const>(a16), functional::ref<Const>(a17),
                           functional::ref<Const>(a18), functional::ref<Const>(a19), functional::ref<Const>(a20),
                           functional::ref<Const>(a21), functional::ref<Const>(a22), functional::ref<Const>(a23),
                           functional::ref<Const>(a24), functional::ref<Const>(a25), functional::ref<Const>(a26),
                           functional::ref<Const>(a27), functional::ref<Const>(a28), functional::ref<Const>(a29),
                           functional::ref<Const>(a30), functional::ref<Const>(a31), functional::ref<Const>(a32),
                           functional::ref<Const>(a33), functional::ref<Const>(a34), functional::ref<Const>(a35),
                           functional::ref<Const>(a36), functional::ref<Const>(a37), functional::ref<Const>(a38),
                           functional::ref<Const>(a39), functional::ref<Const>(a40), functional::ref<Const>(a41),
                           functional::ref<Const>(a42), functional::ref<Const>(a43), functional::ref<Const>(a44),
                           functional::ref<Const>(a45), functional::ref<Const>(a46), functional::ref<Const>(a47),
                           functional::ref<Const>(a48), functional::ref<Const>(a49), functional::ref<Const>(a50),
                           functional::ref<Const>(a51), functional::ref<Const>(a52), functional::ref<Const>(a53),
                           functional::ref<Const>(a54));
}


template<bool Const, typename T>
constexpr auto as_tuple(T& t, std::integral_constant<size_t, 55>) {
    CONSTEXPR_STRUCTURED auto& [a1, a2, a3, a4, a5, a6, a7, a8, a9,
                                a10, a11, a12, a13, a14, a15, a16, a17, a18, a19,
                                a20, a21, a22, a23, a24, a25, a26, a27, a28, a29,
                                a30, a31, a32, a33, a34, a35, a36, a37, a38, a39,
                                a40, a41, a42, a43, a44, a45, a46, a47, a48, a49,
                                a50, a51, a52, a53, a54, a55] = t;
    return std::make_tuple(functional::ref<Const>(a1), functional::ref<Const>(a2),
                           functional::ref<Const>(a3), functional::ref<Const>(a4), functional::ref<Const>(a5),
                           functional::ref<Const>(a6), functional::ref<Const>(a7), functional::ref<Const>(a8),
                           functional::ref<Const>(a9), functional::ref<Const>(a10), functional::ref<Const>(a11),
                           functional::ref<Const>(a12), functional::ref<Const>(a13), functional::ref<Const>(a14),
                           functional::ref<Const>(a15), functional::ref<Const>(a16), functional::ref<Const>(a17),
                           functional::ref<Const>(a18), functional::ref<Const>(a19), functional::ref<Const>(a20),
                           functional::ref<Const>(a21), functional::ref<Const>(a22), functional::ref<Const>(a23),
                           functional::ref<Const>(a24), functional::ref<Const>(a25), functional::ref<Const>(a26),
                           functional::ref<Const>(a27), functional::ref<Const>(a28), functional::ref<Const>(a29),
                           functional::ref<Const>(a30), functional::ref<Const>(a31), functional::ref<Const>(a32),
                           functional::ref<Const>(a33), functional::ref<Const>(a34), functional::ref<Const>(a35),
                           functional::ref<Const>(a36), functional::ref<Const>(a37), functional::ref<Const>(a38),
                           functional::ref<Const>(a39), functional::ref<Const>(a40), functional::ref<Const>(a41),
                           functional::ref<Const>(a42), functional::ref<Const>(a43), functional::ref<Const>(a44),
                           functional::ref<Const>(a45), functional::ref<Const>(a46), functional::ref<Const>(a47),
                           functional::ref<Const>(a48), functional::ref<Const>(a49), functional::ref<Const>(a50),
                           functional::ref<Const>(a51), functional::ref<Const>(a52), functional::ref<Const>(a53),
                           functional::ref<Const>(a54), functional::ref<Const>(a55));
}


template<bool Const, typename T>
constexpr auto as_tuple(T& t, std::integral_constant<size_t, 56>) {
    CONSTEXPR_STRUCTURED auto& [a1, a2, a3, a4, a5, a6, a7, a8, a9,
                                a10, a11, a12, a13, a14, a15, a16, a17, a18, a19,
                                a20, a21, a22, a23, a24, a25, a26, a27, a28, a29,
                                a30, a31, a32, a33, a34, a35, a36, a37, a38, a39,
                                a40, a41, a42, a43, a44, a45, a46, a47, a48, a49,
                                a50, a51, a52, a53, a54, a55, a56] = t;
    return std::make_tuple(functional::ref<Const>(a1), functional::ref<Const>(a2),
                           functional::ref<Const>(a3), functional::ref<Const>(a4), functional::ref<Const>(a5),
                           functional::ref<Const>(a6), functional::ref<Const>(a7), functional::ref<Const>(a8),
                           functional::ref<Const>(a9), functional::ref<Const>(a10), functional::ref<Const>(a11),
                           functional::ref<Const>(a12), functional::ref<Const>(a13), functional::ref<Const>(a14),
                           functional::ref<Const>(a15), functional::ref<Const>(a16), functional::ref<Const>(a17),
                           functional::ref<Const>(a18), functional::ref<Const>(a19), functional::ref<Const>(a20),
                           functional::ref<Const>(a21), functional::ref<Const>(a22), functional::ref<Const>(a23),
                           functional::ref<Const>(a24), functional::ref<Const>(a25), functional::ref<Const>(a26),
                           functional::ref<Const>(a27), functional::ref<Const>(a28), functional::ref<Const>(a29),
                           functional::ref<Const>(a30), functional::ref<Const>(a31), functional::ref<Const>(a32),
                           functional::ref<Const>(a33), functional::ref<Const>(a34), functional::ref<Const>(a35),
                           functional::ref<Const>(a36), functional::ref<Const>(a37), functional::ref<Const>(a38),
                           functional::ref<Const>(a39), functional::ref<Const>(a40), functional::ref<Const>(a41),
                           functional::ref<Const>(a42), functional::ref<Const>(a43), functional::ref<Const>(a44),
                           functional::ref<Const>(a45), functional::ref<Const>(a46), functional::ref<Const>(a47),
                           functional::ref<Const>(a48), functional::ref<Const>(a49), functional::ref<Const>(a50),
                           functional::ref<Const>(a51), functional::ref<Const>(a52), functional::ref<Const>(a53),
                           functional::ref<Const>(a54), functional::ref<Const>(a55), functional::ref<Const>(a56));
}


template<bool Const, typename T>
constexpr auto as_tuple(T& t, std::integral_constant<size_t, 57>) {
    CONSTEXPR_STRUCTURED auto& [a1, a2, a3, a4, a5, a6, a7, a8, a9,
                                a10, a11, a12, a13, a14, a15, a16, a17, a18, a19,
                                a20, a21, a22, a23, a24, a25, a26, a27, a28, a29,
                                a30, a31, a32, a33, a34, a35, a36, a37, a38, a39,
                                a40, a41, a42, a43, a44, a45, a46, a47, a48, a49,
                                a50, a51, a52, a53, a54, a55, a56, a57] = t;
    return std::make_tuple(functional::ref<Const>(a1), functional::ref<Const>(a2),
                           functional::ref<Const>(a3), functional::ref<Const>(a4), functional::ref<Const>(a5),
                           functional::ref<Const>(a6), functional::ref<Const>(a7), functional::ref<Const>(a8),
                           functional::ref<Const>(a9), functional::ref<Const>(a10), functional::ref<Const>(a11),
                           functional::ref<Const>(a12), functional::ref<Const>(a13), functional::ref<Const>(a14),
                           functional::ref<Const>(a15), functional::ref<Const>(a16), functional::ref<Const>(a17),
                           functional::ref<Const>(a18), functional::ref<Const>(a19), functional::ref<Const>(a20),
                           functional::ref<Const>(a21), functional::ref<Const>(a22), functional::ref<Const>(a23),
                           functional::ref<Const>(a24), functional::ref<Const>(a25), functional::ref<Const>(a26),
                           functional::ref<Const>(a27), functional::ref<Const>(a28), functional::ref<Const>(a29),
                           functional::ref<Const>(a30), functional::ref<Const>(a31), functional::ref<Const>(a32),
                           functional::ref<Const>(a33), functional::ref<Const>(a34), functional::ref<Const>(a35),
                           functional::ref<Const>(a36), functional::ref<Const>(a37), functional::ref<Const>(a38),
                           functional::ref<Const>(a39), functional::ref<Const>(a40), functional::ref<Const>(a41),
                           functional::ref<Const>(a42), functional::ref<Const>(a43), functional::ref<Const>(a44),
                           functional::ref<Const>(a45), functional::ref<Const>(a46), functional::ref<Const>(a47),
                           functional::ref<Const>(a48), functional::ref<Const>(a49), functional::ref<Const>(a50),
                           functional::ref<Const>(a51), functional::ref<Const>(a52), functional::ref<Const>(a53),
                           functional::ref<Const>(a54), functional::ref<Const>(a55), functional::ref<Const>(a56),
                           functional::ref<Const>(a57));
}


template<bool Const, typename T>
constexpr auto as_tuple(T& t, std::integral_constant<size_t, 58>) {
    CONSTEXPR_STRUCTURED auto& [a1, a2, a3, a4, a5, a6, a7, a8, a9,
                                a10, a11, a12, a13, a14, a15, a16, a17, a18, a19,
                                a20, a21, a22, a23, a24, a25, a26, a27, a28, a29,
                                a30, a31, a32, a33, a34, a35, a36, a37, a38, a39,
                                a40, a41, a42, a43, a44, a45, a46, a47, a48, a49,
                                a50, a51, a52, a53, a54, a55, a56, a57, a58] = t;
    return std::make_tuple(functional::ref<Const>(a1), functional::ref<Const>(a2),
                           functional::ref<Const>(a3), functional::ref<Const>(a4), functional::ref<Const>(a5),
                           functional::ref<Const>(a6), functional::ref<Const>(a7), functional::ref<Const>(a8),
                           functional::ref<Const>(a9), functional::ref<Const>(a10), functional::ref<Const>(a11),
                           functional::ref<Const>(a12), functional::ref<Const>(a13), functional::ref<Const>(a14),
                           functional::ref<Const>(a15), functional::ref<Const>(a16), functional::ref<Const>(a17),
                           functional::ref<Const>(a18), functional::ref<Const>(a19), functional::ref<Const>(a20),
                           functional::ref<Const>(a21), functional::ref<Const>(a22), functional::ref<Const>(a23),
                           functional::ref<Const>(a24), functional::ref<Const>(a25), functional::ref<Const>(a26),
                           functional::ref<Const>(a27), functional::ref<Const>(a28), functional::ref<Const>(a29),
                           functional::ref<Const>(a30), functional::ref<Const>(a31), functional::ref<Const>(a32),
                           functional::ref<Const>(a33), functional::ref<Const>(a34), functional::ref<Const>(a35),
                           functional::ref<Const>(a36), functional::ref<Const>(a37), functional::ref<Const>(a38),
                           functional::ref<Const>(a39), functional::ref<Const>(a40), functional::ref<Const>(a41),
                           functional::ref<Const>(a42), functional::ref<Const>(a43), functional::ref<Const>(a44),
                           functional::ref<Const>(a45), functional::ref<Const>(a46), functional::ref<Const>(a47),
                           functional::ref<Const>(a48), functional::ref<Const>(a49), functional::ref<Const>(a50),
                           functional::ref<Const>(a51), functional::ref<Const>(a52), functional::ref<Const>(a53),
                           functional::ref<Const>(a54), functional::ref<Const>(a55), functional::ref<Const>(a56),
                           functional::ref<Const>(a57), functional::ref<Const>(a58));
}


template<bool Const, typename T>
constexpr auto as_tuple(T& t, std::integral_constant<size_t, 59>) {
    CONSTEXPR_STRUCTURED auto& [a1, a2, a3, a4, a5, a6, a7, a8, a9,
                                a10, a11, a12, a13, a14, a15, a16, a17, a18, a19,
                                a20, a21, a22, a23, a24, a25, a26, a27, a28, a29,
                                a30, a31, a32, a33, a34, a35, a36, a37, a38, a39,
                                a40, a41, a42, a43, a44, a45, a46, a47, a48, a49,
                                a50, a51, a52, a53, a54, a55, a56, a57, a58, a59] = t;
    return std::make_tuple(functional::ref<Const>(a1), functional::ref<Const>(a2),
                           functional::ref<Const>(a3), functional::ref<Const>(a4), functional::ref<Const>(a5),
                           functional::ref<Const>(a6), functional::ref<Const>(a7), functional::ref<Const>(a8),
                           functional::ref<Const>(a9), functional::ref<Const>(a10), functional::ref<Const>(a11),
                           functional::ref<Const>(a12), functional::ref<Const>(a13), functional::ref<Const>(a14),
                           functional::ref<Const>(a15), functional::ref<Const>(a16), functional::ref<Const>(a17),
                           functional::ref<Const>(a18), functional::ref<Const>(a19), functional::ref<Const>(a20),
                           functional::ref<Const>(a21), functional::ref<Const>(a22), functional::ref<Const>(a23),
                           functional::ref<Const>(a24), functional::ref<Const>(a25), functional::ref<Const>(a26),
                           functional::ref<Const>(a27), functional::ref<Const>(a28), functional::ref<Const>(a29),
                           functional::ref<Const>(a30), functional::ref<Const>(a31), functional::ref<Const>(a32),
                           functional::ref<Const>(a33), functional::ref<Const>(a34), functional::ref<Const>(a35),
                           functional::ref<Const>(a36), functional::ref<Const>(a37), functional::ref<Const>(a38),
                           functional::ref<Const>(a39), functional::ref<Const>(a40), functional::ref<Const>(a41),
                           functional::ref<Const>(a42), functional::ref<Const>(a43), functional::ref<Const>(a44),
                           functional::ref<Const>(a45), functional::ref<Const>(a46), functional::ref<Const>(a47),
                           functional::ref<Const>(a48), functional::ref<Const>(a49), functional::ref<Const>(a50),
                           functional::ref<Const>(a51), functional::ref<Const>(a52), functional::ref<Const>(a53),
                           functional::ref<Const>(a54), functional::ref<Const>(a55), functional::ref<Const>(a56),
                           functional::ref<Const>(a57), functional::ref<Const>(a58), functional::ref<Const>(a59));
}


template<bool Const, typename T>
constexpr auto as_tuple(T& t, std::integral_constant<size_t, 60>) {
    CONSTEXPR_STRUCTURED auto& [a1, a2, a3, a4, a5, a6, a7, a8, a9,
                                a10, a11, a12, a13, a14, a15, a16, a17, a18, a19,
                                a20, a21, a22, a23, a24, a25, a26, a27, a28, a29,
                                a30, a31, a32, a33, a34, a35, a36, a37, a38, a39,
                                a40, a41, a42, a43, a44, a45, a46, a47, a48, a49,
                                a50, a51, a52, a53, a54, a55, a56, a57, a58, a59,
                                a60] = t;
    return std::make_tuple(functional::ref<Const>(a1), functional::ref<Const>(a2),
                           functional::ref<Const>(a3), functional::ref<Const>(a4), functional::ref<Const>(a5),
                           functional::ref<Const>(a6), functional::ref<Const>(a7), functional::ref<Const>(a8),
                           functional::ref<Const>(a9), functional::ref<Const>(a10), functional::ref<Const>(a11),
                           functional::ref<Const>(a12), functional::ref<Const>(a13), functional::ref<Const>(a14),
                           functional::ref<Const>(a15), functional::ref<Const>(a16), functional::ref<Const>(a17),
                           functional::ref<Const>(a18), functional::ref<Const>(a19), functional::ref<Const>(a20),
                           functional::ref<Const>(a21), functional::ref<Const>(a22), functional::ref<Const>(a23),
                           functional::ref<Const>(a24), functional::ref<Const>(a25), functional::ref<Const>(a26),
                           functional::ref<Const>(a27), functional::ref<Const>(a28), functional::ref<Const>(a29),
                           functional::ref<Const>(a30), functional::ref<Const>(a31), functional::ref<Const>(a32),
                           functional::ref<Const>(a33), functional::ref<Const>(a34), functional::ref<Const>(a35),
                           functional::ref<Const>(a36), functional::ref<Const>(a37), functional::ref<Const>(a38),
                           functional::ref<Const>(a39), functional::ref<Const>(a40), functional::ref<Const>(a41),
                           functional::ref<Const>(a42), functional::ref<Const>(a43), functional::ref<Const>(a44),
                           functional::ref<Const>(a45), functional::ref<Const>(a46), functional::ref<Const>(a47),
                           functional::ref<Const>(a48), functional::ref<Const>(a49), functional::ref<Const>(a50),
                           functional::ref<Const>(a51), functional::ref<Const>(a52), functional::ref<Const>(a53),
                           functional::ref<Const>(a54), functional::ref<Const>(a55), functional::ref<Const>(a56),
                           functional::ref<Const>(a57), functional::ref<Const>(a58), functional::ref<Const>(a59),
                           functional::ref<Const>(a60));
}


template<bool Const, typename T>
constexpr auto as_tuple(T& t, std::integral_constant<size_t, 61>) {
    CONSTEXPR_STRUCTURED auto& [a1, a2, a3, a4, a5, a6, a7, a8, a9,
                                a10, a11, a12, a13, a14, a15, a16, a17, a18, a19,
                                a20, a21, a22, a23, a24, a25, a26, a27, a28, a29,
                                a30, a31, a32, a33, a34, a35, a36, a37, a38, a39,
                                a40, a41, a42, a43, a44, a45, a46, a47, a48, a49,
                                a50, a51, a52, a53, a54, a55, a56, a57, a58, a59,
                                a60, a61] = t;
    return std::make_tuple(functional::ref<Const>(a1), functional::ref<Const>(a2),
                           functional::ref<Const>(a3), functional::ref<Const>(a4), functional::ref<Const>(a5),
                           functional::ref<Const>(a6), functional::ref<Const>(a7), functional::ref<Const>(a8),
                           functional::ref<Const>(a9), functional::ref<Const>(a10), functional::ref<Const>(a11),
                           functional::ref<Const>(a12), functional::ref<Const>(a13), functional::ref<Const>(a14),
                           functional::ref<Const>(a15), functional::ref<Const>(a16), functional::ref<Const>(a17),
                           functional::ref<Const>(a18), functional::ref<Const>(a19), functional::ref<Const>(a20),
                           functional::ref<Const>(a21), functional::ref<Const>(a22), functional::ref<Const>(a23),
                           functional::ref<Const>(a24), functional::ref<Const>(a25), functional::ref<Const>(a26),
                           functional::ref<Const>(a27), functional::ref<Const>(a28), functional::ref<Const>(a29),
                           functional::ref<Const>(a30), functional::ref<Const>(a31), functional::ref<Const>(a32),
                           functional::ref<Const>(a33), functional::ref<Const>(a34), functional::ref<Const>(a35),
                           functional::ref<Const>(a36), functional::ref<Const>(a37), functional::ref<Const>(a38),
                           functional::ref<Const>(a39), functional::ref<Const>(a40), functional::ref<Const>(a41),
                           functional::ref<Const>(a42), functional::ref<Const>(a43), functional::ref<Const>(a44),
                           functional::ref<Const>(a45), functional::ref<Const>(a46), functional::ref<Const>(a47),
                           functional::ref<Const>(a48), functional::ref<Const>(a49), functional::ref<Const>(a50),
                           functional::ref<Const>(a51), functional::ref<Const>(a52), functional::ref<Const>(a53),
                           functional::ref<Const>(a54), functional::ref<Const>(a55), functional::ref<Const>(a56),
                           functional::ref<Const>(a57), functional::ref<Const>(a58), functional::ref<Const>(a59),
                           functional::ref<Const>(a60), functional::ref<Const>(a61));
}


template<bool Const, typename T>
constexpr auto as_tuple(T& t, std::integral_constant<size_t, 62>) {
    CONSTEXPR_STRUCTURED auto& [a1, a2, a3, a4, a5, a6, a7, a8, a9,
                                a10, a11, a12, a13, a14, a15, a16, a17, a18, a19,
                                a20, a21, a22, a23, a24, a25, a26, a27, a28, a29,
                                a30, a31, a32, a33, a34, a35, a36, a37, a38, a39,
                                a40, a41, a42, a43, a44, a45, a46, a47, a48, a49,
                                a50, a51, a52, a53, a54, a55, a56, a57, a58, a59,
                                a60, a61, a62] = t;
    return std::make_tuple(functional::ref<Const>(a1), functional::ref<Const>(a2),
                           functional::ref<Const>(a3), functional::ref<Const>(a4), functional::ref<Const>(a5),
                           functional::ref<Const>(a6), functional::ref<Const>(a7), functional::ref<Const>(a8),
                           functional::ref<Const>(a9), functional::ref<Const>(a10), functional::ref<Const>(a11),
                           functional::ref<Const>(a12), functional::ref<Const>(a13), functional::ref<Const>(a14),
                           functional::ref<Const>(a15), functional::ref<Const>(a16), functional::ref<Const>(a17),
                           functional::ref<Const>(a18), functional::ref<Const>(a19), functional::ref<Const>(a20),
                           functional::ref<Const>(a21), functional::ref<Const>(a22), functional::ref<Const>(a23),
                           functional::ref<Const>(a24), functional::ref<Const>(a25), functional::ref<Const>(a26),
                           functional::ref<Const>(a27), functional::ref<Const>(a28), functional::ref<Const>(a29),
                           functional::ref<Const>(a30), functional::ref<Const>(a31), functional::ref<Const>(a32),
                           functional::ref<Const>(a33), functional::ref<Const>(a34), functional::ref<Const>(a35),
                           functional::ref<Const>(a36), functional::ref<Const>(a37), functional::ref<Const>(a38),
                           functional::ref<Const>(a39), functional::ref<Const>(a40), functional::ref<Const>(a41),
                           functional::ref<Const>(a42), functional::ref<Const>(a43), functional::ref<Const>(a44),
                           functional::ref<Const>(a45), functional::ref<Const>(a46), functional::ref<Const>(a47),
                           functional::ref<Const>(a48), functional::ref<Const>(a49), functional::ref<Const>(a50),
                           functional::ref<Const>(a51), functional::ref<Const>(a52), functional::ref<Const>(a53),
                           functional::ref<Const>(a54), functional::ref<Const>(a55), functional::ref<Const>(a56),
                           functional::ref<Const>(a57), functional::ref<Const>(a58), functional::ref<Const>(a59),
                           functional::ref<Const>(a60), functional::ref<Const>(a61), functional::ref<Const>(a62));
}


template<bool Const, typename T>
constexpr auto as_tuple(T& t, std::integral_constant<size_t, 63>) {
    CONSTEXPR_STRUCTURED auto& [a1, a2, a3, a4, a5, a6, a7, a8, a9,
                                a10, a11, a12, a13, a14, a15, a16, a17, a18, a19,
                                a20, a21, a22, a23, a24, a25, a26, a27, a28, a29,
                                a30, a31, a32, a33, a34, a35, a36, a37, a38, a39,
                                a40, a41, a42, a43, a44, a45, a46, a47, a48, a49,
                                a50, a51, a52, a53, a54, a55, a56, a57, a58, a59,
                                a60, a61, a62, a63] = t;
    return std::make_tuple(functional::ref<Const>(a1), functional::ref<Const>(a2),
                           functional::ref<Const>(a3), functional::ref<Const>(a4), functional::ref<Const>(a5),
                           functional::ref<Const>(a6), functional::ref<Const>(a7), functional::ref<Const>(a8),
                           functional::ref<Const>(a9), functional::ref<Const>(a10), functional::ref<Const>(a11),
                           functional::ref<Const>(a12), functional::ref<Const>(a13), functional::ref<Const>(a14),
                           functional::ref<Const>(a15), functional::ref<Const>(a16), functional::ref<Const>(a17),
                           functional::ref<Const>(a18), functional::ref<Const>(a19), functional::ref<Const>(a20),
                           functional::ref<Const>(a21), functional::ref<Const>(a22), functional::ref<Const>(a23),
                           functional::ref<Const>(a24), functional::ref<Const>(a25), functional::ref<Const>(a26),
                           functional::ref<Const>(a27), functional::ref<Const>(a28), functional::ref<Const>(a29),
                           functional::ref<Const>(a30), functional::ref<Const>(a31), functional::ref<Const>(a32),
                           functional::ref<Const>(a33), functional::ref<Const>(a34), functional::ref<Const>(a35),
                           functional::ref<Const>(a36), functional::ref<Const>(a37), functional::ref<Const>(a38),
                           functional::ref<Const>(a39), functional::ref<Const>(a40), functional::ref<Const>(a41),
                           functional::ref<Const>(a42), functional::ref<Const>(a43), functional::ref<Const>(a44),
                           functional::ref<Const>(a45), functional::ref<Const>(a46), functional::ref<Const>(a47),
                           functional::ref<Const>(a48), functional::ref<Const>(a49), functional::ref<Const>(a50),
                           functional::ref<Const>(a51), functional::ref<Const>(a52), functional::ref<Const>(a53),
                           functional::ref<Const>(a54), functional::ref<Const>(a55), functional::ref<Const>(a56),
                           functional::ref<Const>(a57), functional::ref<Const>(a58), functional::ref<Const>(a59),
                           functional::ref<Const>(a60), functional::ref<Const>(a61), functional::ref<Const>(a62),
                           functional::ref<Const>(a63));
}


