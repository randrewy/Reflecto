import sys

if len(sys.argv) < 2:
	print('usage: generate.py <max_members: int>')
	sys.exit()


max_members = 0
try:
	max_members = int(sys.argv[1])
except ValueError:
	print ("usage: generate.py <max_members: int>")
	sys.exit()


file = open("generated.hxx","w+")

file.write(\
"template<bool Const, typename T>\n"\
"constexpr auto as_tuple(T& t, std::integral_constant<size_t, 0>) {\n"\
"    return Nill{};\n"\
"}\n\n")

for i in range(1, max_members + 1):
	ai_str = 'a1'
	fai_str = 'functional::ref<Const>(a1)'

	indent_ai = 32
	indent_fai = 27

	for j in range(2, i + 1):
		if j % 10 == 0:
			ai_str += ',\n' + (' ' * indent_ai) + 'a{}'.format(j)
		else:
			ai_str += ', a{}'.format(j)

		if j % 3 == 0:
			fai_str += ',\n' + ' ' * indent_fai +  'functional::ref<Const>(a{})'.format(j)
		else:
			fai_str += ', functional::ref<Const>(a{})'.format(j)

	file.write(\
		"template<bool Const, typename T>\n"\
		"constexpr auto as_tuple(T& t, std::integral_constant<size_t, {size}>) {{\n" \
                "    CONSTEXPR_STRUCTURED auto& [{ai}] = t;\n" \
		"    return std::make_tuple({fai});\n" \
		"}}\n\n\n".format(size=i, ai=ai_str, fai=fai_str))


print("Finished!")
