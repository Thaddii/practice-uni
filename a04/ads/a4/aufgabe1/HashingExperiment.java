package ads.a4.aufgabe1;

public class HashingExperiment {

    public static int uniformValues() {
        int collisions = 0;
        for (int i = 0; i < 1000; i++) {
            StringTable table = new StringTable(10);
            RandomString rnd = new RandomString();
            String s1 = rnd.nextUniform();
            String s2 = rnd.nextUniform();
            collisions += table.put(s1);
            collisions += table.put(s2);
        }
        return collisions;
    }

    public static int uniformValues2() {
        int collisions = 0;
        for (int i = 0; i < 1000; i++) {
            StringTable2 table = new StringTable2(10);
            RandomString rnd = new RandomString();
            String s1 = rnd.nextUniform();
            String s2 = rnd.nextUniform();
            collisions += table.put(s1);
            collisions += table.put(s2);
        }
        return collisions;
    }

    public static int gaussianValues() {
        int collisions = 0;
        for (int i = 0; i < 1000; i++) {
            StringTable table = new StringTable(10);
            RandomString rnd = new RandomString();
            String s1 = rnd.nextGaussian();
            String s2 = rnd.nextGaussian();
            collisions += table.put(s1);
            collisions += table.put(s2);
        }
        return collisions;
    }

    public static void main(String[] args) {
        int col1 = uniformValues();
        int col2 = uniformValues2();
        int col3 = gaussianValues();

        System.out.println("Kollisionen mit StringTable (modulo): " + col1);
        System.out.println("Kollisionen mit StringTable2 (min): " + col2);
        System.out.println("Kollisionen mit StringTable (gaussian): " + col3);

        System.out.println("\nErklärung:");
        System.out.println("Die Hashfunktion in StringTable2 verletzt die Wünschbarkeit der Gleichverteilung (Uniformität),");
        System.out.println("weil viele verschiedene Strings denselben Hashwert (M-1) bekommen. Dadurch entstehen viele Kollisionen.");
        System.out.println("Eine gute Hashfunktion sollte möglichst gleichmäßig auf die Buckets verteilen (Uniformität).");
        System.out.println("Bei der gaussianValues-Funktion ist die Gleichverteilung ebenfalls nicht gegeben, da die Werte nicht gleichverteilt sind.");
    }

}
