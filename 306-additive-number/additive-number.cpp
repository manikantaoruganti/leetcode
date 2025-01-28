class Solution {  
public:  
    bool isAdditiveNumber(string num) {  
        const int length = num.length();  

        // Loop through possible lengths for the first number  
        for (int firstLength = 1; firstLength <= length / 2; ++firstLength) {  
            if (firstLength > 1 && num[0] == '0') return false; // Leading zero check  

            const long firstNumber = stol(num.substr(0, firstLength));  

            // Loop through possible lengths for the second number  
            for (int secondLength = firstLength + 1; max(firstLength, secondLength - firstLength) < length - secondLength + 1; ++secondLength) {  
                if (secondLength > firstLength + 1 && num[firstLength] == '0') break; // Leading zero check for second number  

                const long secondNumber = stol(num.substr(firstLength, secondLength - firstLength));  
                if (checkAdditive(num, firstNumber, secondNumber, secondLength)) {  
                    return true;  
                }  
            }  
        }  

        return false;  
    }  

private:  
    bool checkAdditive(const string& num, long firstNum, long secondNum, long start) {  
        if (start == num.length()) return true;  

        const long thirdNum = firstNum + secondNum;  
        const string thirdNumString = to_string(thirdNum);  

        // Check if the third number matches in the sequence  
        if (num.compare(start, thirdNumString.length(), thirdNumString) == 0) {  
            return checkAdditive(num, secondNum, thirdNum, start + thirdNumString.length());  
        }  

        return false;  
    }  
};