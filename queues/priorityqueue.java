import java.util.Comparator;
import java.util.PriorityQueue;

public class priorityqueue {
    public static void main(String[] args) {
//        LinkedList<Double> queue = new LinkedList<Double>();
        PriorityQueue<Double> queue = new PriorityQueue<>(Comparator.reverseOrder());

        queue.offer(3.0);
        queue.offer(2.0);
        queue.offer(1.0);

        while(!queue.isEmpty()){
            System.out.println(queue.poll());
        }
    }
}
