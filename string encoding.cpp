string encode(string src)
{     
    string res = "";
    char ch = src[0] , cnt = 1;
    for(int i=1;i<src.size();i++)
    {
        if(src[i] == ch) cnt++;
        else
        {
            res += ch;
            res += to_string(cnt);
            ch = src[i] , cnt = 1;
        }
    }
    
    res += ch;
    res += to_string(cnt);
    
    return res;
}    