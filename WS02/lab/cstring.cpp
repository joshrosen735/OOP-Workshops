/*Joshua Rosen
jrosen5@myseneca.ca
141652180
01-27-21*/
#include "cstring.h"

namespace sdds {

	void strCpy(char* des, const char* src)
	{
		int i = 0;
		while (src[i] != '\0')
		{
			des[i] = src[i];
			i++;
		}
		des[i] = '\0';
	}

	void strnCpy(char* des, const char* src, int len)
	{
		int i = 0;
		while (i < len && src[i] != '\0')
		{
			des[i] = src[i];
			i++;
		}
		if (i != len)
		{
			des[i] = '\0';
		}
	}

	int strCmp(const char* s1, const char* s2)
	{
		int i = 0;
		while (s1[i] != '\0' && s2[i] != '\0')
		{
			if (s1[i] > s2[i])
			{
				return 1;
			}
			if (s1[i] < s2[i])
			{
				return -1;
			}
			i++;
		}
		if (s1[i] == '\0' && s2[i] == '\0')
		{
			return 0;
		}
		if (s2[i] != '\0')
		{
			return -1;
		}
		return 1;
	}

	int strnCmp(const char* s1, const char* s2, int len)
	{
		int i = 0;
		while (i < len && s1[i] != '\0' && s2[i] != '\0')
		{
			if (s1[i] > s2[i])
			{
				return 1;
			}
			if (s1[i] < s2[i])
			{
				return -1;
			}
			i++;
		}
		if (i == len)
		{
			return 0;
		}
		if (s2[i] != '\0')
		{
			return -1;
		}
		return 1;
	}
	int strLen(const char* s)
	{
		int i = 0;
		while (s[i] != '\0')
		{
			i++;
		}
		return i;
	}
	const char* strStr(const char* str1, const char* str2)
	{
		int sz1 = strLen(str1), sz2 = strLen(str2);
		int i = 0, j = 0;
		int flag;

		while (i < sz1 - sz2 + 1)
		{
			flag = 1;
			while (j < sz2)
			{
				if (str1[i + j] != str2[j])
				{
					flag = 0;
					break;
				}
				j++;
			}
			if (flag == 1)
			{
				return str1 + i;
			}
			i++;
		}
		return nullptr;
	}
	void strCat(char* des, const char* src)
	{
		int szD = strLen(des), i = 0;
		while (src[i] != '\0')
		{
			des[szD + i] = src[i];
			i++;
		}
		des[szD + i] = '\0';
	}
}