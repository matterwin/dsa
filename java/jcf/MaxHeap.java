import java.util.PriorityQueue;
import java.util.Collections;

public class MaxHeap {

    public static void main(String[] args) {
        PriorityQueue<Integer> maxHeap = new PriorityQueue<>(Collections.reverseOrder());

        maxHeap.offer(8);
        maxHeap.offer(3);
        maxHeap.offer(10);
        maxHeap.offer(1);
        maxHeap.offer(6);

        System.out.println("Peek: " + maxHeap.peek());  // Peek the maximum element
        System.out.println("Size: " + maxHeap.size());  // Get the size of the heap

        maxHeap.remove(3);  // Remove an element
        System.out.println("After removing 3, contains 3? " + maxHeap.contains(3));  // Check if 3 is present
        System.out.println("Size after removing: " + maxHeap.size());  // Get the new size

        maxHeap.clear();  // Clear the heap
        System.out.println("Size after clearing: " + maxHeap.size());  // Get the size after clearing
    }
}

