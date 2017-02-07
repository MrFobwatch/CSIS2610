/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package java.day.pkg5;

/**
 *
 * @author kyacucci
 */
public class JavaDay5 {
    static void outputArray(int array[]){
        System.out.print();
    }

    static int createRandomNumber(int range, int offset){
        int number = (int)(Math.random() * range+offset);
        
        return number;
    }
    
    public static void main(String[] args) {
        int size =20;
        int[] numbers = new int[size];
        
        for(int i=0; i<size; i++) {
            numbers[i] = createRandomNumber(100,0);
            System.out.print(numbers[i]);
            
        }
        
    }
}
