public class Solution {
	public void arrange(ArrayList<Integer> a) {
        int n = a.size();
        int ind = 0;
        for (int i = 0; i<n;i++) {           
            a.add(a.get(a.get(i)));
        }
        for (int i = 0; i<n;i++) {
            a.remove(0);
        }
	}
}
