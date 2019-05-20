
package collections;

import java.util.HashSet;
import java.util.Iterator;
import java.util.LinkedHashSet;
import java.util.stream.Stream;

public class Collections {

    
    
    
    public void checkRepeatedValue() {
    
       int numbers [] =  {1,2,3,4,4,5};
       
       HashSet set =  new HashSet();
       for(int number : numbers){
           if(set.contains(number)){
             System.out.println("The repeated number is : " +number);
           }else {
           set.add(number);
           }
       }
       
       
       Stream stream = set.stream();
       
       stream.forEach((element)-> {System.out.println("The number : "+ element);});
       
           
       
       
    }

    public static void main(String[] args) {
      
        Collections collections =  new Collections();
        collections.checkRepeatedValue();
        
        
    }
    
}
