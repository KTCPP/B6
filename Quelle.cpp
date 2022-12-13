#include "pch.h"

TEST(ASCII, dezimal) {
	char value = 75;
	EXPECT_EQ('K', value);
}

TEST(ASCII, binaer) {
	char value = 0b1110100;
	EXPECT_EQ('t', value);
}

TEST(ASCII, hex) {
	char value = 0x32;
	EXPECT_EQ('2', value);
}

TEST(ASCII, oktal) {
	char value = 053;
	EXPECT_EQ('+', value);
}

TEST(ASCII, Umlaut) {
	char value = 128;
	EXPECT_EQ('€', value);
	EXPECT_EQ(sizeof(value), 1);
}

TEST(ASCII, grosse) {
	EXPECT_EQ(sizeof(u'Ʊ'), 2);
	std::cout << (int)u'Ʊ' << std::endl;
}

TEST(ASCII, utf) {
	char16_t value = 433;
	EXPECT_EQ(u'Ʊ', value);
	EXPECT_EQ(sizeof(value), 2);
}

TEST(ASCII, Umlautplus) {
	char value = 128;
	char euro = '€';
	char b = '€';
	char d = '€';
	char c = euro + b + d;
	int i = euro + b + d;
	EXPECT_EQ(i, 3 * value);
	EXPECT_EQ(c, euro);
}

int funktion(char arr[], char character) {

	char zeichen = 'A';
	int iterator = 0;
	while (zeichen != '\0') {
		if (arr[iterator] == character) {
			return iterator;

			//zeichen ='\0';
		}
		else {
			iterator++;
			zeichen = arr[iterator];

		}
	}
		return -1;
}



TEST(INDIREKTION, testname) {
	char arr[] = "Guten Morgen";
	int index = funktion(arr, 'M');
	EXPECT_EQ(6, index);
	char value = arr[funktion(arr, 'M')];

	EXPECT_EQ('M', value);
}

TEST(TestCaseName, usecase) {
	char arr[] = "Guten Morgen";
	char value = arr[funktion(arr, 'M')];
	EXPECT_EQ('M', value);
}

TEST(TestCaseName, notfound) {
	char arr[] = "Guten Morgen";
	EXPECT_EQ(-1, funktion(arr, 'x'));
}

TEST(TestCaseName, case) {
	char arr[] = "ASDF";
	EXPECT_EQ(-1, funktion(arr, 'd'));
}

