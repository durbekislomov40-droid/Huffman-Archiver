#include <iostream>
#include <map>
#include <string>

int main() {
    std::string text = "huffman algoritmi";
    std::map<char, int> frequency;

    // Har bir belgining necha marta qatnashganini sanash
    for (char c : text) {
        frequency[c]++;
    }

    // Natijani chiqarish
    std::cout << "Belgilar chastotasi:" << std::endl;
    for (auto const& [key, val] : frequency) {
        std::cout << "'" << key << "': " << val << std::endl;
    }

    return 0;
}
