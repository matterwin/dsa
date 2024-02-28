import java.util.PriorityQueue;

public class MinHeap {

    public static void main(String[] args) {
        PriorityQueue<Integer> minHeap = new PriorityQueue<>();

        minHeap.offer(8);
        minHeap.offer(3);
        minHeap.offer(10);
        minHeap.offer(1);
        minHeap.offer(6);

        System.out.println("Peek: " + minHeap.peek());  // Peek the minimum element
        System.out.println("Size: " + minHeap.size());  // Get the size of the heap

        minHeap.remove(3);  // Remove an element
        System.out.println("After removing 3, contains 3? " + minHeap.contains(3));  // Check if 3 is present
        System.out.println("Size after removing: " + minHeap.size());  // Get the new size

        minHeap.clear();  // Clear the heap
        System.out.println("Size after clearing: " + minHeap.size());  // Get the size after clearing
    }
}

