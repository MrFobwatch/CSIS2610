/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package javamath;

/**
 *
 * @author kyacucci
 */
public class JavaMath {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        int a = 10;
        int b = 2;
        double total = Math.pow(b,a);
        
        System.out.println(total);
        System.out.println(Math.round(Math.sqrt(total)));
    }
}
