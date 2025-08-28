class Solution {
    public boolean checkIfPangram(String sentence) {
        boolean[] a = new boolean[26];
        for(int i=0;i<sentence.length();i++)
        {
            char c = sentence.charAt(i);
            a[c - 'a'] = true;
        }
        for(int i=0;i<26;i++)
                if(!a[i])
                    return false;
        return true;
    }
}