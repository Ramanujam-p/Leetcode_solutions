class Solution {
    public String compressedString(String word) {
        int n = word.length();
        StringBuilder sb = new StringBuilder ();
        int c = 1;
        for(int i = 1 ; i <=n ;i++)
            {
                if(i<n &&word.charAt(i) == word.charAt(i-1)&&c<9)
                {
                    c++;
                }
                else
                {
                    sb.append(c);
    
                    sb.append(word.charAt(i-1));
                    
                    c=1;
                }
            }
        return sb.toString();
    }
}