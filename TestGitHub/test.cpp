#include <iostream>
#include <string>
#include <unordered_map>

bool isAnagram(const std::string& s1, const std::string& s2) {
    // ���ڿ��� ���̰� �ٸ��� �ֳʱ׷��� �ƴ�
    if (s1.length() != s2.length()) {
        return false;
    }

    std::unordered_map<char, int> freq;
    // ù ��° ���ڿ��� �� ���� �󵵼� ���
    for (char c : s1) {
        freq[c]++;
    }
    // �� ��° ���ڿ��� �� ���� �󵵼� ����
    for (char c : s2) {
        if (freq[c] == 0) {
            // �� ��° ���ڿ��� ���� ���ڰ� �����ϸ� �ֳʱ׷��� �ƴ�
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