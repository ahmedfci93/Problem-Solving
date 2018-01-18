public class NewClass {

    static class test implements Comparator<String> {

        @Override
        public int compare(String x, String y) {
            if (x.length() < y.length()) {
                return -1;
            }
            if (x.length() > y.length()) {
                return 1;
            }
            return 0;
        }
    }

    public static void main(String[] args) {
        PriorityQueue<String> pQueue;
        test comparator = new test();
        pQueue = new PriorityQueue<String>(comparator);
        pQueue.add("short");
        pQueue.add("very long indeed");
        pQueue.add("medium");
        while (pQueue.size() != 0) {
            System.out.println(pQueue.remove());
        }

    }
}
