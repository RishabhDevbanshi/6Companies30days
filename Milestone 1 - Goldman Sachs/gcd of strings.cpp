string gcdOfStrings(string str1, string str2) {
        return (str1+str2 != str2+str1) ? "" : str2.substr(0,__gcd(size(str1),size(str2)));
    }