class Solution {
public:
    string capitalizeTitle(string title) {
        int n = title.size();
        for(char &c:title)
            c = tolower(c);
        for(int i=0;i<n;)
        {
            int j = i;
            while(j<n && title[j]!=' ')
                j++;
            if(j-i>=3)
                title[i] = toupper(title[i]);
            i=j+1;
        }
        return title;
    }
};