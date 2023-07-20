#include <iostream>
#include <string>

void print(const std::string& text, const std::string& pattern) {
    int n= text.length();
    int p = pattern.length();

    for (int i = 0; i <=n- p; i++) {
        int j;
        for (j = 0; j < p; j++) {
            if (text[i + j] != pattern[j])
                break;
        }

        if (j == p) {
            
            std::cout << i + 1 << " ";
        }
    }
}

int main() {
    std::string text = "batmanandrobinarebat";
    std::string pattern = "bat";

    print(text, pattern);

    return 0;
}