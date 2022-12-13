#include "pch.h"
#include <cassert>

TEST(LiteralKonvertierung, signedint) {
	auto signedint = 5;
	std::string str = typeid(signedint).name();
	EXPECT_EQ(str, "int");
}

TEST(LiteralKonvertierung, unsignedint) {
	auto uint = 3u;
	std::string str2 = typeid(uint).name();
	EXPECT_EQ(str2, "unsigned int");

TEST(LiteralKonvertierung, unsignedint) {
	auto uint = 3u;
	std::string str2 = typeid(uint).name();
	EXPECT_EQ(str2, "unsigned int");
}