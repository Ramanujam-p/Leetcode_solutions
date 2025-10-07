class Solution {
    public String convertDateToBinary(String date) {
        String[] p = date.split("-");
        int year = Integer.parseInt(p[0]);
        int month = Integer.parseInt(p[1]);
        int day = Integer.parseInt(p[2]);
        String y = Integer.toBinaryString(year);
        String m = Integer.toBinaryString(month);
        String d = Integer.toBinaryString(day);
        return y+"-"+m+"-"+d;
    }
}