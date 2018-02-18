print("template<bool Const, typename T>\n"\
"constexpr auto as_tuple(T& t, std::integral_constant<size_t, 0>) {{\n"\
"    return details::Nill{};\n"\
"}}\n\n")

for i in range(1, 64):
	ai_str = 'a1'
	fai_str = 'functional::ref<Const>(a1)'
	for j in range(2, i + 1):
		if j % 10 == 0:
                        ai_str += ',\n                                a{}'.format(j)
		else:
			ai_str += ', a{}'.format(j)

		if j % 3 == 0:
			fai_str += ',\n                           functional::ref<Const>(a{})'.format(j)
		else:
			fai_str += ', functional::ref<Const>(a{})'.format(j)

	print("template<bool Const, typename T>\n"\
		"constexpr auto as_tuple(T& t, std::integral_constant<size_t, {size}>) {{\n" \
                "    CONSTEXPR_STRUCTURED auto& [{ai}] = t;\n" \
		"    return std::make_tuple({fai});\n" \
		"}}\n\n".format(size=i, ai=ai_str, fai=fai_str))
