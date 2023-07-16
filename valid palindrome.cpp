bool isPalindrom(char* left, char* right) {
    while (left < right) {
        if (*left++ != *right--) return false;
    }

    return true;
}

bool validPalindrome(char* s) {
    char* left = s;
    char* right = s + strlen(s) - 1;

    while (left < right) {
        if (*left == *right) {
            left++;
            right--;
        } else {
            return isPalindrom(left + 1, right) || isPalindrom(left, right - 1);
        }
    }

    return true;
}
