
import java.util.*;
import java.util.Map.Entry;

/**
 * @author Jitendra Pandey
 * @since 09-July-2021.
 * @apiNote
 * Magical Cube: Problem asked in the Tech-Mahindra hiring challenge.
 */
public class MagicalCube {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int Q = sc.nextInt();
		ArrayDeque<Long> a = new ArrayDeque<>();
		ArrayList<Long> removedItemsList = new ArrayList<>();
		LinkedHashMap<Long, Long> map = new LinkedHashMap<>();
		while (Q-- > 0) {
			long X = sc.nextLong();
			long N = sc.nextLong();
			if (X == 1) {
				a.add(N);
				if (map.containsKey(N))
					map.put(N, map.get(N) + 1);

				else
					map.put(N, 1L);

			} else {
				if (a.isEmpty())
					continue;
				long element = findElementWithHighestOccurrence_closestToTail(map);
				removedItemsList.add(element);
				// remove the element closest to the tail, that means the last occurrence of the
				// element.
				a.removeLastOccurrence(element);
				// remove the count of the element by 1.
				map.put(element, map.get(element) - 1);
			}
		}
		System.out.print(removedItemsList.get(0));
		for (int i_out_ = 1; i_out_ < removedItemsList.size(); i_out_++) {
			System.out.print(" " + removedItemsList.get(i_out_));
		}
		sc.close();
	}

	private static long findElementWithHighestOccurrence_closestToTail(LinkedHashMap<Long, Long> map) {
		long highestOccurrence = -1;
		long element = 0;
		for (Entry<Long, Long> entry : map.entrySet()) {
			if (entry.getValue() >= highestOccurrence) {
				highestOccurrence = entry.getValue();
				element = entry.getKey();
			}
		}
		return element;
	}
}
