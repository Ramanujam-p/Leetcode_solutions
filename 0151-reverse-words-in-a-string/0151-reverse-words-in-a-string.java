class Solution {
    public String reverseWords(String s) {
         s = s.trim();
         String[] w = s.split("\\s+");
         StringBuilder a = new StringBuilder();
         for(int i=w.length-1;i>=0;i--)
         {
           a.append(w[i]);
           if(i>0) a.append(" ");
         }
         return a.toString();
    }
}