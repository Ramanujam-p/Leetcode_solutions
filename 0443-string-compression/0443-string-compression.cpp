class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size(),i=0,j=0;
        while(i<n)
        {
            char c = chars[i];
            int cnt = 0;
            while(i<n && chars[i]==c)
            {
                i++;
                cnt++;
            }
            chars[j++]=c;
            if(cnt>1)
            {
                string count = to_string(cnt);
                for(char c:count)
                    chars[j++]=c;
            }
        }
        return j;
    }
};