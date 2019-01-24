public class Ac1 {

  public static void main(String[] args) {

    // There is no equivalent for C's sizeof() function in Java
    System.out.println("Size of byte: " + (Byte.SIZE/8) + " bytes.");
    System.out.println("Size of short: " + (Short.SIZE/8) + " bytes.");
    System.out.println("Size of int: " + (Integer.SIZE/8) + " bytes.");
    System.out.println("Size of long: " + (Long.SIZE/8) + " bytes.");
    System.out.println("Size of char: " + (Character.SIZE/8) + " bytes.");
    System.out.println("Size of float: " + (Float.SIZE/8) + " bytes.");
    System.out.println("Size of double: " + (Double.SIZE/8) + " bytes.");

  }
}
