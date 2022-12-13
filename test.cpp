#include "pch.h"


TEST(LiteralKonvertierung, char) {
	auto chara = 'A';
	std::string str = typeid(chara).name();
	EXPECT_EQ(str, "char");
	EXPECT_EQ(sizeof(chara), 1);
}

TEST(LiteralKonvertierung, wchar) {
	auto wch = L'A';
	std::string str = typeid(wch).name();
	EXPECT_EQ(str, "wchar_t");
	EXPECT_EQ(sizeof(wch), 2);
}

TEST(LiteralKonvertierung, wchar16) {
	auto wch16 = u'A';
	std::string str = typeid(wch16).name();
	EXPECT_EQ(str, "char16_t");
	EXPECT_EQ(sizeof(wch16), 2);
}

TEST(LiteralKonvertierung, wchar32) {
	auto wch32 = U'A';
	std::string str = typeid(wch32).name();
	EXPECT_EQ(str, "char32_t");
	EXPECT_EQ(sizeof(wch32), 4);
}

TEST(LiteralKonvertierung, signedint) {
	auto signedint = 5;
	std::string str = typeid(signedint).name();
	EXPECT_EQ(str, "int");
}

TEST(LiteralKonvertierung, unsignedint) {
	auto uint = 3u;
	std::string str2 = typeid(uint).name();
	EXPECT_EQ(str2, "unsigned int");

}

TEST(LiteralKonvertierung, longlong) {
	auto llint = 4ll;
	std::string str2 = typeid(llint).name();
	EXPECT_EQ(str2, "__int64");
	EXPECT_EQ(sizeof(llint), 8);
}

TEST(LiteralKonvertierung, unsingedlonglong) {
	auto ullint = 4ull;
	std::string str3 = typeid(ullint).name();
	EXPECT_EQ(str3, "unsigned __int64");
}

TEST(LiteralKonvertierung, longint) {
	auto lint = 4l;
	std::string str = typeid(lint).name();
	EXPECT_EQ(str, "long");
	EXPECT_EQ(sizeof(lint), 4);
}

TEST(LiteralKonvertierung, double) {
	auto ullint = 4.1;
	std::string str3 = typeid(ullint).name();
	EXPECT_EQ(str3, "double");
}

TEST(LiteralKonvertierung, longdouble) {
	auto ullint = 4.1l;
	std::string str3 = typeid(ullint).name();
	EXPECT_EQ(str3, "long double");
}

TEST(LiteralKonvertierung, float) {
	auto ullint = 4.1f;
	std::string str3 = typeid(ullint).name();
	EXPECT_EQ(str3, "float");
}

TEST(zahlensystem, testname) {
	int a = 365;
	int b = 0555;
	int c = 0x16D;
	int d = 0b1'0110'1101;
	int e = 0b101101101;
	int f = 123'456'789;
	EXPECT_EQ(a, b);
	EXPECT_EQ(a, c);
	EXPECT_EQ(a, d);
	EXPECT_EQ(d, e);
}

