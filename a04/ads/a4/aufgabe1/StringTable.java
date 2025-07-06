package ads.a4.aufgabe1;

/**
 * An implementation of a hash table for strings.
 */
public class StringTable {

    private final String[] table;
    protected final int capacity;  // protected sodass StringTable2.java auf den Integer zugreifen kann
    private int size;
    private static final String DELETED = new String("<deleted>"); // Marker für gelöschte Einträge

    public StringTable(int capacity) {
        this.capacity = capacity;
        this.table = new String[capacity];
        this.size = 0;
    }

    /**
     * Compute the hash value for a string
     */
    public int hash(String s) {
        int sum = 0;
        for (int i = 0; i < s.length(); i++) {
            sum += s.charAt(i);
        }
        return sum % capacity;
    }

    /**
     * Add a string to the table
     * @return the number of collisions encountered
     */
    public int put(String s) {
        if (size == capacity) {
            throw new RuntimeException("Hash table is full");
        }
        int hash = hash(s);
        int collisions = 0;
        int idx = hash;
        while (table[idx] != null && !table[idx].equals(DELETED) && !table[idx].equals(s)) {
            collisions++;
            idx = (idx + 1) % capacity;
        }
        if (table[idx] == null || table[idx].equals(DELETED)) {
            table[idx] = s;
            size++;
        }
        // Falls der String schon vorhanden ist, wird er einfach überschrieben (keine size-Erhöhung)
        return collisions;
    }

    /**
     * Delete a string from the table
     * @return the number of collisions encountered
     */
    public int delete(String s) {
        int hash = hash(s);
        int collisions = 0;
        int idx = hash;
        while (table[idx] != null) {
            if (!table[idx].equals(DELETED) && table[idx].equals(s)) {
                table[idx] = DELETED;
                size--;
                return collisions;
            }
            collisions++;
            idx = (idx + 1) % capacity;
            if (collisions >= capacity) break; // Schutz vor Endlosschleife
        }
        return collisions;
    }

    /**
     * Check whether the table contains a string
     */
    public boolean contains(String s) {
        int hash = hash(s);
        int idx = hash;
        int probes = 0;
        while (table[idx] != null && probes < capacity) {
            if (!table[idx].equals(DELETED) && table[idx].equals(s)) {
                return true;
            }
            idx = (idx + 1) % capacity;
            probes++;
        }
        return false;
    }
}