package ads.a4.aufgabe1;

/**
 * An implementation of a hash table for strings.
 */
public class StringTable2 extends StringTable {

	public StringTable2(int capacity) {
        super(capacity);
    }

    /**
     * Compute the hash value for a string
     */
    public int hash(String s) {
        int sum = 0;
        for (int i = 0; i < s.length(); i++) {
            sum += s.charAt(i);
        }
        return Math.min(sum, capacity - 1);
    }

}
