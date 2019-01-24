public class Ac2 {

  public static void main(String[] args) {

    long start = System.nanoTime();

    for(int i=0;i<100;i++) {
      System.out.printf(".\n");
    }

    long end = System.nanoTime();
    System.out.printf("The average time taken was %.1f ns%n", ((double) end - start) / 100);
  }
}
