

/**
 *
 * @author re
 */
public class CrackingTheCodingInterview {

    static Boolean isUnique(String str) {
        if (str.length() <= 1 && str.matches("\\p{Alpha}+")) {
            return false;
        }
        
        for (int i = 0; i < str.length(); i++) {
            char x = str.charAt(i);
            if ( str.substring(i+1, str.length()).indexOf(x) != -1 ) {
                return false;
            }
        }
        return true;
    }
    
    public static void main(String[] args) {
        String[] words = {"abcde", "hello", "apple", "kite", "padle"};
        for (String word : words) {
            System.out.println(word + ": " + isUnique(word));
        }
    }
    
}
