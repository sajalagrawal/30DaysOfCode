//https://www.hackerrank.com/challenges/30-generics
//Author - Sajal Agrawal
//@sajal.agrawal1997@gmail.com


public class Day21GenericsPractice {
  //Write your code here
	public static <T> void printArray(T[] array){
        for(int i=0;i<array.length;i++)
            System.out.println(array[i]);
    }
  
  //already provided in the editor
	public static void main(String args[]){
		Integer[] intArray = { 1, 2, 3 };
		String[] stringArray = { "Hello", "World" };

		printArray( intArray  );
		printArray( stringArray );

		if(Day21GenericsPractice.class.getDeclaredMethods().length > 2){
			System.out.println("You should only have 1 method named printArray.");
		}
	}

}
    
