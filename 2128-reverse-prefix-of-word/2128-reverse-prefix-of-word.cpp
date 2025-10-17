class Solution {
public:
    string reversePrefix(string word, char ch) {
        int s=-1;//To find the index of the characater,we initialize the variable to zero
        int n = word.size();//to find the size of the word
        for(int i=0;i<n;i++)
        {
            //iterate through the word
            if(ch==word[i])
            {//if the character found , then we update the variable
                s = i;
                break;
            }
        }
        if(s==-1) return word;
        int i = 0;
        int j = s;
        while(i<j)
        {
            char t = word[i];
            word[i] = word[j];
            word[j] = t;
            i++;
            j--;
        }
        return word;
    }
};