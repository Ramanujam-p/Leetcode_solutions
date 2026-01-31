class Solution {
    public char nextGreatestLetter(char[] letters, char target) {
        int low = 0;
        int high = letters.length - 1;

        // Binary search to find the smallest character strictly greater than target
        while (low <= high) {
            int mid = low + (high - low) / 2;
            
            if (letters[mid] <= target) {
                low = mid + 1; // Move right if current is less or equal
            } else {
                high = mid - 1; // Move left to find a smaller 'greater' character
            }
        }

        // Use modulo to wrap around if low exceeds array length
        return letters[low % letters.length];
    }
}
