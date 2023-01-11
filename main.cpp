bool Find(std::string text, std::string pattern) { // Checks if a text contains a particular pattern
    long txtlen = text.length();
    long patlen = pattern.length();
    for (int i = 0; i < txtlen; i++) { // Iterate through text
        std::string smlstr = text.substr(i, patlen); // Create substring
        for (int a = 0; a < patlen; a++) { // Iterate through substring
            if (smlstr[a] == pattern[a] || pattern[a] == '%' || (pattern[a] == '#' && isdigit(smlstr.at(a)))) { // If letter meets one of these conditions go to the next letter
                if (a == patlen - 1) { // If index=pattern length-1, it matches
                    return true;
                }
                continue;
            }
            else { // If none of above, go to next index of text
                break;
            }
        }
    }
    return false;
}

int Count(std::string text, std::string pattern) { // Counts matches of a pattern in a text
    int txtlen = text.length();
    int patlen = pattern.length();
    int cnt = 0;
    for (int i = 0; i < txtlen; i++) { // Iterate through text
        std::string smlstr = text.substr(i, patlen); // Create substring
        for (int a = 0; a < patlen; a++) { // Iterate through substring
            if (smlstr[a] == pattern[a] || pattern[a] == '%' || (pattern[a] == '#' && isdigit(smlstr.at(a)))) { // If letter meets one of these conditions go to the next letter
                if (a == patlen - 1) { // If index=pattern length-1, it matches
                    cnt++; // Add to count
                }
                continue;
            }
            else {
                break;
            }
        }
    }
    return cnt;
}
