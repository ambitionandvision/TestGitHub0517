#include <iostream>
#include <string>
#include <unordered_map>

bool isAnagram(const std::string& s1, const std::string& s2) {
    // 문자열의 길이가 다르면 애너그램이 아님
    if (s1.length() != s2.length()) {
        return false;
    }

    std::unordered_map<char, int> freq;
    // 첫 번째 문자열의 각 문자 빈도수 계산
    for (char c : s1) {
        freq[c]++;
    }
    // 두 번째 문자열의 각 문자 빈도수 차감
    for (char c : s2) {
        if (freq[c] == 0) {
            // 두 번째 문자열에 없는 문자가 등장하면 애너그램이 아님
            return false;
        }
        freq[c]--;
    }

    return true;
}

int main() {
    std::string s1, s2;
    std::cout << "Enter two words: ";
    std::cin >> s1 >> s2;
    if (isAnagram(s1, s2)) {
        std::cout << s1 << " and " << s2 << " are anagrams.\n";
    }
    else {
        std::cout << s1 << " and " << s2 << " are not anagrams.\n";
    }
    return 0;
}