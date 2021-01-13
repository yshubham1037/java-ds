import java.io.*;
import java.util.*;

class queue_al {

  int f = 0, r = -1;
  int MAX = 5;
  ArrayList<String> q_al = new ArrayList<String>(MAX);

  boolean isEmpty() {
    return (f > r) ? true : false;
  }

  boolean isFull() {
    return (r == 4) ? true : false;
  }

  void enqueue() {
    if (isFull()) {
      System.out.println("The queue is full,Overflow");
      return;
    }
    Scanner sc = new Scanner(System.in);
    System.out.println("Enter the string to be inserted:");
    String a = sc.nextLine();
    r++;
    q_al.add(a);
  }

  void dequeue() {
    if (isEmpty()) {
      System.out.println("The queue is empty,Underflow");
      return;
    }
    System.out.println("Element deleted is: " + q_al.get(f));
    f++;
    if (f > r) {
      f = 0;
      r = -1;
    }
  }

  void disp() {
    if (isEmpty()) {
      System.out.println("The queue is empty: ");
      return;
    }
    System.out.println("The queue is: ");
    for (int i = f; i <= r; i++) System.out.println(q_al.get(i) + " ");
  }
}

public class twelvea {

  public static void main(String[] args) {
    int ch;
    Scanner sc = new Scanner(System.in);
    queue_al q = new queue_al();
    while (true) {
      System.out.println(
        "Enter:\n1 to insert\t2 to delete\t3 to Display\t4 to Exit"
      );
      ch = sc.nextInt();
      switch (ch) {
        case 1:
          q.enqueue();
          break;
        case 2:
          q.dequeue();
          break;
        case 3:
          q.disp();
          break;
        case 4:
          System.exit(0);
        default:
          System.out.println("INVALID CHOICE");
          break;
      }
    }
  }
}