static int val(char c) {
    switch (c) {
        case 'I': return 1;
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        case 'C': return 100;
        case 'D': return 500;
        case 'M': return 1000;
    }
    return 0;
}


int romanToInt(char* s) {
    // int romanArr[128];
    // romanArr['I'] = 1;
    // romanArr['V'] = 5;
    // romanArr['X'] = 10;
    // romanArr['L'] = 50;
    // romanArr['C'] = 100;
    // romanArr['D'] = 500;
    // romanArr['M'] = 1000;
    
    int i = 0;
    int result = 0;
    
    while (s[i]) {
        if (val(s[i + 1]) > val(s[i])) {
            result -= val(s[i++]);
        } else {
            result += val(s[i++]);
        }
    }
    return result;
}