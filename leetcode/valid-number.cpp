                seenDot = true;
            }
            else if (c == 'e' || c == 'E') {
                if (seenE || !seenDigit)
                    return false;
                seenE = true;
                seenDigit = false; 
            }
            else if (c == '.') {
                if (seenDot || seenE)
                    return false;
                    return false;
            }
                if (i > 0 && s[i-1] != 'e' && s[i-1] != 'E')
            else if (c == '+' || c == '-') {
            }
                seenDigit = true;
            if (isdigit(c)) {

