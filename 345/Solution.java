public class Solution {
    String reverseVowels(String s) {
        char[] ar = s.toCharArray();
        int i = 0;
        int j = s.length() - 1;
        String vowels = "aeiouAEIOU";

        while (i < j) {
            while (i < j) {
                char ch = ar[i];
                if (vowels.indexOf(ch) != -1) {
                    break;
                }
                i++;
            }
            while (i < j) {
                char ch2 = ar[j];
                if (vowels.indexOf(ch2) != -1) {
                    break;
                }
                j--;
            }

            if (i < j) {
                char temp = ar[i];
                ar[i] = ar[j];
                ar[j] = temp;
                i++;
                j--;
            }
        }
        return new String(ar);
    }
};
