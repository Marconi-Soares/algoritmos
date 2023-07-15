import java.util.LinkedList;

public class linkedlist {
    public static void main(String[] args) {
        LinkedList<String> linkedList = new LinkedList<String>();
        linkedList.push("A");
        linkedList.push("B");
        String last = linkedList.peekLast();

        System.out.println(last);
        System.out.println(linkedList);
    }
}
