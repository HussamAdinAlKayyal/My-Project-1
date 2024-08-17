#pragma once
#include <string>
class Solution {
public:
    std::string intToRoman(int num) {
        std::string s = "";
        int digit;
        if (num / 1000 <= 3 && num / 1000 >= 1)
        {
            digit = num / 1000;
            while (digit != 0)
            {
                s += "M";
                digit--;
            }
        }
        if ((num / 100) % 10 > 0)
        {
            if ((num / 100) % 10 <= 3 && (num / 100) % 10 >= 1)
            {
                digit = (num / 100) % 10;
                while (digit != 0)
                {
                    s += "C";
                    digit--;
                }
            }
            else if ((num / 100) % 10 == 4)
                s += "CD";
            else if ((num / 100) % 10 >= 5 && (num / 100) % 10 <= 8)
            {
                s += "D";
                digit = (num / 100) % 10 - 5;
                while (digit != 0)
                {
                    s += "C";
                    digit--;
                }
            }
            else
                s += "CM";
        }
        if ((num / 10) % 10 > 0)
        {
            if ((num / 10) % 10 <= 3 && (num / 10) % 10 >= 1)
            {
                digit = (num / 10) % 10;
                while (digit != 0)
                {
                    s += "X";
                    digit--;
                }
            }
            else if ((num / 10) % 10 == 4)
                s += "XL";
            else if ((num / 10) % 10 >= 5 && (num / 10) % 10 <= 8)
            {
                s += "L";
                digit = (num / 10) % 10 - 5;
                while (digit != 0)
                {
                    s += "X";
                    digit--;
                }
            }
            else
                s += "XC";
        }
        if (num % 10 > 0)
        {
            if (num % 10 <= 3 && num % 10 >= 1)
            {
                digit = num % 10;
                while (digit != 0)
                {
                    s += "I";
                    digit--;
                }
            }
            else if (num % 10 == 4)
                s += "IV";
            else if (num % 10 >= 5 && num % 10 <= 8)
            {
                s += "V";
                digit = num % 10 - 5;
                while (digit != 0)
                {
                    s += "I";
                    digit--;
                }
            }
            else
                s += "IX";
        }
        return s;
    }
};