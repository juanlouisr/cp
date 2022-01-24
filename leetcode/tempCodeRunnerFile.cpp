    transform(s.begin(), s.end(), s.begin(), ::tolower);
    stack<char> stek;
    vector<char> slist;
    for (size_t i = 0; i < s.size(); i++)
    {
        if ('a' <= s[i] && s[i] <= 'z')
        {
            slist.push_back(s[i]);
        }
    }
    int len = slist.size();
    for (size_t i = 0; i < len/2; i++)
    {
        stek.push(slist[i]);
    }
    int mid = len % 2 == 0? len/2 : len/2+1;
    for (size_t i = mid; i < len; i++)
    {
        char c = stek.top();
        stek.pop();
        if (c != s[i])
        {
            return false;
        }
    }